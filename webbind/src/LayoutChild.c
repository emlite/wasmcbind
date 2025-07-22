#include <webbind/LayoutChild.h>
#include <webbind/StylePropertyMapReadOnly.h>
#include <webbind/IntrinsicSizes.h>
#include <webbind/LayoutFragment.h>
#include <webbind/ChildBreakToken.h>


DEFINE_EMLITE_TYPE(LayoutConstraintsOptions, em_Val);


double LayoutConstraintsOptions_availableInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "availableInlineSize"));
}


void LayoutConstraintsOptions_set_availableInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "availableInlineSize", value);
}


double LayoutConstraintsOptions_availableBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "availableBlockSize"));
}


void LayoutConstraintsOptions_set_availableBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "availableBlockSize", value);
}


double LayoutConstraintsOptions_fixedInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fixedInlineSize"));
}


void LayoutConstraintsOptions_set_fixedInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "fixedInlineSize", value);
}


double LayoutConstraintsOptions_fixedBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fixedBlockSize"));
}


void LayoutConstraintsOptions_set_fixedBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "fixedBlockSize", value);
}


double LayoutConstraintsOptions_percentageInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "percentageInlineSize"));
}


void LayoutConstraintsOptions_set_percentageInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "percentageInlineSize", value);
}


double LayoutConstraintsOptions_percentageBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "percentageBlockSize"));
}


void LayoutConstraintsOptions_set_percentageBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "percentageBlockSize", value);
}


double LayoutConstraintsOptions_blockFragmentationOffset(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "blockFragmentationOffset"));
}


void LayoutConstraintsOptions_set_blockFragmentationOffset(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "blockFragmentationOffset", value);
}


BlockFragmentationType LayoutConstraintsOptions_blockFragmentationType(const LayoutConstraintsOptions *self) {
    return em_Val_as(BlockFragmentationType, em_Val_get(em_Val_as_val(self->inner), "blockFragmentationType"));
}


void LayoutConstraintsOptions_set_blockFragmentationType(LayoutConstraintsOptions* self, const BlockFragmentationType* value) {
    em_Val_set(em_Val_as_val(self->inner), "blockFragmentationType", value);
}


jb_Any LayoutConstraintsOptions_data(const LayoutConstraintsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void LayoutConstraintsOptions_set_data(LayoutConstraintsOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}

DEFINE_EMLITE_TYPE(LayoutChild, em_Val);


StylePropertyMapReadOnly LayoutChild_styleMap(const LayoutChild *self) {
    return em_Val_as(StylePropertyMapReadOnly, em_Val_get(em_Val_as_val(self->inner), "styleMap"));
}


jb_Promise LayoutChild_intrinsicSizes(LayoutChild* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "intrinsicSizes"));
}


jb_Promise LayoutChild_layoutNextFragment(LayoutChild* self , const LayoutConstraintsOptions* constraints, const ChildBreakToken* breakToken) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "layoutNextFragment", em_Val_from(constraints), em_Val_from(breakToken)));
}

