#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct InputEventInit InputEventInit;
typedef struct DataTransfer DataTransfer;
typedef struct StaticRange StaticRange;

DECLARE_EMLITE_TYPE(InputEvent, UIEvent);

InputEvent InputEvent_new0(jb_String * type);

InputEvent InputEvent_new1(jb_String * type, InputEventInit * eventInitDict);

jb_String InputEvent_data(const InputEvent *self);

bool InputEvent_isComposing(const InputEvent *self);

jb_String InputEvent_inputType(const InputEvent *self);

DataTransfer InputEvent_dataTransfer(const InputEvent *self);

jb_Array InputEvent_getTargetRanges(InputEvent* self );

#ifdef __cplusplus
}
#endif
