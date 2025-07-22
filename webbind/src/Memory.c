#include <webbind/Memory.h>


DEFINE_EMLITE_TYPE(Memory, em_Val);


Memory Memory_new(const jb_Any* descriptor) : em_Val(em_Val_global("Memory").new_(em_Val_from(descriptor))) {
        return Memory(em_Val_new(em_Val_global("Memory", em_Val_from(descriptor)));
      }


unsigned long Memory_grow(Memory* self , unsigned long delta) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "grow", em_Val_from(delta)));
}


jb_ArrayBuffer Memory_toFixedLengthBuffer(Memory* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "toFixedLengthBuffer"));
}


jb_ArrayBuffer Memory_toResizableBuffer(Memory* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "toResizableBuffer"));
}


jb_ArrayBuffer Memory_buffer(const Memory *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "buffer"));
}

