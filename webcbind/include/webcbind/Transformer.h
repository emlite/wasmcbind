#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Transformer */
DECLARE_EMLITE_TYPE(Transformer, em_Val);

/** @brief Getter of the start property */
jb_Function Transformer_start(const Transformer *self);

/** @brief Setter of the start property */
void Transformer_set_start(Transformer* self, jb_Function * value);

/** @brief Getter of the transform property */
jb_Function Transformer_transform(const Transformer *self);

/** @brief Setter of the transform property */
void Transformer_set_transform(Transformer* self, jb_Function * value);

/** @brief Getter of the flush property */
jb_Function Transformer_flush(const Transformer *self);

/** @brief Setter of the flush property */
void Transformer_set_flush(Transformer* self, jb_Function * value);

/** @brief Getter of the cancel property */
jb_Function Transformer_cancel(const Transformer *self);

/** @brief Setter of the cancel property */
void Transformer_set_cancel(Transformer* self, jb_Function * value);

/** @brief Getter of the readableType property */
jb_Any Transformer_readableType(const Transformer *self);

/** @brief Setter of the readableType property */
void Transformer_set_readableType(Transformer* self, jb_Any * value);

/** @brief Getter of the writableType property */
jb_Any Transformer_writableType(const Transformer *self);

/** @brief Setter of the writableType property */
void Transformer_set_writableType(Transformer* self, jb_Any * value);

/** @brief Constructor of the Transformer dictionary type */
Transformer Transformer_new();

#ifdef __cplusplus
}
#endif
