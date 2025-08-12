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
    return (jb_Any){.inner = em_Val_await(p->inner) };
}
