#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FormData FormData;

DECLARE_EMLITE_TYPE(FormDataEventInit, EventInit);

FormData FormDataEventInit_formData(const FormDataEventInit *self);

void FormDataEventInit_set_formData(FormDataEventInit* self, FormData * value);

FormDataEventInit FormDataEventInit_new();

#ifdef __cplusplus
}
#endif
