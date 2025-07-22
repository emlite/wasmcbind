#include <webbind/NotRestoredReasonDetails.h>


DEFINE_EMLITE_TYPE(NotRestoredReasonDetails, em_Val);


jb_DOMString NotRestoredReasonDetails_reason(const NotRestoredReasonDetails *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "reason"));
}


jb_Object NotRestoredReasonDetails_toJSON(NotRestoredReasonDetails* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

