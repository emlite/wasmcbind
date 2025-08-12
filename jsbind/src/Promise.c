#include <emlite/emlite.h>
#include <jsbind/Any.h>
#include <jsbind/Function.h>
#include <jsbind/Promise.h>

DEFINE_EMLITE_TYPE(jb_Promise, em_Val);

jb_Promise jb_Promise_then(
    const jb_Promise *p, const jb_Function *on_fulfilled, const jb_Function *on_rejected
) {
    em_Val v = em_Val_call(p->inner, "then", on_fulfilled->inner, on_rejected->inner);
    return (jb_Promise){.inner = v};
}

jb_Promise jb_Promise_catch(const jb_Promise *p, const jb_Function *on_rejected) {
    em_Val v = em_Val_call(p->inner, "catch", on_rejected->inner);
    return (jb_Promise){.inner = v};
}

jb_Promise jb_Promise_finally(const jb_Promise *p, const jb_Function *on_finally) {
    em_Val v = em_Val_call(p->inner, "finally", on_finally->inner);
    return (jb_Promise){.inner = v};
}

jb_Promise jb_Promise_resolve(const jb_Any *value) {
    em_Val ctor = em_Val_global("Promise");
    em_Val v    = em_Val_call(ctor, "resolve", value->inner);
    return (jb_Promise){.inner = v};
}

jb_Promise jb_Promise_reject(const jb_Any *reason) {
    em_Val ctor = em_Val_global("Promise");
    em_Val v    = em_Val_call(ctor, "reject", reason->inner);
    return (jb_Promise){.inner = v};
}

jb_Any jb_Promise_await(const jb_Promise *p) {
    // Note: In C, we cannot implement true async/await like C++20 coroutines
    // This is a synchronous wait using a basic polling approach
    // In a real implementation, this would need proper async runtime support

    // For now, use a simple approach that tries to resolve the promise immediately
    // This won't work for all promises but provides the interface
    em_Val try_code =
        em_Val_from_string("const promise = arguments[0];"
                           "let result = undefined;"
                           "let resolved = false;"
                           "promise.then(value => { result = value; resolved = true; })"
                           "      .catch(error => { result = error; resolved = true; });"
                           "// In a proper implementation, we would wait here"
                           "// For now, just return the promise itself as a fallback"
                           "return promise;");
    em_Val func   = em_Val_call(em_Val_global("Function"), "constructor", try_code);
    em_Val result = em_Val_call(func, "call", em_Val_null(), p->inner);
    return (jb_Any){.inner = result};
}
