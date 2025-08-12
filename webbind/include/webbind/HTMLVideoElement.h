#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLMediaElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoPlaybackQuality VideoPlaybackQuality;
typedef struct PictureInPictureWindow PictureInPictureWindow;


/**
 * @brief Interface HTMLVideoElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLVideoElement)
 */
DECLARE_EMLITE_TYPE(HTMLVideoElement, HTMLMediaElement);

/**
 * @brief Creates a new `HTMLVideoElement` object. 
*/
HTMLVideoElement HTMLVideoElement_new();

/**
 * @brief Gets the `width` property. 
*/
unsigned long HTMLVideoElement_width(const HTMLVideoElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLVideoElement_set_width(HTMLVideoElement* self, unsigned long value);

/**
 * @brief Gets the `height` property. 
*/
unsigned long HTMLVideoElement_height(const HTMLVideoElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLVideoElement_set_height(HTMLVideoElement* self, unsigned long value);

/**
 * @brief Gets the `videoWidth` property. 
*/
unsigned long HTMLVideoElement_videoWidth(const HTMLVideoElement *self);

/**
 * @brief Gets the `videoHeight` property. 
*/
unsigned long HTMLVideoElement_videoHeight(const HTMLVideoElement *self);

/**
 * @brief Gets the `poster` property. 
*/
jb_String HTMLVideoElement_poster(const HTMLVideoElement *self);

/**
 * @brief Sets the `poster` property. 
*/
void HTMLVideoElement_set_poster(HTMLVideoElement* self, jb_String * value);

/**
 * @brief Gets the `playsInline` property. 
*/
bool HTMLVideoElement_playsInline(const HTMLVideoElement *self);

/**
 * @brief Sets the `playsInline` property. 
*/
void HTMLVideoElement_set_playsInline(HTMLVideoElement* self, bool value);

/**
 * @brief Calls the `getVideoPlaybackQuality` method. 
*/
VideoPlaybackQuality HTMLVideoElement_getVideoPlaybackQuality(HTMLVideoElement* self );

/**
 * @brief Calls the `requestPictureInPicture` method. 
*/
jb_Promise HTMLVideoElement_requestPictureInPicture(HTMLVideoElement* self );

/**
 * @brief Gets the `onenterpictureinpicture` property. 
*/
jb_Any HTMLVideoElement_onenterpictureinpicture(const HTMLVideoElement *self);

/**
 * @brief Sets the `onenterpictureinpicture` property. 
*/
void HTMLVideoElement_set_onenterpictureinpicture(HTMLVideoElement* self, jb_Any * value);

/**
 * @brief Gets the `onleavepictureinpicture` property. 
*/
jb_Any HTMLVideoElement_onleavepictureinpicture(const HTMLVideoElement *self);

/**
 * @brief Sets the `onleavepictureinpicture` property. 
*/
void HTMLVideoElement_set_onleavepictureinpicture(HTMLVideoElement* self, jb_Any * value);

/**
 * @brief Gets the `disablePictureInPicture` property. 
*/
bool HTMLVideoElement_disablePictureInPicture(const HTMLVideoElement *self);

/**
 * @brief Sets the `disablePictureInPicture` property. 
*/
void HTMLVideoElement_set_disablePictureInPicture(HTMLVideoElement* self, bool value);

/**
 * @brief Calls the `requestVideoFrameCallback` method. 
*/
unsigned long HTMLVideoElement_requestVideoFrameCallback(HTMLVideoElement* self , jb_Function * callback);

/**
 * @brief Calls the `cancelVideoFrameCallback` method. 
*/
jb_Undefined HTMLVideoElement_cancelVideoFrameCallback(HTMLVideoElement* self , unsigned long handle);

#ifdef __cplusplus
}
#endif
