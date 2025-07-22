#include <webbind/LayoutConstraints.h>


DEFINE_EMLITE_TYPE(LayoutConstraints, em_Val);


double LayoutConstraints_availableInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "availableInlineSize"));
}


double LayoutConstraints_availableBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "availableBlockSize"));
}


double LayoutConstraints_fixedInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fixedInlineSize"));
}


double LayoutConstraints_fixedBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fixedBlockSize"));
}


double LayoutConstraints_percentageInlineSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "percentageInlineSize"));
}


double LayoutConstraints_percentageBlockSize(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "percentageBlockSize"));
}


double LayoutConstraints_blockFragmentationOffset(const LayoutConstraints *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "blockFragmentationOffset"));
}


BlockFragmentationType LayoutConstraints_blockFragmentationType(const LayoutConstraints *self) {
    return em_Val_as(BlockFragmentationType, em_Val_get(em_Val_as_val(self->inner), "blockFragmentationType"));
}


jb_Any LayoutConstraints_data(const LayoutConstraints *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "data"));
}

