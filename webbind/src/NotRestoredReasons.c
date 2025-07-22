#include <webbind/NotRestoredReasons.h>
#include <webbind/NotRestoredReasonDetails.h>


DEFINE_EMLITE_TYPE(NotRestoredReasons, em_Val);


jb_USVString NotRestoredReasons_src(const NotRestoredReasons *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "src"));
}


jb_DOMString NotRestoredReasons_id(const NotRestoredReasons *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DOMString NotRestoredReasons_name(const NotRestoredReasons *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_USVString NotRestoredReasons_url(const NotRestoredReasons *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


jb_FrozenArray NotRestoredReasons_reasons(const NotRestoredReasons *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "reasons"));
}


jb_FrozenArray NotRestoredReasons_children(const NotRestoredReasons *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "children"));
}


jb_Object NotRestoredReasons_toJSON(NotRestoredReasons* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

