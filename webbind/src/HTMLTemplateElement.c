#include <webbind/HTMLTemplateElement.h>
#include <webbind/DocumentFragment.h>


DEFINE_EMLITE_TYPE(HTMLTemplateElement, HTMLElement);


HTMLTemplateElement HTMLTemplateElement_new() : HTMLElement(em_Val_global("HTMLTemplateElement").new_()) {
        return HTMLTemplateElement(em_Val_new(em_Val_global("HTMLTemplateElement", ));
      }


DocumentFragment HTMLTemplateElement_content(const HTMLTemplateElement *self) {
    return em_Val_as(DocumentFragment, em_Val_get(HTMLElement_as_val(self->inner), "content"));
}


jb_DOMString HTMLTemplateElement_shadowRootMode(const HTMLTemplateElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "shadowRootMode"));
}


void HTMLTemplateElement_set_shadowRootMode(HTMLTemplateElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shadowRootMode", value);
}


bool HTMLTemplateElement_shadowRootDelegatesFocus(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "shadowRootDelegatesFocus"));
}


void HTMLTemplateElement_set_shadowRootDelegatesFocus(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shadowRootDelegatesFocus", value);
}


bool HTMLTemplateElement_shadowRootClonable(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "shadowRootClonable"));
}


void HTMLTemplateElement_set_shadowRootClonable(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shadowRootClonable", value);
}


bool HTMLTemplateElement_shadowRootSerializable(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "shadowRootSerializable"));
}


void HTMLTemplateElement_set_shadowRootSerializable(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shadowRootSerializable", value);
}


jb_DOMString HTMLTemplateElement_shadowRootCustomElementRegistry(const HTMLTemplateElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "shadowRootCustomElementRegistry"));
}


void HTMLTemplateElement_set_shadowRootCustomElementRegistry(HTMLTemplateElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shadowRootCustomElementRegistry", value);
}

