#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WriteParams */
DECLARE_EMLITE_TYPE(WriteParams, em_Val);

/** @brief Getter of the type property */
WriteCommandType WriteParams_type(const WriteParams *self);

/** @brief Setter of the type property */
void WriteParams_set_type(WriteParams* self, WriteCommandType * value);

/** @brief Getter of the size property */
long long WriteParams_size(const WriteParams *self);

/** @brief Setter of the size property */
void WriteParams_set_size(WriteParams* self, long long value);

/** @brief Getter of the position property */
long long WriteParams_position(const WriteParams *self);

/** @brief Setter of the position property */
void WriteParams_set_position(WriteParams* self, long long value);

/** @brief Getter of the data property */
jb_Any WriteParams_data(const WriteParams *self);

/** @brief Setter of the data property */
void WriteParams_set_data(WriteParams* self, jb_Any * value);

/** @brief Constructor of the WriteParams dictionary type */
WriteParams WriteParams_new();

#ifdef __cplusplus
}
#endif
