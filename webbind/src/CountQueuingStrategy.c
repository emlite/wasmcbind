#include <webbind/CountQueuingStrategy.h>


DEFINE_EMLITE_TYPE(CountQueuingStrategy, em_Val);


CountQueuingStrategy CountQueuingStrategy_new(const jb_Any* init) : em_Val(em_Val_global("CountQueuingStrategy").new_(em_Val_from(init))) {
        return CountQueuingStrategy(em_Val_new(em_Val_global("CountQueuingStrategy", em_Val_from(init)));
      }


double CountQueuingStrategy_highWaterMark(const CountQueuingStrategy *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "highWaterMark"));
}


jb_Function CountQueuingStrategy_size(const CountQueuingStrategy *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "size"));
}

