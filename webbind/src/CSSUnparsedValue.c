#include <webbind/CSSUnparsedValue.h>


DEFINE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);


CSSUnparsedValue CSSUnparsedValue_new(jb_Array * members) {
        em_Val vv = em_Val_new(em_Val_global("CSSUnparsedValue") , em_Val_from(members));
        return CSSUnparsedValue_from_val(&vv);
      }


unsigned long CSSUnparsedValue_length(const CSSUnparsedValue *self) {
    return em_Val_as(unsigned long, em_Val_get(CSSStyleValue_as_val(self->inner), em_Val_from("length")));
}

