#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "NDEFRecordInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NDEFMessageInit */
DECLARE_EMLITE_TYPE(NDEFMessageInit, em_Val);

/** @brief Getter of the records property */
jb_Array NDEFMessageInit_records(const NDEFMessageInit *self);

/** @brief Setter of the records property */
void NDEFMessageInit_set_records(NDEFMessageInit* self, jb_Array * value);

/** @brief Constructor of the NDEFMessageInit dictionary type */
NDEFMessageInit NDEFMessageInit_new();

#ifdef __cplusplus
}
#endif
