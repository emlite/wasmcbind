#include <webcbind/ClipboardEvent.h>

#include <webcbind/ClipboardEventInit.h>
#include <webcbind/DataTransfer.h>

DEFINE_EMLITE_TYPE(ClipboardEvent, Event);


ClipboardEvent ClipboardEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ClipboardEvent") , em_Val_from(type));
        return ClipboardEvent_from_val(&vv);
      }


ClipboardEvent ClipboardEvent_new1(jb_String * type, ClipboardEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ClipboardEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ClipboardEvent_from_val(&vv);
      }


DataTransfer ClipboardEvent_clipboardData(const ClipboardEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(Event_as_val(self->inner), em_Val_from("clipboardData")));
}

