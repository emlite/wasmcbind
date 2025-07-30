#include <webbind/Sanitizer.h>


DEFINE_EMLITE_TYPE(SanitizerConfig, em_Val);


jb_Array SanitizerConfig_elements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("elements")));
}


void SanitizerConfig_set_elements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("elements"), em_Val_from(value));
}


jb_Array SanitizerConfig_removeElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("removeElements")));
}


void SanitizerConfig_set_removeElements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("removeElements"), em_Val_from(value));
}


jb_Array SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("replaceWithChildrenElements")));
}


void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("replaceWithChildrenElements"), em_Val_from(value));
}


jb_Array SanitizerConfig_attributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributes")));
}


void SanitizerConfig_set_attributes(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


jb_Array SanitizerConfig_removeAttributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("removeAttributes")));
}


void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("removeAttributes"), em_Val_from(value));
}


bool SanitizerConfig_comments(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("comments")));
}


void SanitizerConfig_set_comments(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("comments"), em_Val_from(value));
}


bool SanitizerConfig_dataAttributes(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataAttributes")));
}


void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataAttributes"), em_Val_from(value));
}

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

