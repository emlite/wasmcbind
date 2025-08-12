#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaSource.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ManagedMediaSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource)
 */
DECLARE_EMLITE_TYPE(ManagedMediaSource, MediaSource);

/**
 * @brief Creates a new `ManagedMediaSource` object. 
*/
ManagedMediaSource ManagedMediaSource_new();

/**
 * @brief Gets the `streaming` property. 
*/
bool ManagedMediaSource_streaming(const ManagedMediaSource *self);

/**
 * @brief Gets the `onstartstreaming` property. 
*/
jb_Any ManagedMediaSource_onstartstreaming(const ManagedMediaSource *self);

/**
 * @brief Sets the `onstartstreaming` property. 
*/
void ManagedMediaSource_set_onstartstreaming(ManagedMediaSource* self, jb_Any * value);

/**
 * @brief Gets the `onendstreaming` property. 
*/
jb_Any ManagedMediaSource_onendstreaming(const ManagedMediaSource *self);

/**
 * @brief Sets the `onendstreaming` property. 
*/
void ManagedMediaSource_set_onendstreaming(ManagedMediaSource* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
