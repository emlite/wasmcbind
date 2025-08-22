#include <webcbind/XRInputSourceArray.h>

#include <webcbind/XRInputSource.h>

DEFINE_EMLITE_TYPE(XRInputSourceArray, em_Val);


unsigned long XRInputSourceArray_length(const XRInputSourceArray *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

