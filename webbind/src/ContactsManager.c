#include <webbind/ContactsManager.h>

#include <webbind/ContactInfo.h>
#include <webbind/ContactsSelectOptions.h>

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

