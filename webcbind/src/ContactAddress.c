#include <webcbind/ContactAddress.h>

DEFINE_EMLITE_TYPE(ContactAddress, em_Val);


jb_Object ContactAddress_toJSON(ContactAddress* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}


jb_String ContactAddress_city(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("city")));
}


jb_String ContactAddress_country(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("country")));
}


jb_String ContactAddress_dependentLocality(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependentLocality")));
}


jb_String ContactAddress_organization(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("organization")));
}


jb_String ContactAddress_phone(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


jb_String ContactAddress_postalCode(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postalCode")));
}


jb_String ContactAddress_recipient(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


jb_String ContactAddress_region(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("region")));
}


jb_String ContactAddress_sortingCode(const ContactAddress *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sortingCode")));
}


jb_Array ContactAddress_addressLine(const ContactAddress *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressLine")));
}

