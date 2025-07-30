#include <webbind/OfflineAudioCompletionEvent.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);


OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("OfflineAudioCompletionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return OfflineAudioCompletionEvent_from_val(&vv);
      }


AudioBuffer OfflineAudioCompletionEvent_renderedBuffer(const OfflineAudioCompletionEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), em_Val_from("renderedBuffer")));
}

