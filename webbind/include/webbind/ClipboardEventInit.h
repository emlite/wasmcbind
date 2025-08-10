#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransfer DataTransfer;

DECLARE_EMLITE_TYPE(ClipboardEventInit, EventInit);

DataTransfer ClipboardEventInit_clipboardData(const ClipboardEventInit *self);

void ClipboardEventInit_set_clipboardData(ClipboardEventInit* self, DataTransfer * value);

ClipboardEventInit ClipboardEventInit_new();

#ifdef __cplusplus
}
#endif
