#include <webbind/AudioSinkInfo.h>


DEFINE_EMLITE_TYPE(AudioSinkInfo, em_Val);


AudioSinkType AudioSinkInfo_type(const AudioSinkInfo *self) {
    return em_Val_as(AudioSinkType, em_Val_get(em_Val_as_val(self->inner), "type"));
}

