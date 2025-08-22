#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CaptureActionEventInit */
DECLARE_EMLITE_TYPE(CaptureActionEventInit, EventInit);

/** @brief Getter of the action property */
jb_String CaptureActionEventInit_action(const CaptureActionEventInit *self);

/** @brief Setter of the action property */
void CaptureActionEventInit_set_action(CaptureActionEventInit* self, jb_String * value);

/** @brief Constructor of the CaptureActionEventInit dictionary type */
CaptureActionEventInit CaptureActionEventInit_new();

#ifdef __cplusplus
}
#endif
