#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct TextFormat TextFormat;


DECLARE_EMLITE_TYPE(TextFormatUpdateEvent, Event);

TextFormatUpdateEvent TextFormatUpdateEvent_new0(jb_String * type);

TextFormatUpdateEvent TextFormatUpdateEvent_new1(jb_String * type, jb_Any * options);

jb_Array TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self );
