#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Element Element;


DECLARE_EMLITE_TYPE(ToggleEvent, Event);

ToggleEvent ToggleEvent_new0(jb_DOMString * type);

ToggleEvent ToggleEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_DOMString ToggleEvent_oldState( const ToggleEvent *self);

jb_DOMString ToggleEvent_newState( const ToggleEvent *self);

Element ToggleEvent_source( const ToggleEvent *self);
