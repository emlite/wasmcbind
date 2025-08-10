#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FenceEvent, em_Val);

jb_String FenceEvent_eventType(const FenceEvent *self);

void FenceEvent_set_eventType(FenceEvent* self, jb_String * value);

jb_String FenceEvent_eventData(const FenceEvent *self);

void FenceEvent_set_eventData(FenceEvent* self, jb_String * value);

jb_Array FenceEvent_destination(const FenceEvent *self);

void FenceEvent_set_destination(FenceEvent* self, jb_Array * value);

bool FenceEvent_crossOriginExposed(const FenceEvent *self);

void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value);

bool FenceEvent_once(const FenceEvent *self);

void FenceEvent_set_once(FenceEvent* self, bool value);

jb_String FenceEvent_destinationURL(const FenceEvent *self);

void FenceEvent_set_destinationURL(FenceEvent* self, jb_String * value);

FenceEvent FenceEvent_new();

#ifdef __cplusplus
}
#endif
