#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "URLPatternComponentResult.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(URLPatternResult, em_Val);

jb_Array URLPatternResult_inputs(const URLPatternResult *self);

void URLPatternResult_set_inputs(URLPatternResult* self, jb_Array * value);

URLPatternComponentResult URLPatternResult_protocol(const URLPatternResult *self);

void URLPatternResult_set_protocol(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_username(const URLPatternResult *self);

void URLPatternResult_set_username(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_password(const URLPatternResult *self);

void URLPatternResult_set_password(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_hostname(const URLPatternResult *self);

void URLPatternResult_set_hostname(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_port(const URLPatternResult *self);

void URLPatternResult_set_port(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_pathname(const URLPatternResult *self);

void URLPatternResult_set_pathname(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_search(const URLPatternResult *self);

void URLPatternResult_set_search(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternComponentResult URLPatternResult_hash(const URLPatternResult *self);

void URLPatternResult_set_hash(URLPatternResult* self, URLPatternComponentResult * value);

URLPatternResult URLPatternResult_new();

#ifdef __cplusplus
}
#endif
