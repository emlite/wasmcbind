#include <webbind/NotRestoredReasons.h>

#include <webbind/NotRestoredReasonDetails.h>

DEFINE_EMLITE_TYPE(NotRestoredReasons, em_Val);


jb_String NotRestoredReasons_src(const NotRestoredReasons *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


jb_String NotRestoredReasons_id(const NotRestoredReasons *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_String NotRestoredReasons_name(const NotRestoredReasons *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_String NotRestoredReasons_url(const NotRestoredReasons *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


jb_Array NotRestoredReasons_reasons(const NotRestoredReasons *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reasons")));
}


jb_Array NotRestoredReasons_children(const NotRestoredReasons *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("children")));
}


jb_Object NotRestoredReasons_toJSON(NotRestoredReasons* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

