#include <webbind/NavigationHistoryEntry.h>


DEFINE_EMLITE_TYPE(NavigationHistoryEntry, EventTarget);


jb_USVString NavigationHistoryEntry_url(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "url"));
}


jb_DOMString NavigationHistoryEntry_key(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "key"));
}


jb_DOMString NavigationHistoryEntry_id(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


long long NavigationHistoryEntry_index(const NavigationHistoryEntry *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "index"));
}


bool NavigationHistoryEntry_sameDocument(const NavigationHistoryEntry *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "sameDocument"));
}


jb_Any NavigationHistoryEntry_getState(NavigationHistoryEntry* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getState"));
}


jb_Any NavigationHistoryEntry_ondispose(const NavigationHistoryEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondispose"));
}


void NavigationHistoryEntry_set_ondispose(NavigationHistoryEntry* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondispose", value);
}

