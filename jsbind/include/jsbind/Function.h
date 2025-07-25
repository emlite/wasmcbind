#pragma once

#include <emlite/emlite.h>
#include "utils.h"

DECLARE_EMLITE_TYPE(jb_Function, em_Val);

#define FUNC(x, data) ((jb_Function){.inner = em_Val_make_fn(x, data)})