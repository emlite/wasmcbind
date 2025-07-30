#include <webbind/Attr.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(Attr, Node);


jb_String Attr_namespaceURI(const Attr *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("namespaceURI")));
}


jb_String Attr_prefix(const Attr *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("prefix")));
}


jb_String Attr_localName(const Attr *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("localName")));
}


jb_String Attr_name(const Attr *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("name")));
}


jb_String Attr_value(const Attr *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("value")));
}


void Attr_set_value(Attr* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


Element Attr_ownerElement(const Attr *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("ownerElement")));
}


bool Attr_specified(const Attr *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("specified")));
}

