#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Element Element;


DECLARE_EMLITE_TYPE(CommandEvent, Event);

CommandEvent CommandEvent_new0(jb_DOMString * type);

CommandEvent CommandEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

Element CommandEvent_source( const CommandEvent *self);

jb_DOMString CommandEvent_command( const CommandEvent *self);
