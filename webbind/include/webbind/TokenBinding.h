#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TokenBinding, em_Val);

jb_String TokenBinding_status(const TokenBinding *self);

void TokenBinding_set_status(TokenBinding* self, jb_String * value);

jb_String TokenBinding_id(const TokenBinding *self);

void TokenBinding_set_id(TokenBinding* self, jb_String * value);

TokenBinding TokenBinding_new();

#ifdef __cplusplus
}
#endif
