#include <webbind/CSSUnparsedValue.h>


DEFINE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);


CSSUnparsedValue CSSUnparsedValue_new(const jb_Sequence* members) : CSSStyleValue(em_Val_global("CSSUnparsedValue").new_(em_Val_from(members))) {
        return CSSUnparsedValue(em_Val_new(em_Val_global("CSSUnparsedValue", em_Val_from(members)));
      }


unsigned long CSSUnparsedValue_length(const CSSUnparsedValue *self) {
    return em_Val_as(unsigned long, em_Val_get(CSSStyleValue_as_val(self->inner), "length"));
}

