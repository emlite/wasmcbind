#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Module Module;
typedef struct Instance Instance;

DECLARE_EMLITE_TYPE(WebAssemblyInstantiatedSource, em_Val);

Module WebAssemblyInstantiatedSource_module_(const WebAssemblyInstantiatedSource *self);

void WebAssemblyInstantiatedSource_set_module_(WebAssemblyInstantiatedSource* self, Module * value);

Instance WebAssemblyInstantiatedSource_instance(const WebAssemblyInstantiatedSource *self);

void WebAssemblyInstantiatedSource_set_instance(WebAssemblyInstantiatedSource* self, Instance * value);

WebAssemblyInstantiatedSource WebAssemblyInstantiatedSource_new();

#ifdef __cplusplus
}
#endif
