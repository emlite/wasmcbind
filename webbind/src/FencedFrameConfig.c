#include <webbind/FencedFrameConfig.h>


DEFINE_EMLITE_TYPE(FencedFrameConfig, em_Val);


FencedFrameConfig FencedFrameConfig_new(jb_String * url) {
        em_Val vv = em_Val_new(em_Val_global("FencedFrameConfig") , em_Val_from(url));
        return FencedFrameConfig_from_val(&vv);
      }


jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , jb_String * contextString) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setSharedStorageContext", em_Val_from(contextString)));
}

