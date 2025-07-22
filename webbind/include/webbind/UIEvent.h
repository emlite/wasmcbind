#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Window Window;
typedef struct InputDeviceCapabilities InputDeviceCapabilities;


typedef struct {
  Event inner;
} UIEvent;


DECLARE_EMLITE_TYPE(UIEvent, Event);

UIEvent UIEvent_new(const jb_DOMString* type);

UIEvent UIEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Window UIEvent_view( const UIEvent *self);

long UIEvent_detail( const UIEvent *self);

InputDeviceCapabilities UIEvent_sourceCapabilities( const UIEvent *self);

jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg);

jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg);

jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg);

jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, long detailArg);

unsigned long UIEvent_which( const UIEvent *self);
