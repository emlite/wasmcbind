#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo;
typedef struct MediaDecodingConfiguration MediaDecodingConfiguration;
typedef struct MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo;
typedef struct MediaEncodingConfiguration MediaEncodingConfiguration;


/**
 * @brief Interface MediaCapabilities
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilities)
 */
DECLARE_EMLITE_TYPE(MediaCapabilities, em_Val);

/**
 * @brief Calls the `decodingInfo` method. 
*/
jb_Promise MediaCapabilities_decodingInfo(MediaCapabilities* self , MediaDecodingConfiguration * configuration);

/**
 * @brief Calls the `encodingInfo` method. 
*/
jb_Promise MediaCapabilities_encodingInfo(MediaCapabilities* self , MediaEncodingConfiguration * configuration);

#ifdef __cplusplus
}
#endif
