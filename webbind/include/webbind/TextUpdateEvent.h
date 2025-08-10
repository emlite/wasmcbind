#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextUpdateEventInit TextUpdateEventInit;

DECLARE_EMLITE_TYPE(TextUpdateEvent, Event);

TextUpdateEvent TextUpdateEvent_new0(jb_String * type);

TextUpdateEvent TextUpdateEvent_new1(jb_String * type, TextUpdateEventInit * options);

unsigned long TextUpdateEvent_updateRangeStart(const TextUpdateEvent *self);

unsigned long TextUpdateEvent_updateRangeEnd(const TextUpdateEvent *self);

jb_String TextUpdateEvent_text(const TextUpdateEvent *self);

unsigned long TextUpdateEvent_selectionStart(const TextUpdateEvent *self);

unsigned long TextUpdateEvent_selectionEnd(const TextUpdateEvent *self);

#ifdef __cplusplus
}
#endif
