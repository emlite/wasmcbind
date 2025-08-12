#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaImage MediaImage;


/**
 * @brief Interface ChapterInformation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ChapterInformation)
 */
DECLARE_EMLITE_TYPE(ChapterInformation, em_Val);

/**
 * @brief Gets the `title` property. 
*/
jb_String ChapterInformation_title(const ChapterInformation *self);

/**
 * @brief Gets the `startTime` property. 
*/
double ChapterInformation_startTime(const ChapterInformation *self);

/**
 * @brief Gets the `artwork` property. 
*/
jb_Array ChapterInformation_artwork(const ChapterInformation *self);

#ifdef __cplusplus
}
#endif
