#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardEventInit ClipboardEventInit;
typedef struct DataTransfer DataTransfer;

DECLARE_EMLITE_TYPE(ClipboardEvent, Event);

ClipboardEvent ClipboardEvent_new0(jb_String * type);

ClipboardEvent ClipboardEvent_new1(jb_String * type, ClipboardEventInit * eventInitDict);

DataTransfer ClipboardEvent_clipboardData(const ClipboardEvent *self);

#ifdef __cplusplus
}
#endif
