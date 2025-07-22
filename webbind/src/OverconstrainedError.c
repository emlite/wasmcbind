#include <webbind/OverconstrainedError.h>


DEFINE_EMLITE_TYPE(OverconstrainedError, DOMException);


OverconstrainedError OverconstrainedError_new(const jb_DOMString* constraint) : DOMException(em_Val_global("OverconstrainedError").new_(em_Val_from(constraint))) {
        return OverconstrainedError(em_Val_new(em_Val_global("OverconstrainedError", em_Val_from(constraint)));
      }


OverconstrainedError OverconstrainedError_new(const jb_DOMString* constraint, const jb_DOMString* message) : DOMException(em_Val_global("OverconstrainedError").new_(em_Val_from(constraint), em_Val_from(message))) {
        return OverconstrainedError(em_Val_new(em_Val_global("OverconstrainedError", em_Val_from(constraint), em_Val_from(message)));
      }


jb_DOMString OverconstrainedError_constraint(const OverconstrainedError *self) {
    return em_Val_as(jb_DOMString, em_Val_get(DOMException_as_val(self->inner), "constraint"));
}

