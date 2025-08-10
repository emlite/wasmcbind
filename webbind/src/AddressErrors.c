#include <webbind/AddressErrors.h>

DEFINE_EMLITE_TYPE(AddressErrors, em_Val);


jb_String AddressErrors_addressLine(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressLine")));
}


void AddressErrors_set_addressLine(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressLine"), em_Val_from(value));
}


jb_String AddressErrors_city(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("city")));
}


void AddressErrors_set_city(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("city"), em_Val_from(value));
}


jb_String AddressErrors_country(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("country")));
}


void AddressErrors_set_country(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("country"), em_Val_from(value));
}


jb_String AddressErrors_dependentLocality(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependentLocality")));
}


void AddressErrors_set_dependentLocality(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dependentLocality"), em_Val_from(value));
}


jb_String AddressErrors_organization(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("organization")));
}


void AddressErrors_set_organization(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("organization"), em_Val_from(value));
}


jb_String AddressErrors_phone(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


void AddressErrors_set_phone(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("phone"), em_Val_from(value));
}


jb_String AddressErrors_postalCode(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postalCode")));
}


void AddressErrors_set_postalCode(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("postalCode"), em_Val_from(value));
}


jb_String AddressErrors_recipient(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


void AddressErrors_set_recipient(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recipient"), em_Val_from(value));
}


jb_String AddressErrors_region(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("region")));
}


void AddressErrors_set_region(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("region"), em_Val_from(value));
}


jb_String AddressErrors_sortingCode(const AddressErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sortingCode")));
}


void AddressErrors_set_sortingCode(AddressErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sortingCode"), em_Val_from(value));
}


AddressErrors AddressErrors_new() {
    em_Val obj = em_Val_object();
    return AddressErrors_from_val(&obj);
}

