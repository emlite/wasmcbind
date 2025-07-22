#include <webbind/CountQueuingStrategy.h>


DEFINE_EMLITE_TYPE(CountQueuingStrategy, em_Val);


CountQueuingStrategy CountQueuingStrategy_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("CountQueuingStrategy") , em_Val_from(init));
        return CountQueuingStrategy_from_val(&vv);
      }


double CountQueuingStrategy_highWaterMark(const CountQueuingStrategy *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highWaterMark")));
}


jb_Function CountQueuingStrategy_size(const CountQueuingStrategy *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}

