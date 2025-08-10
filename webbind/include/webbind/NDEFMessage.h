#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFMessageInit NDEFMessageInit;
typedef struct NDEFRecord NDEFRecord;

DECLARE_EMLITE_TYPE(NDEFMessage, em_Val);

NDEFMessage NDEFMessage_new(NDEFMessageInit * messageInit);

jb_Array NDEFMessage_records(const NDEFMessage *self);

#ifdef __cplusplus
}
#endif
