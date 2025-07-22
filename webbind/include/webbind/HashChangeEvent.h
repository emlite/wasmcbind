#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HashChangeEvent, Event);

HashChangeEvent HashChangeEvent_new0(jb_DOMString * type);

HashChangeEvent HashChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_USVString HashChangeEvent_oldURL( const HashChangeEvent *self);

jb_USVString HashChangeEvent_newURL( const HashChangeEvent *self);
