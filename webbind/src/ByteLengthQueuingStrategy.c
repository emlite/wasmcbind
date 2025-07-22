#include <webbind/ByteLengthQueuingStrategy.h>


DEFINE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);


ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(const jb_Any* init) : em_Val(em_Val_global("ByteLengthQueuingStrategy").new_(em_Val_from(init))) {
        return ByteLengthQueuingStrategy(em_Val_new(em_Val_global("ByteLengthQueuingStrategy", em_Val_from(init)));
      }


double ByteLengthQueuingStrategy_highWaterMark(const ByteLengthQueuingStrategy *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "highWaterMark"));
}


jb_Function ByteLengthQueuingStrategy_size(const ByteLengthQueuingStrategy *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "size"));
}

