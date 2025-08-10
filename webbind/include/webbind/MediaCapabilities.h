#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo;
typedef struct MediaDecodingConfiguration MediaDecodingConfiguration;
typedef struct MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo;
typedef struct MediaEncodingConfiguration MediaEncodingConfiguration;

DECLARE_EMLITE_TYPE(MediaCapabilities, em_Val);

jb_Promise MediaCapabilities_decodingInfo(MediaCapabilities* self , MediaDecodingConfiguration * configuration);

jb_Promise MediaCapabilities_encodingInfo(MediaCapabilities* self , MediaEncodingConfiguration * configuration);

#ifdef __cplusplus
}
#endif
