#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUError GPUError;

/** @brief Dictionary type GPUUncapturedErrorEventInit */
DECLARE_EMLITE_TYPE(GPUUncapturedErrorEventInit, EventInit);

/** @brief Getter of the error property */
GPUError GPUUncapturedErrorEventInit_error(const GPUUncapturedErrorEventInit *self);

/** @brief Setter of the error property */
void GPUUncapturedErrorEventInit_set_error(GPUUncapturedErrorEventInit* self, GPUError * value);

/** @brief Constructor of the GPUUncapturedErrorEventInit dictionary type */
GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit_new();

#ifdef __cplusplus
}
#endif
