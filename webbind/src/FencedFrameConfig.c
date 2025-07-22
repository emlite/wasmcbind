#include <webbind/FencedFrameConfig.h>


DEFINE_EMLITE_TYPE(FencedFrameConfig, em_Val);


FencedFrameConfig FencedFrameConfig_new(const jb_USVString* url) : em_Val(em_Val_global("FencedFrameConfig").new_(em_Val_from(url))) {
        return FencedFrameConfig(em_Val_new(em_Val_global("FencedFrameConfig", em_Val_from(url)));
      }


jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , const jb_DOMString* contextString) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setSharedStorageContext", em_Val_from(contextString)));
}

