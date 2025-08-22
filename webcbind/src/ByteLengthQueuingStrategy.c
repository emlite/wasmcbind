#include <webcbind/ByteLengthQueuingStrategy.h>

#include <webcbind/QueuingStrategyInit.h>

DEFINE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);


ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(QueuingStrategyInit * init) {
        em_Val vv = em_Val_new(em_Val_global("ByteLengthQueuingStrategy") , em_Val_from(init));
        return ByteLengthQueuingStrategy_from_val(&vv);
      }


double ByteLengthQueuingStrategy_highWaterMark(const ByteLengthQueuingStrategy *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highWaterMark")));
}


jb_Function ByteLengthQueuingStrategy_size(const ByteLengthQueuingStrategy *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}

