#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Transformer, em_Val);

jb_Function Transformer_start(const Transformer *self);

void Transformer_set_start(Transformer* self, jb_Function * value);

jb_Function Transformer_transform(const Transformer *self);

void Transformer_set_transform(Transformer* self, jb_Function * value);

jb_Function Transformer_flush(const Transformer *self);

void Transformer_set_flush(Transformer* self, jb_Function * value);

jb_Function Transformer_cancel(const Transformer *self);

void Transformer_set_cancel(Transformer* self, jb_Function * value);

jb_Any Transformer_readableType(const Transformer *self);

void Transformer_set_readableType(Transformer* self, jb_Any * value);

jb_Any Transformer_writableType(const Transformer *self);

void Transformer_set_writableType(Transformer* self, jb_Any * value);

Transformer Transformer_new();

#ifdef __cplusplus
}
#endif
