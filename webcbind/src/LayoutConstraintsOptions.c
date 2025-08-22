#include <webcbind/LayoutConstraintsOptions.h>

DEFINE_EMLITE_TYPE(LayoutConstraintsOptions, em_Val);


double LayoutConstraintsOptions_availableInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availableInlineSize")));
}


void LayoutConstraintsOptions_set_availableInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("availableInlineSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_availableBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availableBlockSize")));
}


void LayoutConstraintsOptions_set_availableBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("availableBlockSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_fixedInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fixedInlineSize")));
}


void LayoutConstraintsOptions_set_fixedInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fixedInlineSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_fixedBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fixedBlockSize")));
}


void LayoutConstraintsOptions_set_fixedBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fixedBlockSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_percentageInlineSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percentageInlineSize")));
}


void LayoutConstraintsOptions_set_percentageInlineSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("percentageInlineSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_percentageBlockSize(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percentageBlockSize")));
}


void LayoutConstraintsOptions_set_percentageBlockSize(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("percentageBlockSize"), em_Val_from(value));
}


double LayoutConstraintsOptions_blockFragmentationOffset(const LayoutConstraintsOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockFragmentationOffset")));
}


void LayoutConstraintsOptions_set_blockFragmentationOffset(LayoutConstraintsOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blockFragmentationOffset"), em_Val_from(value));
}


BlockFragmentationType LayoutConstraintsOptions_blockFragmentationType(const LayoutConstraintsOptions *self) {
    return em_Val_as(BlockFragmentationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockFragmentationType")));
}


void LayoutConstraintsOptions_set_blockFragmentationType(LayoutConstraintsOptions* self, BlockFragmentationType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blockFragmentationType"), em_Val_from(value));
}


jb_Any LayoutConstraintsOptions_data(const LayoutConstraintsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void LayoutConstraintsOptions_set_data(LayoutConstraintsOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


LayoutConstraintsOptions LayoutConstraintsOptions_new() {
    em_Val obj = em_Val_object();
    return LayoutConstraintsOptions_from_val(&obj);
}

