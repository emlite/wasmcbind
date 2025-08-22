#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaSessionActionDetails */
DECLARE_EMLITE_TYPE(MediaSessionActionDetails, em_Val);

/** @brief Getter of the action property */
MediaSessionAction MediaSessionActionDetails_action(const MediaSessionActionDetails *self);

/** @brief Setter of the action property */
void MediaSessionActionDetails_set_action(MediaSessionActionDetails* self, MediaSessionAction * value);

/** @brief Getter of the seekOffset property */
double MediaSessionActionDetails_seekOffset(const MediaSessionActionDetails *self);

/** @brief Setter of the seekOffset property */
void MediaSessionActionDetails_set_seekOffset(MediaSessionActionDetails* self, double value);

/** @brief Getter of the seekTime property */
double MediaSessionActionDetails_seekTime(const MediaSessionActionDetails *self);

/** @brief Setter of the seekTime property */
void MediaSessionActionDetails_set_seekTime(MediaSessionActionDetails* self, double value);

/** @brief Getter of the fastSeek property */
bool MediaSessionActionDetails_fastSeek(const MediaSessionActionDetails *self);

/** @brief Setter of the fastSeek property */
void MediaSessionActionDetails_set_fastSeek(MediaSessionActionDetails* self, bool value);

/** @brief Getter of the isActivating property */
bool MediaSessionActionDetails_isActivating(const MediaSessionActionDetails *self);

/** @brief Setter of the isActivating property */
void MediaSessionActionDetails_set_isActivating(MediaSessionActionDetails* self, bool value);

/** @brief Constructor of the MediaSessionActionDetails dictionary type */
MediaSessionActionDetails MediaSessionActionDetails_new();

#ifdef __cplusplus
}
#endif
