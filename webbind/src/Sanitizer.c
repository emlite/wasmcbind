#include <webbind/Sanitizer.h>


DEFINE_EMLITE_TYPE(SanitizerConfig, em_Val);


jb_Sequence SanitizerConfig_elements(const SanitizerConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "elements"));
}


void SanitizerConfig_set_elements(SanitizerConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "elements", value);
}


jb_Sequence SanitizerConfig_removeElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "removeElements"));
}


void SanitizerConfig_set_removeElements(SanitizerConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "removeElements", value);
}


jb_Sequence SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "replaceWithChildrenElements"));
}


void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "replaceWithChildrenElements", value);
}


jb_Sequence SanitizerConfig_attributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "attributes"));
}


void SanitizerConfig_set_attributes(SanitizerConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "attributes", value);
}


jb_Sequence SanitizerConfig_removeAttributes(const SanitizerConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "removeAttributes"));
}


void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "removeAttributes", value);
}


bool SanitizerConfig_comments(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "comments"));
}


void SanitizerConfig_set_comments(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "comments", value);
}


bool SanitizerConfig_dataAttributes(const SanitizerConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "dataAttributes"));
}


void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "dataAttributes", value);
}

DEFINE_EMLITE_TYPE(Sanitizer, em_Val);


Sanitizer Sanitizer_new() : em_Val(em_Val_global("Sanitizer").new_()) {
        return Sanitizer(em_Val_new(em_Val_global("Sanitizer", ));
      }


Sanitizer Sanitizer_new(const jb_Any* configuration) : em_Val(em_Val_global("Sanitizer").new_(em_Val_from(configuration))) {
        return Sanitizer(em_Val_new(em_Val_global("Sanitizer", em_Val_from(configuration)));
      }


SanitizerConfig Sanitizer_get(Sanitizer* self ) {
    return em_Val_as(SanitizerConfig, em_Val_call(em_Val_as_val(self->inner), "get"));
}


jb_Undefined Sanitizer_allowElement(Sanitizer* self , const jb_Any* element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "allowElement", em_Val_from(element)));
}


jb_Undefined Sanitizer_removeElement(Sanitizer* self , const jb_Any* element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeElement", em_Val_from(element)));
}


jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , const jb_Any* element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replaceElementWithChildren", em_Val_from(element)));
}


jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , const jb_Any* attribute) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "allowAttribute", em_Val_from(attribute)));
}


jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , const jb_Any* attribute) {
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

