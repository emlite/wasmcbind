#include <webbind/OfflineAudioContext.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(OfflineAudioContext, BaseAudioContext);


OfflineAudioContext OfflineAudioContext_new(unsigned long numberOfChannels, unsigned long length, float sampleRate) : BaseAudioContext(em_Val_global("OfflineAudioContext").new_(em_Val_from(numberOfChannels), em_Val_from(length), em_Val_from(sampleRate))) {
        return OfflineAudioContext(em_Val_new(em_Val_global("OfflineAudioContext", em_Val_from(numberOfChannels), em_Val_from(length), em_Val_from(sampleRate)));
      }


jb_Promise OfflineAudioContext_startRendering(OfflineAudioContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "startRendering"));
}


jb_Promise OfflineAudioContext_resume(OfflineAudioContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "resume"));
}


jb_Promise OfflineAudioContext_suspend(OfflineAudioContext* self , double suspendTime) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "suspend", em_Val_from(suspendTime)));
}


unsigned long OfflineAudioContext_length(const OfflineAudioContext *self) {
    return em_Val_as(unsigned long, em_Val_get(BaseAudioContext_as_val(self->inner), "length"));
}


jb_Any OfflineAudioContext_oncomplete(const OfflineAudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), "oncomplete"));
}


void OfflineAudioContext_set_oncomplete(OfflineAudioContext* self, const jb_Any* value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), "oncomplete", value);
}

