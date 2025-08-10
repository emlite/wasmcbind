#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AdRender, em_Val);

jb_String AdRender_url(const AdRender *self);

void AdRender_set_url(AdRender* self, jb_String * value);

jb_String AdRender_width(const AdRender *self);

void AdRender_set_width(AdRender* self, jb_String * value);

jb_String AdRender_height(const AdRender *self);

void AdRender_set_height(AdRender* self, jb_String * value);

AdRender AdRender_new();

#ifdef __cplusplus
}
#endif
