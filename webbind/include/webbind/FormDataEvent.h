#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct FormData FormData;


typedef struct {
  Event inner;
} FormDataEvent;


DECLARE_EMLITE_TYPE(FormDataEvent, Event);

FormDataEvent FormDataEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

FormData FormDataEvent_formData( const FormDataEvent *self);
