#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FormData FormData;

/** @brief Dictionary type FormDataEventInit */
DECLARE_EMLITE_TYPE(FormDataEventInit, EventInit);

/** @brief Getter of the formData property */
FormData FormDataEventInit_formData(const FormDataEventInit *self);

/** @brief Setter of the formData property */
void FormDataEventInit_set_formData(FormDataEventInit* self, FormData * value);

/** @brief Constructor of the FormDataEventInit dictionary type */
FormDataEventInit FormDataEventInit_new();

#ifdef __cplusplus
}
#endif
