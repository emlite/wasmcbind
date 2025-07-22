#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MLContext MLContext;
typedef struct GPUDevice GPUDevice;


typedef struct {
  em_Val inner;
} ML;


DECLARE_EMLITE_TYPE(ML, em_Val);

jb_Promise ML_createContext(ML* self , const GPUDevice* gpuDevice);
