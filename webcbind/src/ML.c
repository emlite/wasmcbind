#include <webcbind/ML.h>

#include <webcbind/MLContext.h>
#include <webcbind/GPUDevice.h>

DEFINE_EMLITE_TYPE(ML, em_Val);


jb_Promise ML_createContext(ML* self , GPUDevice * gpuDevice) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createContext", em_Val_from(gpuDevice)));
}

