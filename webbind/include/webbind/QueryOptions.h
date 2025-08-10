#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(QueryOptions, em_Val);

jb_Array QueryOptions_postscriptNames(const QueryOptions *self);

void QueryOptions_set_postscriptNames(QueryOptions* self, jb_Array * value);

QueryOptions QueryOptions_new();

#ifdef __cplusplus
}
#endif
