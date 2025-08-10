#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WriteParams, em_Val);

WriteCommandType WriteParams_type(const WriteParams *self);

void WriteParams_set_type(WriteParams* self, WriteCommandType * value);

long long WriteParams_size(const WriteParams *self);

void WriteParams_set_size(WriteParams* self, long long value);

long long WriteParams_position(const WriteParams *self);

void WriteParams_set_position(WriteParams* self, long long value);

jb_Any WriteParams_data(const WriteParams *self);

void WriteParams_set_data(WriteParams* self, jb_Any * value);

WriteParams WriteParams_new();

#ifdef __cplusplus
}
#endif
