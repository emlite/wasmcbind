#include <webbind/NavigationHistoryEntry.h>

DEFINE_EMLITE_TYPE(NavigationHistoryEntry, EventTarget);


jb_String NavigationHistoryEntry_url(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("url")));
}


jb_String NavigationHistoryEntry_key(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("key")));
}


jb_String NavigationHistoryEntry_id(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


long long NavigationHistoryEntry_index(const NavigationHistoryEntry *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("index")));
}


bool NavigationHistoryEntry_sameDocument(const NavigationHistoryEntry *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sameDocument")));
}


jb_Any NavigationHistoryEntry_getState(NavigationHistoryEntry* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getState"));
}


jb_Any NavigationHistoryEntry_ondispose(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondispose")));
}


void NavigationHistoryEntry_set_ondispose(NavigationHistoryEntry* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondispose"), em_Val_from(value));
}

