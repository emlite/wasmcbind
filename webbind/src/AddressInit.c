#include <webbind/AddressInit.h>

DEFINE_EMLITE_TYPE(AddressInit, em_Val);


jb_String AddressInit_country(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("country")));
}


void AddressInit_set_country(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("country"), em_Val_from(value));
}


jb_Array AddressInit_addressLine(const AddressInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressLine")));
}


void AddressInit_set_addressLine(AddressInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressLine"), em_Val_from(value));
}


jb_String AddressInit_region(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("region")));
}


void AddressInit_set_region(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("region"), em_Val_from(value));
}


jb_String AddressInit_city(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("city")));
}


void AddressInit_set_city(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("city"), em_Val_from(value));
}


jb_String AddressInit_dependentLocality(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependentLocality")));
}


void AddressInit_set_dependentLocality(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dependentLocality"), em_Val_from(value));
}


jb_String AddressInit_postalCode(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postalCode")));
}


void AddressInit_set_postalCode(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("postalCode"), em_Val_from(value));
}


jb_String AddressInit_sortingCode(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sortingCode")));
}


void AddressInit_set_sortingCode(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sortingCode"), em_Val_from(value));
}


jb_String AddressInit_organization(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("organization")));
}


void AddressInit_set_organization(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("organization"), em_Val_from(value));
}


jb_String AddressInit_recipient(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


void AddressInit_set_recipient(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recipient"), em_Val_from(value));
}


jb_String AddressInit_phone(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


void AddressInit_set_phone(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("phone"), em_Val_from(value));
}


AddressInit AddressInit_new() {
    em_Val obj = em_Val_object();
    return AddressInit_from_val(&obj);
}

