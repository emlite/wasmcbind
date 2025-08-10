#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransfer DataTransfer;

DECLARE_EMLITE_TYPE(DragEventInit, MouseEventInit);

DataTransfer DragEventInit_dataTransfer(const DragEventInit *self);

void DragEventInit_set_dataTransfer(DragEventInit* self, DataTransfer * value);

DragEventInit DragEventInit_new();

#ifdef __cplusplus
}
#endif
