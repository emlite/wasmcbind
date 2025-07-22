#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct DataTransfer DataTransfer;


typedef struct {
  Event inner;
} ClipboardEvent;


DECLARE_EMLITE_TYPE(ClipboardEvent, Event);

ClipboardEvent ClipboardEvent_new(const jb_DOMString* type);

ClipboardEvent ClipboardEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

DataTransfer ClipboardEvent_clipboardData( const ClipboardEvent *self);
