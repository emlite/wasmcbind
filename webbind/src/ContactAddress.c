#include <webbind/ContactAddress.h>


DEFINE_EMLITE_TYPE(ContactAddress, em_Val);


jb_Object ContactAddress_toJSON(ContactAddress* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}


jb_DOMString ContactAddress_city(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("city")));
}


jb_DOMString ContactAddress_country(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("country")));
}


jb_DOMString ContactAddress_dependentLocality(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependentLocality")));
}


jb_DOMString ContactAddress_organization(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("organization")));
}


jb_DOMString ContactAddress_phone(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


jb_DOMString ContactAddress_postalCode(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postalCode")));
}


jb_DOMString ContactAddress_recipient(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


jb_DOMString ContactAddress_region(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("region")));
}


jb_DOMString ContactAddress_sortingCode(const ContactAddress *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sortingCode")));
}


jb_FrozenArray ContactAddress_addressLine(const ContactAddress *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressLine")));
}

