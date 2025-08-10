#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UnderlyingSink, em_Val);

jb_Function UnderlyingSink_start(const UnderlyingSink *self);

void UnderlyingSink_set_start(UnderlyingSink* self, jb_Function * value);

jb_Function UnderlyingSink_write(const UnderlyingSink *self);

void UnderlyingSink_set_write(UnderlyingSink* self, jb_Function * value);

jb_Function UnderlyingSink_close(const UnderlyingSink *self);

void UnderlyingSink_set_close(UnderlyingSink* self, jb_Function * value);

jb_Function UnderlyingSink_abort(const UnderlyingSink *self);

void UnderlyingSink_set_abort(UnderlyingSink* self, jb_Function * value);

jb_Any UnderlyingSink_type(const UnderlyingSink *self);

void UnderlyingSink_set_type(UnderlyingSink* self, jb_Any * value);

UnderlyingSink UnderlyingSink_new();

#ifdef __cplusplus
}
#endif
