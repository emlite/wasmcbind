#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFacePalette FontFacePalette;


/**
 * @brief Interface FontFacePalettes
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFacePalettes)
 */
DECLARE_EMLITE_TYPE(FontFacePalettes, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long FontFacePalettes_length(const FontFacePalettes *self);

#ifdef __cplusplus
}
#endif
