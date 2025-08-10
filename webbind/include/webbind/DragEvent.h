#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DragEventInit DragEventInit;
typedef struct DataTransfer DataTransfer;

DECLARE_EMLITE_TYPE(DragEvent, MouseEvent);

DragEvent DragEvent_new0(jb_String * type);

DragEvent DragEvent_new1(jb_String * type, DragEventInit * eventInitDict);

DataTransfer DragEvent_dataTransfer(const DragEvent *self);

#ifdef __cplusplus
}
#endif
