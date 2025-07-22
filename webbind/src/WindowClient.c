#include <webbind/WindowClient.h>


DEFINE_EMLITE_TYPE(WindowClient, Client);


DocumentVisibilityState WindowClient_visibilityState(const WindowClient *self) {
    return em_Val_as(DocumentVisibilityState, em_Val_get(Client_as_val(self->inner), em_Val_from("visibilityState")));
}


bool WindowClient_focused(const WindowClient *self) {
    return em_Val_as(bool, em_Val_get(Client_as_val(self->inner), em_Val_from("focused")));
}


jb_FrozenArray WindowClient_ancestorOrigins(const WindowClient *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Client_as_val(self->inner), em_Val_from("ancestorOrigins")));
}


jb_Promise WindowClient_focus(WindowClient* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Client_as_val(self->inner), "focus"));
}


jb_Promise WindowClient_navigate(WindowClient* self , jb_USVString * url) {
    return em_Val_as(jb_Promise, em_Val_call(Client_as_val(self->inner), "navigate", em_Val_from(url)));
}

