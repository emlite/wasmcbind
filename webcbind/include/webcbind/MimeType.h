#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Plugin Plugin;


/**
 * @brief Interface MimeType
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MimeType)
 */
DECLARE_EMLITE_TYPE(MimeType, em_Val);

/**
 * @brief Gets the `type` property. 
*/
jb_String MimeType_type(const MimeType *self);

/**
 * @brief Gets the `description` property. 
*/
jb_String MimeType_description(const MimeType *self);

/**
 * @brief Gets the `suffixes` property. 
*/
jb_String MimeType_suffixes(const MimeType *self);

/**
 * @brief Gets the `enabledPlugin` property. 
*/
Plugin MimeType_enabledPlugin(const MimeType *self);

#ifdef __cplusplus
}
#endif
