#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} PresentationAvailability;


DECLARE_EMLITE_TYPE(PresentationAvailability, EventTarget);

bool PresentationAvailability_value( const PresentationAvailability *self);

jb_Any PresentationAvailability_onchange( const PresentationAvailability *self);

void PresentationAvailability_set_onchange(PresentationAvailability* self, const jb_Any* value);
