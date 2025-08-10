import { getAllTypeRefs } from "./type-analyzer.js";
import { dictOwner } from "../globals.js";

export class DependencyResolver {
  constructor(interfaces, dicts, enums) {
    this.interfaces = interfaces;
    this.dicts = dicts;
    this.enums = enums;
    this.dictDepGraph = new Map();
    this.dictOrdered = [];
  }

  prepare() {
    this.buildDictionaryDependencyGraph();
    this.topologicalSortDictionaries();
  }

  buildDictionaryDependencyGraph() {
    // Build dependency graph for dictionaries
    for (const [dictName, dict] of this.dicts) {
      const deps = new Set();
      const refs = getAllTypeRefs(dict.members);

      // Add inheritance dependency
      if (dict.inheritance) {
        deps.add(dict.inheritance);
      }

      refs.forEach((ref) => {
        if (this.dicts.has(ref) && ref !== dictName) {
          deps.add(ref);
        }
      });

      this.dictDepGraph.set(dictName, deps);
    }
  }

  topologicalSortDictionaries() {
    const visited = new Set();
    const temp = new Set();
    const result = [];

    const visit = (dict) => {
      if (temp.has(dict)) {
        console.warn(
          `Circular dependency detected involving dictionary: ${dict}`
        );
        return;
      }
      if (visited.has(dict)) return;

      temp.add(dict);
      const deps = this.dictDepGraph.get(dict) || new Set();

      for (const dep of deps) {
        if (this.dicts.has(dep)) {
          visit(dep);
        }
      }

      temp.delete(dict);
      visited.add(dict);
      result.push(dict);
    };

    for (const dictName of this.dicts.keys()) {
      visit(dictName);
    }

    this.dictOrdered = result;
  }

  resolveDictionaryDependencies(dictName, dict) {
    const forwardDecls = new Set();
    const hdrIncludes = new Set();
    const srcIncludes = new Set();
    const refs = getAllTypeRefs(dict.members);

    // Add inheritance dependency
    if (dict.inheritance && this.dicts.has(dict.inheritance)) {
      const inhFile = dictOwner.get(dict.inheritance);
      if (inhFile) {
        hdrIncludes.add(`#include "${inhFile}"`);
      }
    }

    refs.forEach((ref) => {
      if (this.dicts.has(ref) && ref !== dictName) {
        const depFile = dictOwner.get(ref);
        if (depFile) {
          hdrIncludes.add(`#include "${depFile}"`);
        } else {
          forwardDecls.add(ref);
        }
      } else if (this.interfaces.has(ref)) {
        forwardDecls.add(ref);
        srcIncludes.add(`#include <webbind/${ref}.h>`);
      }
    });

    return {
      forwardDecls: Array.from(forwardDecls),
      hdrIncludes: Array.from(hdrIncludes),
      srcIncludes: Array.from(srcIncludes),
    };
  }

  resolveInterfaceDependencies(interfaceName, members) {
    const forwardDecls = new Set();
    const srcIncludes = new Set();
    const hdrIncludes = new Set();
    
    const refs = getAllTypeRefs(members);
    
    // Add parent class include if needed
    const interfaceRec = this.interfaces.get(interfaceName);
    const parent = interfaceRec?.inheritance;
    if (parent) {
      hdrIncludes.add(`#include "${parent}.h"`);
    }

    refs.forEach((ref) => {
      if (this.dicts.has(ref)) {
        const dictFile = dictOwner.get(ref);
        if (dictFile) {
          forwardDecls.add(ref);
          srcIncludes.add(`#include <webbind/${dictFile}>`);
        } else {
          forwardDecls.add(ref);
        }
      } else if (this.interfaces.has(ref) && ref !== parent && ref !== interfaceName) {
        forwardDecls.add(ref);
        srcIncludes.add(`#include <webbind/${ref}.h>`);
      }
    });

    return {
      forwardDecls: Array.from(forwardDecls),
      hdrIncludes: Array.from(hdrIncludes),
      srcIncludes: Array.from(srcIncludes),
    };
  }

  resolveNamespaceDependencies(nsRec) {
    const forwardDecls = new Set();
    const hdrIncludes = new Set();
    const srcIncludes = new Set();
    const refs = getAllTypeRefs(nsRec.members);

    refs.forEach((ref) => {
      if (this.dicts.has(ref)) {
        const dictFile = dictOwner.get(ref);
        if (dictFile) {
          hdrIncludes.add(`#include "${dictFile}"`);
        } else {
          forwardDecls.add(ref);
        }
      } else if (this.interfaces.has(ref)) {
        forwardDecls.add(ref);
        hdrIncludes.add(`#include "${ref}.h"`);
      }
    });

    return {
      forwardDecls: Array.from(forwardDecls),
      hdrIncludes: Array.from(hdrIncludes),
      srcIncludes: Array.from(srcIncludes),
    };
  }
}