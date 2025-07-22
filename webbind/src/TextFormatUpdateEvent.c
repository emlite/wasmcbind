#include <webbind/TextFormatUpdateEvent.h>
#include <webbind/TextFormat.h>


DEFINE_EMLITE_TYPE(TextFormatUpdateEvent, Event);


TextFormatUpdateEvent TextFormatUpdateEvent_new(const jb_DOMString* type) : Event(em_Val_global("TextFormatUpdateEvent").new_(em_Val_from(type))) {
        return TextFormatUpdateEvent(em_Val_new(em_Val_global("TextFormatUpdateEvent", em_Val_from(type)));
      }


TextFormatUpdateEvent TextFormatUpdateEvent_new(const jb_DOMString* type, const jb_Any* options) : Event(em_Val_global("TextFormatUpdateEvent").new_(em_Val_from(type), em_Val_from(options))) {
        return TextFormatUpdateEvent(em_Val_new(em_Val_global("TextFormatUpdateEvent", em_Val_from(type), em_Val_from(options)));
      }


jb_Sequence TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Event_as_val(self->inner), "getTextFormats"));
}

