#include <webbind/NavigationDestination.h>


DEFINE_EMLITE_TYPE(NavigationDestination, em_Val);


jb_String NavigationDestination_url(const NavigationDestination *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


jb_String NavigationDestination_key(const NavigationDestination *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("key")));
}


jb_String NavigationDestination_id(const NavigationDestination *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


long long NavigationDestination_index(const NavigationDestination *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("index")));
}


bool NavigationDestination_sameDocument(const NavigationDestination *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sameDocument")));
}


jb_Any NavigationDestination_getState(NavigationDestination* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getState"));
}

