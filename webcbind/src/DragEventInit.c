#include <webcbind/DragEventInit.h>

#include <webcbind/DataTransfer.h>

DEFINE_EMLITE_TYPE(DragEventInit, MouseEventInit);


DataTransfer DragEventInit_dataTransfer(const DragEventInit *self) {
    return em_Val_as(DataTransfer, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("dataTransfer")));
}


void DragEventInit_set_dataTransfer(DragEventInit* self, DataTransfer * value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("dataTransfer"), em_Val_from(value));
}


DragEventInit DragEventInit_new() {
    em_Val obj = em_Val_object();
    return DragEventInit_from_val(&obj);
}

