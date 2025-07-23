#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct FontFace FontFace;


DECLARE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_CSSOMString * type);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_CSSOMString * type, jb_Any * eventInitDict);

jb_FrozenArray FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self);
