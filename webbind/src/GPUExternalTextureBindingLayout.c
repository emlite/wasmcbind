#include <webbind/GPUExternalTextureBindingLayout.h>

DEFINE_EMLITE_TYPE(GPUExternalTextureBindingLayout, em_Val);


GPUExternalTextureBindingLayout GPUExternalTextureBindingLayout_new() {
    em_Val obj = em_Val_object();
    return GPUExternalTextureBindingLayout_from_val(&obj);
}

