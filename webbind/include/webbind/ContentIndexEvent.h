#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


typedef struct {
  ExtendableEvent inner;
} ContentIndexEvent;


DECLARE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);

ContentIndexEvent ContentIndexEvent_new(const jb_DOMString* type, const jb_Any* init);

jb_DOMString ContentIndexEvent_id( const ContentIndexEvent *self);
