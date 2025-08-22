#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Module Module;
typedef struct Instance Instance;

/** @brief Dictionary type WebAssemblyInstantiatedSource */
DECLARE_EMLITE_TYPE(WebAssemblyInstantiatedSource, em_Val);

/** @brief Getter of the module property */
Module WebAssemblyInstantiatedSource_module_(const WebAssemblyInstantiatedSource *self);

/** @brief Setter of the module property */
void WebAssemblyInstantiatedSource_set_module_(WebAssemblyInstantiatedSource* self, Module * value);

/** @brief Getter of the instance property */
Instance WebAssemblyInstantiatedSource_instance(const WebAssemblyInstantiatedSource *self);

/** @brief Setter of the instance property */
void WebAssemblyInstantiatedSource_set_instance(WebAssemblyInstantiatedSource* self, Instance * value);

/** @brief Constructor of the WebAssemblyInstantiatedSource dictionary type */
WebAssemblyInstantiatedSource WebAssemblyInstantiatedSource_new();

#ifdef __cplusplus
}
#endif
