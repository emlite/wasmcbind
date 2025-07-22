#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct TextFormat TextFormat;


typedef struct {
  Event inner;
} TextFormatUpdateEvent;


DECLARE_EMLITE_TYPE(TextFormatUpdateEvent, Event);

TextFormatUpdateEvent TextFormatUpdateEvent_new(const jb_DOMString* type);

TextFormatUpdateEvent TextFormatUpdateEvent_new(const jb_DOMString* type, const jb_Any* options);

jb_Sequence TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self );
