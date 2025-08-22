#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransfer DataTransfer;

/** @brief Dictionary type ClipboardEventInit */
DECLARE_EMLITE_TYPE(ClipboardEventInit, EventInit);

/** @brief Getter of the clipboardData property */
DataTransfer ClipboardEventInit_clipboardData(const ClipboardEventInit *self);

/** @brief Setter of the clipboardData property */
void ClipboardEventInit_set_clipboardData(ClipboardEventInit* self, DataTransfer * value);

/** @brief Constructor of the ClipboardEventInit dictionary type */
ClipboardEventInit ClipboardEventInit_new();

#ifdef __cplusplus
}
#endif
