#include <webbind/FragmentResult.h>


DEFINE_EMLITE_TYPE(FragmentResult, em_Val);


FragmentResult FragmentResult_new() : em_Val(em_Val_global("FragmentResult").new_()) {
        return FragmentResult(em_Val_new(em_Val_global("FragmentResult", ));
      }


FragmentResult FragmentResult_new(const jb_Any* options) : em_Val(em_Val_global("FragmentResult").new_(em_Val_from(options))) {
        return FragmentResult(em_Val_new(em_Val_global("FragmentResult", em_Val_from(options)));
      }


double FragmentResult_inlineSize(const FragmentResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inlineSize"));
}


double FragmentResult_blockSize(const FragmentResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "blockSize"));
}

