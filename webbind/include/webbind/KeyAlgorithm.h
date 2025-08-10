#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(KeyAlgorithm, em_Val);

jb_String KeyAlgorithm_name(const KeyAlgorithm *self);

void KeyAlgorithm_set_name(KeyAlgorithm* self, jb_String * value);

KeyAlgorithm KeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
