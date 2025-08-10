#include <webbind/LayoutChild.h>

#include <webbind/StylePropertyMapReadOnly.h>
#include <webbind/IntrinsicSizes.h>
#include <webbind/LayoutFragment.h>
#include <webbind/LayoutConstraintsOptions.h>
#include <webbind/ChildBreakToken.h>

DEFINE_EMLITE_TYPE(LayoutChild, em_Val);


StylePropertyMapReadOnly LayoutChild_styleMap(const LayoutChild *self) {
    return em_Val_as(StylePropertyMapReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("styleMap")));
}


jb_Promise LayoutChild_intrinsicSizes(LayoutChild* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "intrinsicSizes"));
}


jb_Promise LayoutChild_layoutNextFragment(LayoutChild* self , LayoutConstraintsOptions * constraints, ChildBreakToken * breakToken) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "layoutNextFragment", em_Val_from(constraints), em_Val_from(breakToken)));
}

