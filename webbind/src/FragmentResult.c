#include <webbind/FragmentResult.h>


DEFINE_EMLITE_TYPE(FragmentResult, em_Val);


FragmentResult FragmentResult_new0() {
        em_Val vv = em_Val_new(em_Val_global("FragmentResult") );
        return FragmentResult_from_val(&vv);
      }


FragmentResult FragmentResult_new1(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("FragmentResult") , em_Val_from(options));
        return FragmentResult_from_val(&vv);
      }


double FragmentResult_inlineSize(const FragmentResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineSize")));
}


double FragmentResult_blockSize(const FragmentResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockSize")));
}

