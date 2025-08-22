#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type QueryOptions */
DECLARE_EMLITE_TYPE(QueryOptions, em_Val);

/** @brief Getter of the postscriptNames property */
jb_Array QueryOptions_postscriptNames(const QueryOptions *self);

/** @brief Setter of the postscriptNames property */
void QueryOptions_set_postscriptNames(QueryOptions* self, jb_Array * value);

/** @brief Constructor of the QueryOptions dictionary type */
QueryOptions QueryOptions_new();

#ifdef __cplusplus
}
#endif
