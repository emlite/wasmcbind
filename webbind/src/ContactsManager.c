#include <webbind/ContactsManager.h>
#include <webbind/Blob.h>
#include <webbind/ContactAddress.h>


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

DEFINE_EMLITE_TYPE(ContactsSelectOptions, em_Val);


bool ContactsSelectOptions_multiple(const ContactsSelectOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiple")));
}


void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ContactsManager, em_Val);


jb_Promise ContactsManager_getProperties(ContactsManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getProperties"));
}


jb_Promise ContactsManager_select0(ContactsManager* self , jb_Array * properties) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "select", em_Val_from(properties)));
}


jb_Promise ContactsManager_select1(ContactsManager* self , jb_Array * properties, ContactsSelectOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "select", em_Val_from(properties), em_Val_from(options)));
}

