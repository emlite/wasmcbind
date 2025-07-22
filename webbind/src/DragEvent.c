#include <webbind/DragEvent.h>
#include <webbind/DataTransfer.h>


DEFINE_EMLITE_TYPE(DragEvent, MouseEvent);


DragEvent DragEvent_new(const jb_DOMString* type) : MouseEvent(em_Val_global("DragEvent").new_(em_Val_from(type))) {
        return DragEvent(em_Val_new(em_Val_global("DragEvent", em_Val_from(type)));
      }


DragEvent DragEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : MouseEvent(em_Val_global("DragEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return DragEvent(em_Val_new(em_Val_global("DragEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


DataTransfer DragEvent_dataTransfer(const DragEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(MouseEvent_as_val(self->inner), "dataTransfer"));
}

