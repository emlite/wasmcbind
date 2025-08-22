#include <webcbind/ContactsSelectOptions.h>

DEFINE_EMLITE_TYPE(ContactsSelectOptions, em_Val);


bool ContactsSelectOptions_multiple(const ContactsSelectOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiple")));
}


void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}


ContactsSelectOptions ContactsSelectOptions_new() {
    em_Val obj = em_Val_object();
    return ContactsSelectOptions_from_val(&obj);
}

