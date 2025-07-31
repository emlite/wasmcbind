#pragma once

#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Undefined, em_Val);

jb_Undefined jb_Undefined_value();

#ifdef __cplusplus
}
#endif