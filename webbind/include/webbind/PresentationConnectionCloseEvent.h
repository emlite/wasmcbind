#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);

PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self);

jb_DOMString PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self);
