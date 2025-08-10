#include <webbind/HTMLTemplateElement.h>

#include <webbind/DocumentFragment.h>

DEFINE_EMLITE_TYPE(HTMLTemplateElement, HTMLElement);


HTMLTemplateElement HTMLTemplateElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTemplateElement") );
        return HTMLTemplateElement_from_val(&vv);
      }


DocumentFragment HTMLTemplateElement_content(const HTMLTemplateElement *self) {
    return em_Val_as(DocumentFragment, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("content")));
}


jb_String HTMLTemplateElement_shadowRootMode(const HTMLTemplateElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shadowRootMode")));
}


void HTMLTemplateElement_set_shadowRootMode(HTMLTemplateElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shadowRootMode"), em_Val_from(value));
}


bool HTMLTemplateElement_shadowRootDelegatesFocus(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shadowRootDelegatesFocus")));
}


void HTMLTemplateElement_set_shadowRootDelegatesFocus(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shadowRootDelegatesFocus"), em_Val_from(value));
}


bool HTMLTemplateElement_shadowRootClonable(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shadowRootClonable")));
}


void HTMLTemplateElement_set_shadowRootClonable(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shadowRootClonable"), em_Val_from(value));
}


bool HTMLTemplateElement_shadowRootSerializable(const HTMLTemplateElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shadowRootSerializable")));
}


void HTMLTemplateElement_set_shadowRootSerializable(HTMLTemplateElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shadowRootSerializable"), em_Val_from(value));
}


jb_String HTMLTemplateElement_shadowRootCustomElementRegistry(const HTMLTemplateElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shadowRootCustomElementRegistry")));
}


void HTMLTemplateElement_set_shadowRootCustomElementRegistry(HTMLTemplateElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shadowRootCustomElementRegistry"), em_Val_from(value));
}

