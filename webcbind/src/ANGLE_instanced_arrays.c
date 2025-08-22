#include <webcbind/ANGLE_instanced_arrays.h>

DEFINE_EMLITE_TYPE(ANGLE_instanced_arrays, em_Val);


jb_Undefined ANGLE_instanced_arrays_drawArraysInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * primcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawArraysInstancedANGLE", em_Val_from(mode), em_Val_from(first), em_Val_from(count), em_Val_from(primcount)));
}


jb_Undefined ANGLE_instanced_arrays_drawElementsInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * primcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawElementsInstancedANGLE", em_Val_from(mode), em_Val_from(count), em_Val_from(type), em_Val_from(offset), em_Val_from(primcount)));
}


jb_Undefined ANGLE_instanced_arrays_vertexAttribDivisorANGLE(ANGLE_instanced_arrays* self , jb_Any * index, jb_Any * divisor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "vertexAttribDivisorANGLE", em_Val_from(index), em_Val_from(divisor)));
}

