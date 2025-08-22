#include <webcbind/Sanitizer.h>

#include <webcbind/SanitizerConfig.h>

DEFINE_EMLITE_TYPE(Sanitizer, em_Val);


Sanitizer Sanitizer_new0() {
        em_Val vv = em_Val_new(em_Val_global("Sanitizer") );
        return Sanitizer_from_val(&vv);
      }


Sanitizer Sanitizer_new1(jb_Any * configuration) {
        em_Val vv = em_Val_new(em_Val_global("Sanitizer") , em_Val_from(configuration));
        return Sanitizer_from_val(&vv);
      }


SanitizerConfig Sanitizer_get(Sanitizer* self ) {
    return em_Val_as(SanitizerConfig, em_Val_call(em_Val_as_val(self->inner), "get"));
}


jb_Undefined Sanitizer_allowElement(Sanitizer* self , jb_Any * element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "allowElement", em_Val_from(element)));
}


jb_Undefined Sanitizer_removeElement(Sanitizer* self , jb_Any * element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeElement", em_Val_from(element)));
}


jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , jb_Any * element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceElementWithChildren", em_Val_from(element)));
}


jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , jb_Any * attribute) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "allowAttribute", em_Val_from(attribute)));
}


jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , jb_Any * attribute) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeAttribute", em_Val_from(attribute)));
}


jb_Undefined Sanitizer_setComments(Sanitizer* self , bool allow) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setComments", em_Val_from(allow)));
}


jb_Undefined Sanitizer_setDataAttributes(Sanitizer* self , bool allow) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setDataAttributes", em_Val_from(allow)));
}


jb_Undefined Sanitizer_removeUnsafe(Sanitizer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeUnsafe"));
}

