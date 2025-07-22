#include <webbind/ContactsManager.h>
#include <webbind/Blob.h>
#include <webbind/ContactAddress.h>


DEFINE_EMLITE_TYPE(ContactInfo, em_Val);


jb_Sequence ContactInfo_address(const ContactInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "address"));
}


void ContactInfo_set_address(ContactInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "address", value);
}


jb_Sequence ContactInfo_email(const ContactInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "email"));
}


void ContactInfo_set_email(ContactInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "email", value);
}


jb_Sequence ContactInfo_icon(const ContactInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "icon"));
}


void ContactInfo_set_icon(ContactInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "icon", value);
}


jb_Sequence ContactInfo_name(const ContactInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void ContactInfo_set_name(ContactInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_Sequence ContactInfo_tel(const ContactInfo *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "tel"));
}


void ContactInfo_set_tel(ContactInfo* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "tel", value);
}

DEFINE_EMLITE_TYPE(ContactsSelectOptions, em_Val);


bool ContactsSelectOptions_multiple(const ContactsSelectOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "multiple"));
}


void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "multiple", value);
}

DEFINE_EMLITE_TYPE(ContactsManager, em_Val);


jb_Promise ContactsManager_getProperties(ContactsManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getProperties"));
}


jb_Promise ContactsManager_select(ContactsManager* self , const jb_Sequence* properties) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "select", em_Val_from(properties)));
}


jb_Promise ContactsManager_select(ContactsManager* self , const jb_Sequence* properties, const ContactsSelectOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "select", em_Val_from(properties), em_Val_from(options)));
}

