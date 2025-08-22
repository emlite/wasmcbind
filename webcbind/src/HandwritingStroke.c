#include <webcbind/HandwritingStroke.h>

#include <webcbind/HandwritingPoint.h>

DEFINE_EMLITE_TYPE(HandwritingStroke, em_Val);


HandwritingStroke HandwritingStroke_new() {
        em_Val vv = em_Val_new(em_Val_global("HandwritingStroke") );
        return HandwritingStroke_from_val(&vv);
      }


jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , HandwritingPoint * point) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addPoint", em_Val_from(point)));
}


jb_Array HandwritingStroke_getPoints(HandwritingStroke* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getPoints"));
}


jb_Undefined HandwritingStroke_clear(HandwritingStroke* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}

