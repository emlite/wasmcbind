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

DECLARE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_String * type);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_String * type, FontFaceSetLoadEventInit * eventInitDict);

jb_Array FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self);

#ifdef __cplusplus
}
#endif
