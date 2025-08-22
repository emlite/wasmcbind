#include <webcbind/LayoutConstraints.h>

DEFINE_EMLITE_TYPE(LayoutConstraints, em_Val);


double LayoutConstraints_availableInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availableInlineSize")));
}


double LayoutConstraints_availableBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("availableBlockSize")));
}


double LayoutConstraints_fixedInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fixedInlineSize")));
}


double LayoutConstraints_fixedBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fixedBlockSize")));
}


double LayoutConstraints_percentageInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percentageInlineSize")));
}


double LayoutConstraints_percentageBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("percentageBlockSize")));
}


double LayoutConstraints_blockFragmentationOffset(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockFragmentationOffset")));
}


BlockFragmentationType LayoutConstraints_blockFragmentationType(const LayoutConstraints *self) {
    return em_Val_as(BlockFragmentationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockFragmentationType")));
}


jb_Any LayoutConstraints_data(const LayoutConstraints *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}

