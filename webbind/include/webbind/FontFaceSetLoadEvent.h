#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFaceSetLoadEventInit FontFaceSetLoadEventInit;
typedef struct FontFace FontFace;


/**
 * @brief Interface FontFaceSetLoadEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadEvent)
 */
DECLARE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);

/**
 * @brief Creates a new `FontFaceSetLoadEvent` object. 
*/
FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_String * type);

/**
 * @brief Creates a new `FontFaceSetLoadEvent` object. 
*/
FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_String * type, FontFaceSetLoadEventInit * eventInitDict);

/**
 * @brief Gets the `fontfaces` property. 
*/
jb_Array FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self);

#ifdef __cplusplus
}
#endif
