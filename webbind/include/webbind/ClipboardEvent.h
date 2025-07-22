#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct DataTransfer DataTransfer;


DECLARE_EMLITE_TYPE(ClipboardEvent, Event);

ClipboardEvent ClipboardEvent_new0(jb_DOMString * type);

ClipboardEvent ClipboardEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

DataTransfer ClipboardEvent_clipboardData( const ClipboardEvent *self);
