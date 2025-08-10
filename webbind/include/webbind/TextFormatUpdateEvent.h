#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormatUpdateEventInit TextFormatUpdateEventInit;
typedef struct TextFormat TextFormat;

DECLARE_EMLITE_TYPE(TextFormatUpdateEvent, Event);

TextFormatUpdateEvent TextFormatUpdateEvent_new0(jb_String * type);

TextFormatUpdateEvent TextFormatUpdateEvent_new1(jb_String * type, TextFormatUpdateEventInit * options);

jb_Array TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self );

#ifdef __cplusplus
}
#endif
