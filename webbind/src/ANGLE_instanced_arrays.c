#include <webbind/ANGLE_instanced_arrays.h>


DEFINE_EMLITE_TYPE(ANGLE_instanced_arrays, em_Val);


jb_Undefined ANGLE_instanced_arrays_drawArraysInstancedANGLE(ANGLE_instanced_arrays* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* primcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawArraysInstancedANGLE", em_Val_from(mode), em_Val_from(first), em_Val_from(count), em_Val_from(primcount)));
}


jb_Undefined ANGLE_instanced_arrays_drawElementsInstancedANGLE(ANGLE_instanced_arrays* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* primcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawElementsInstancedANGLE", em_Val_from(mode), em_Val_from(count), em_Val_from(type), em_Val_from(offset), em_Val_from(primcount)));
}


jb_Undefined ANGLE_instanced_arrays_vertexAttribDivisorANGLE(ANGLE_instanced_arrays* self , const jb_Any* index, const jb_Any* divisor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribDivisorANGLE", em_Val_from(index), em_Val_from(divisor)));
}

