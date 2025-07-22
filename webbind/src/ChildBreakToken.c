#include <webbind/ChildBreakToken.h>
#include <webbind/LayoutChild.h>


DEFINE_EMLITE_TYPE(ChildBreakToken, em_Val);


BreakType ChildBreakToken_breakType(const ChildBreakToken *self) {
    return em_Val_as(BreakType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("breakType")));
}


LayoutChild ChildBreakToken_child(const ChildBreakToken *self) {
    return em_Val_as(LayoutChild, em_Val_get(em_Val_as_val(self->inner), em_Val_from("child")));
}

