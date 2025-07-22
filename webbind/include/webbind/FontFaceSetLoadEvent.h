#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct FontFace FontFace;


typedef struct {
  Event inner;
} FontFaceSetLoadEvent;


DECLARE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new(const jb_CSSOMString* type);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new(const jb_CSSOMString* type, const jb_Any* eventInitDict);

jb_FrozenArray FontFaceSetLoadEvent_fontfaces( const FontFaceSetLoadEvent *self);
