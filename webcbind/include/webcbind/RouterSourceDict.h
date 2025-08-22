#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RouterSourceDict */
DECLARE_EMLITE_TYPE(RouterSourceDict, em_Val);

/** @brief Getter of the cacheName property */
jb_String RouterSourceDict_cacheName(const RouterSourceDict *self);

/** @brief Setter of the cacheName property */
void RouterSourceDict_set_cacheName(RouterSourceDict* self, jb_String * value);

/** @brief Constructor of the RouterSourceDict dictionary type */
RouterSourceDict RouterSourceDict_new();

#ifdef __cplusplus
}
#endif
