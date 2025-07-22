#include <webbind/OfflineAudioContext.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(OfflineAudioContext, BaseAudioContext);


OfflineAudioContext OfflineAudioContext_new(unsigned long numberOfChannels, unsigned long length, float sampleRate) {
        em_Val vv = em_Val_new(em_Val_global("OfflineAudioContext") , em_Val_from(numberOfChannels), em_Val_from(length), em_Val_from(sampleRate));
        return OfflineAudioContext_from_val(&vv);
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
    return em_Val_as(unsigned long, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("length")));
}


jb_Any OfflineAudioContext_oncomplete(const OfflineAudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("oncomplete")));
}


void OfflineAudioContext_set_oncomplete(OfflineAudioContext* self, jb_Any * value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), em_Val_from("oncomplete"), em_Val_from(value));
}

