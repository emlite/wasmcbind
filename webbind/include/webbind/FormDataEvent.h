#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FormDataEventInit FormDataEventInit;
typedef struct FormData FormData;

DECLARE_EMLITE_TYPE(FormDataEvent, Event);

FormDataEvent FormDataEvent_new(jb_String * type, FormDataEventInit * eventInitDict);

FormData FormDataEvent_formData(const FormDataEvent *self);

#ifdef __cplusplus
}
#endif
