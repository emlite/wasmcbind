#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;


/**
 * @brief Interface FontData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontData)
 */
DECLARE_EMLITE_TYPE(FontData, em_Val);

/**
 * @brief Calls the `blob` method. 
*/
jb_Promise FontData_blob(FontData* self );

/**
 * @brief Gets the `postscriptName` property. 
*/
jb_String FontData_postscriptName(const FontData *self);

/**
 * @brief Gets the `fullName` property. 
*/
jb_String FontData_fullName(const FontData *self);

/**
 * @brief Gets the `family` property. 
*/
jb_String FontData_family(const FontData *self);

/**
 * @brief Gets the `style` property. 
*/
jb_String FontData_style(const FontData *self);

#ifdef __cplusplus
}
#endif
