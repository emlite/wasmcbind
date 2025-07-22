#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HIDDevice HIDDevice;


typedef struct {
  Event inner;
} HIDConnectionEvent;


DECLARE_EMLITE_TYPE(HIDConnectionEvent, Event);

HIDConnectionEvent HIDConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

HIDDevice HIDConnectionEvent_device( const HIDConnectionEvent *self);
