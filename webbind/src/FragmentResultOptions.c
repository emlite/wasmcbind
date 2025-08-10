#include <webbind/FragmentResultOptions.h>

#include <webbind/LayoutFragment.h>

DEFINE_EMLITE_TYPE(FragmentResultOptions, em_Val);


double FragmentResultOptions_inlineSize(const FragmentResultOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineSize")));
}


void FragmentResultOptions_set_inlineSize(FragmentResultOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inlineSize"), em_Val_from(value));
}


double FragmentResultOptions_blockSize(const FragmentResultOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockSize")));
}


void FragmentResultOptions_set_blockSize(FragmentResultOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blockSize"), em_Val_from(value));
}


double FragmentResultOptions_autoBlockSize(const FragmentResultOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("autoBlockSize")));
}


void FragmentResultOptions_set_autoBlockSize(FragmentResultOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("autoBlockSize"), em_Val_from(value));
}


jb_Array FragmentResultOptions_childFragments(const FragmentResultOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childFragments")));
}


void FragmentResultOptions_set_childFragments(FragmentResultOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("childFragments"), em_Val_from(value));
}


jb_Any FragmentResultOptions_data(const FragmentResultOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void FragmentResultOptions_set_data(FragmentResultOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


BreakTokenOptions FragmentResultOptions_breakToken(const FragmentResultOptions *self) {
    return em_Val_as(BreakTokenOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("breakToken")));
}


void FragmentResultOptions_set_breakToken(FragmentResultOptions* self, BreakTokenOptions * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("breakToken"), em_Val_from(value));
}


FragmentResultOptions FragmentResultOptions_new() {
    em_Val obj = em_Val_object();
    return FragmentResultOptions_from_val(&obj);
}

