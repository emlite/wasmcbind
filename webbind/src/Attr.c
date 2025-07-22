#include <webbind/Attr.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(Attr, Node);


jb_DOMString Attr_namespaceURI(const Attr *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("namespaceURI")));
}


jb_DOMString Attr_prefix(const Attr *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("prefix")));
}


jb_DOMString Attr_localName(const Attr *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("localName")));
}


jb_DOMString Attr_name(const Attr *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("name")));
}


jb_DOMString Attr_value(const Attr *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("value")));
}


void Attr_set_value(Attr* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


Element Attr_ownerElement(const Attr *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("ownerElement")));
}


bool Attr_specified(const Attr *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("specified")));
}

