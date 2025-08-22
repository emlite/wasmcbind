#include <webcbind/OverconstrainedError.h>

DEFINE_EMLITE_TYPE(OverconstrainedError, DOMException);


OverconstrainedError OverconstrainedError_new0(jb_String * constraint) {
        em_Val vv = em_Val_new(em_Val_global("OverconstrainedError") , em_Val_from(constraint));
        return OverconstrainedError_from_val(&vv);
      }


OverconstrainedError OverconstrainedError_new1(jb_String * constraint, jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("OverconstrainedError") , em_Val_from(constraint), em_Val_from(message));
        return OverconstrainedError_from_val(&vv);
      }


jb_String OverconstrainedError_constraint(const OverconstrainedError *self) {
    return em_Val_as(jb_String, em_Val_get(DOMException_as_val(self->inner), em_Val_from("constraint")));
}

