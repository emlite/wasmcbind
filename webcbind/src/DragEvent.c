#include <webcbind/DragEvent.h>

#include <webcbind/DragEventInit.h>
#include <webcbind/DataTransfer.h>

DEFINE_EMLITE_TYPE(DragEvent, MouseEvent);


DragEvent DragEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("DragEvent") , em_Val_from(type));
        return DragEvent_from_val(&vv);
      }


DragEvent DragEvent_new1(jb_String * type, DragEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DragEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DragEvent_from_val(&vv);
      }


DataTransfer DragEvent_dataTransfer(const DragEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(MouseEvent_as_val(self->inner), em_Val_from("dataTransfer")));
}

