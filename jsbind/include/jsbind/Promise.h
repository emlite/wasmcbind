#pragma once

#include "Any.h"
#include "Function.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Promise, em_Val);

// Promise.then, catch, finally
jb_Promise jb_Promise_then(
    const jb_Promise *p,
    const jb_Function *on_fulfilled,
    const jb_Function *on_rejected
);
jb_Promise jb_Promise_catch(
    const jb_Promise *p, const jb_Function *on_rejected
);
jb_Promise jb_Promise_finally(
    const jb_Promise *p, const jb_Function *on_finally
);

// Promise.resolve, reject (static)
jb_Promise jb_Promise_resolve(const jb_Any *value);
jb_Promise jb_Promise_reject(const jb_Any *reason);

#ifdef __cplusplus
}
#endif
