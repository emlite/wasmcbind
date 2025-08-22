#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MediaConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaEncodingConfiguration */
DECLARE_EMLITE_TYPE(MediaEncodingConfiguration, MediaConfiguration);

/** @brief Getter of the type property */
MediaEncodingType MediaEncodingConfiguration_type(const MediaEncodingConfiguration *self);

/** @brief Setter of the type property */
void MediaEncodingConfiguration_set_type(MediaEncodingConfiguration* self, MediaEncodingType * value);

/** @brief Constructor of the MediaEncodingConfiguration dictionary type */
MediaEncodingConfiguration MediaEncodingConfiguration_new();

#ifdef __cplusplus
}
#endif
