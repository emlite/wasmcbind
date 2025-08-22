#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoFrameBufferInit VideoFrameBufferInit;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct VideoColorSpace VideoColorSpace;
typedef struct VideoFrameMetadata VideoFrameMetadata;
typedef struct VideoFrameCopyToOptions VideoFrameCopyToOptions;
typedef struct PlaneLayout PlaneLayout;


/**
 * @brief Interface VideoFrame
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame)
 */
DECLARE_EMLITE_TYPE(VideoFrame, em_Val);

/**
 * @brief Creates a new `VideoFrame` object. 
*/
VideoFrame VideoFrame_new(jb_Any * data, VideoFrameBufferInit * init);

/**
 * @brief Gets the `format` property. 
*/
VideoPixelFormat VideoFrame_format(const VideoFrame *self);

/**
 * @brief Gets the `codedWidth` property. 
*/
unsigned long VideoFrame_codedWidth(const VideoFrame *self);

/**
 * @brief Gets the `codedHeight` property. 
*/
unsigned long VideoFrame_codedHeight(const VideoFrame *self);

/**
 * @brief Gets the `codedRect` property. 
*/
DOMRectReadOnly VideoFrame_codedRect(const VideoFrame *self);

/**
 * @brief Gets the `visibleRect` property. 
*/
DOMRectReadOnly VideoFrame_visibleRect(const VideoFrame *self);

/**
 * @brief Gets the `rotation` property. 
*/
double VideoFrame_rotation(const VideoFrame *self);

/**
 * @brief Gets the `flip` property. 
*/
bool VideoFrame_flip(const VideoFrame *self);

/**
 * @brief Gets the `displayWidth` property. 
*/
unsigned long VideoFrame_displayWidth(const VideoFrame *self);

/**
 * @brief Gets the `displayHeight` property. 
*/
unsigned long VideoFrame_displayHeight(const VideoFrame *self);

/**
 * @brief Gets the `duration` property. 
*/
long long VideoFrame_duration(const VideoFrame *self);

/**
 * @brief Gets the `timestamp` property. 
*/
long long VideoFrame_timestamp(const VideoFrame *self);

/**
 * @brief Gets the `colorSpace` property. 
*/
VideoColorSpace VideoFrame_colorSpace(const VideoFrame *self);

/**
 * @brief Calls the `metadata` method. 
*/
VideoFrameMetadata VideoFrame_metadata(VideoFrame* self );

/**
 * @brief Calls the `allocationSize` method. 
*/
unsigned long VideoFrame_allocationSize0(VideoFrame* self );

/**
 * @brief Calls the `allocationSize` method. 
*/
unsigned long VideoFrame_allocationSize1(VideoFrame* self , VideoFrameCopyToOptions * options);

/**
 * @brief Calls the `copyTo` method. 
*/
jb_Promise VideoFrame_copyTo0(VideoFrame* self , jb_Any * destination);

/**
 * @brief Calls the `copyTo` method. 
*/
jb_Promise VideoFrame_copyTo1(VideoFrame* self , jb_Any * destination, VideoFrameCopyToOptions * options);

/**
 * @brief Calls the `clone` method. 
*/
VideoFrame VideoFrame_clone(VideoFrame* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined VideoFrame_close(VideoFrame* self );

#ifdef __cplusplus
}
#endif
