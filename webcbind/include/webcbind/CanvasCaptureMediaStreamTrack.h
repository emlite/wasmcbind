#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MediaStreamTrack.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCanvasElement HTMLCanvasElement;


/**
 * @brief Interface CanvasCaptureMediaStreamTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CanvasCaptureMediaStreamTrack)
 */
DECLARE_EMLITE_TYPE(CanvasCaptureMediaStreamTrack, MediaStreamTrack);

/**
 * @brief Gets the `canvas` property. 
*/
HTMLCanvasElement CanvasCaptureMediaStreamTrack_canvas(const CanvasCaptureMediaStreamTrack *self);

/**
 * @brief Calls the `requestFrame` method. 
*/
jb_Undefined CanvasCaptureMediaStreamTrack_requestFrame(CanvasCaptureMediaStreamTrack* self );

#ifdef __cplusplus
}
#endif
