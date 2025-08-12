#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UnderlyingSink */
DECLARE_EMLITE_TYPE(UnderlyingSink, em_Val);

/** @brief Getter of the start property */
jb_Function UnderlyingSink_start(const UnderlyingSink *self);

/** @brief Setter of the start property */
void UnderlyingSink_set_start(UnderlyingSink* self, jb_Function * value);

/** @brief Getter of the write property */
jb_Function UnderlyingSink_write(const UnderlyingSink *self);

/** @brief Setter of the write property */
void UnderlyingSink_set_write(UnderlyingSink* self, jb_Function * value);

/** @brief Getter of the close property */
jb_Function UnderlyingSink_close(const UnderlyingSink *self);

/** @brief Setter of the close property */
void UnderlyingSink_set_close(UnderlyingSink* self, jb_Function * value);

/** @brief Getter of the abort property */
jb_Function UnderlyingSink_abort(const UnderlyingSink *self);

/** @brief Setter of the abort property */
void UnderlyingSink_set_abort(UnderlyingSink* self, jb_Function * value);

/** @brief Getter of the type property */
jb_Any UnderlyingSink_type(const UnderlyingSink *self);

/** @brief Setter of the type property */
void UnderlyingSink_set_type(UnderlyingSink* self, jb_Any * value);

/** @brief Constructor of the UnderlyingSink dictionary type */
UnderlyingSink UnderlyingSink_new();

#ifdef __cplusplus
}
#endif
