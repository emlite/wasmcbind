#include <webbind/OfflineAudioCompletionEvent.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(OfflineAudioCompletionEvent, Event);


OfflineAudioCompletionEvent OfflineAudioCompletionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("OfflineAudioCompletionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return OfflineAudioCompletionEvent(em_Val_new(em_Val_global("OfflineAudioCompletionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


AudioBuffer OfflineAudioCompletionEvent_renderedBuffer(const OfflineAudioCompletionEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), "renderedBuffer"));
}

