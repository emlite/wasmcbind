#pragma once

#include <emlite/emlite.h>
#include "utils.h"
#include "Any.h"
#include "Function.h"

DECLARE_EMLITE_TYPE(jb_Promise, em_Val);

// Promise.then, catch, finally
jb_Promise jb_Promise_then(jb_Promise p, jb_Function on_fulfilled, jb_Function on_rejected);
jb_Promise jb_Promise_catch(jb_Promise p, jb_Function on_rejected);
jb_Promise jb_Promise_finally(jb_Promise p, jb_Function on_finally);

// Promise.resolve, reject (static)
jb_Promise jb_Promise_resolve(jb_Any value);
jb_Promise jb_Promise_reject(jb_Any reason);

