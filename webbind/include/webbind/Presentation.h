#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PresentationRequest PresentationRequest;
typedef struct PresentationReceiver PresentationReceiver;


typedef struct {
  em_Val inner;
} Presentation;


DECLARE_EMLITE_TYPE(Presentation, em_Val);

PresentationRequest Presentation_defaultRequest( const Presentation *self);

void Presentation_set_defaultRequest(Presentation* self, const PresentationRequest* value);

PresentationReceiver Presentation_receiver( const Presentation *self);
