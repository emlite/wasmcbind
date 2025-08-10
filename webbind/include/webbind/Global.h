#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GlobalDescriptor GlobalDescriptor;

DECLARE_EMLITE_TYPE(Global, em_Val);

Global Global_new0(GlobalDescriptor * descriptor);

Global Global_new1(GlobalDescriptor * descriptor, jb_Any * v);

jb_Any Global_valueOf(Global* self );

jb_Any Global_value(const Global *self);

void Global_set_value(Global* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
