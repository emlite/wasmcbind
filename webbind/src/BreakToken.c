#include <webbind/BreakToken.h>
#include <webbind/ChildBreakToken.h>


DEFINE_EMLITE_TYPE(BreakToken, em_Val);


jb_Array BreakToken_childBreakTokens(const BreakToken *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childBreakTokens")));
}


jb_Any BreakToken_data(const BreakToken *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}

