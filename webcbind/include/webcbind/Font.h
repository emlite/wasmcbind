#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Font
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Font)
 */
DECLARE_EMLITE_TYPE(Font, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String Font_name(const Font *self);

/**
 * @brief Gets the `glyphsRendered` property. 
*/
unsigned long Font_glyphsRendered(const Font *self);

#ifdef __cplusplus
}
#endif
