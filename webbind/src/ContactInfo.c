#include <webbind/ContactInfo.h>

#include <webbind/ContactAddress.h>
#include <webbind/Blob.h>

DEFINE_EMLITE_TYPE(ContactInfo, em_Val);


jb_Array ContactInfo_address(const ContactInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("address")));
}


void ContactInfo_set_address(ContactInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("address"), em_Val_from(value));
}


jb_Array ContactInfo_email(const ContactInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("email")));
}


void ContactInfo_set_email(ContactInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("email"), em_Val_from(value));
}


jb_Array ContactInfo_icon(const ContactInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void ContactInfo_set_icon(ContactInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}


jb_Array ContactInfo_name(const ContactInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void ContactInfo_set_name(ContactInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_Array ContactInfo_tel(const ContactInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tel")));
}


void ContactInfo_set_tel(ContactInfo* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tel"), em_Val_from(value));
}


ContactInfo ContactInfo_new() {
    em_Val obj = em_Val_object();
    return ContactInfo_from_val(&obj);
}

