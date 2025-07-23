#include <webbind/WebAssembly.h>
#include <webbind/Instance.h>
#include <webbind/Module.h>


bool WebAssembly_validate(jb_Any * bytes) {
    return em_Val_as(bool, em_Val_call(em_Val_global("webassembly"), "validate", em_Val_from(bytes)));
}

jb_Promise WebAssembly_compile(jb_Any * bytes) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "compile", em_Val_from(bytes)));
}

jb_Promise WebAssembly_instantiate0(Module * moduleObject) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "instantiate", em_Val_from(moduleObject)));
}

jb_Promise WebAssembly_instantiate1(Module * moduleObject, jb_Object * importObject) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "instantiate", em_Val_from(moduleObject), em_Val_from(importObject)));
}



jb_Promise WebAssembly_compileStreaming(jb_Promise * source) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "compileStreaming", em_Val_from(source)));
}

jb_Promise WebAssembly_instantiateStreaming0(jb_Promise * source) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "instantiateStreaming", em_Val_from(source)));
}

jb_Promise WebAssembly_instantiateStreaming1(jb_Promise * source, jb_Object * importObject) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("webassembly"), "instantiateStreaming", em_Val_from(source), em_Val_from(importObject)));
}

