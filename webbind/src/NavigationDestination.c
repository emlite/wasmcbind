#include <webbind/NavigationDestination.h>


DEFINE_EMLITE_TYPE(NavigationDestination, em_Val);


jb_USVString NavigationDestination_url(const NavigationDestination *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


jb_DOMString NavigationDestination_key(const NavigationDestination *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "key"));
}


jb_DOMString NavigationDestination_id(const NavigationDestination *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


long long NavigationDestination_index(const NavigationDestination *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "index"));
}


bool NavigationDestination_sameDocument(const NavigationDestination *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "sameDocument"));
}


jb_Any NavigationDestination_getState(NavigationDestination* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getState"));
}

