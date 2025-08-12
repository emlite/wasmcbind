#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ProtectedAudienceUtilities
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudienceUtilities)
 */
DECLARE_EMLITE_TYPE(ProtectedAudienceUtilities, em_Val);

/**
 * @brief Calls the `encodeUtf8` method. 
*/
jb_Uint8Array ProtectedAudienceUtilities_encodeUtf8(ProtectedAudienceUtilities* self , jb_String * input);

/**
 * @brief Calls the `decodeUtf8` method. 
*/
jb_String ProtectedAudienceUtilities_decodeUtf8(ProtectedAudienceUtilities* self , jb_Uint8Array * bytes);

#ifdef __cplusplus
}
#endif
