#include <webbind/ClipboardEvent.h>
#include <webbind/DataTransfer.h>


DEFINE_EMLITE_TYPE(ClipboardEvent, Event);


ClipboardEvent ClipboardEvent_new(const jb_DOMString* type) : Event(em_Val_global("ClipboardEvent").new_(em_Val_from(type))) {
        return ClipboardEvent(em_Val_new(em_Val_global("ClipboardEvent", em_Val_from(type)));
      }


ClipboardEvent ClipboardEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ClipboardEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ClipboardEvent(em_Val_new(em_Val_global("ClipboardEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


DataTransfer ClipboardEvent_clipboardData(const ClipboardEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(Event_as_val(self->inner), "clipboardData"));
}

