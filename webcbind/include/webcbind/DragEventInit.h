#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransfer DataTransfer;

/** @brief Dictionary type DragEventInit */
DECLARE_EMLITE_TYPE(DragEventInit, MouseEventInit);

/** @brief Getter of the dataTransfer property */
DataTransfer DragEventInit_dataTransfer(const DragEventInit *self);

/** @brief Setter of the dataTransfer property */
void DragEventInit_set_dataTransfer(DragEventInit* self, DataTransfer * value);

/** @brief Constructor of the DragEventInit dictionary type */
DragEventInit DragEventInit_new();

#ifdef __cplusplus
}
#endif
