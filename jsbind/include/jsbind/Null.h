#pragma once

#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Null, em_Val);

jb_Null jb_Null_value();

#ifdef __cplusplus
}
#endif