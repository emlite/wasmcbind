#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FontFacePalette
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalette)
 */
DECLARE_EMLITE_TYPE(FontFacePalette, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long FontFacePalette_length(const FontFacePalette *self);

/**
 * @brief Gets the `usableWithLightBackground` property. 
*/
bool FontFacePalette_usableWithLightBackground(const FontFacePalette *self);

/**
 * @brief Gets the `usableWithDarkBackground` property. 
*/
bool FontFacePalette_usableWithDarkBackground(const FontFacePalette *self);

#ifdef __cplusplus
}
#endif
