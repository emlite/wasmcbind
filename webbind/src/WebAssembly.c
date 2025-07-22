#include <webbind/WebAssembly.h>
#include <webbind/Instance.h>
#include <webbind/Module.h>


bool WebAssembly_validate(const jb_Any* bytes) {
    return em_Val_as(bool, em_Val_global("webassembly").call("validate", bytes));
}

jb_Promise WebAssembly_compile(const jb_Any* bytes) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("compile", bytes));
}

jb_Promise WebAssembly_instantiate(const jb_Any* bytes) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiate", bytes));
}

jb_Promise WebAssembly_instantiate(const jb_Any* bytes, const jb_Object* importObject) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiate", bytes, importObject));
}

jb_Promise WebAssembly_instantiate(const Module* moduleObject) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiate", moduleObject));
}

jb_Promise WebAssembly_instantiate(const Module* moduleObject, const jb_Object* importObject) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiate", moduleObject, importObject));
}



jb_Promise WebAssembly_compileStreaming(const jb_Promise* source) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("compileStreaming", source));
}

jb_Promise WebAssembly_instantiateStreaming(const jb_Promise* source) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiateStreaming", source));
}

jb_Promise WebAssembly_instantiateStreaming(const jb_Promise* source, const jb_Object* importObject) {
    return em_Val_as(jb_Promise, em_Val_global("webassembly").call("instantiateStreaming", source, importObject));
}

