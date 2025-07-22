#include <webbind/CSSVariableReferenceValue.h>
#include <webbind/CSSUnparsedValue.h>


DEFINE_EMLITE_TYPE(CSSVariableReferenceValue, em_Val);


CSSVariableReferenceValue CSSVariableReferenceValue_new(const jb_USVString* variable) : em_Val(em_Val_global("CSSVariableReferenceValue").new_(em_Val_from(variable))) {
        return CSSVariableReferenceValue(em_Val_new(em_Val_global("CSSVariableReferenceValue", em_Val_from(variable)));
      }


CSSVariableReferenceValue CSSVariableReferenceValue_new(const jb_USVString* variable, const CSSUnparsedValue* fallback) : em_Val(em_Val_global("CSSVariableReferenceValue").new_(em_Val_from(variable), em_Val_from(fallback))) {
        return CSSVariableReferenceValue(em_Val_new(em_Val_global("CSSVariableReferenceValue", em_Val_from(variable), em_Val_from(fallback)));
      }


jb_USVString CSSVariableReferenceValue_variable(const CSSVariableReferenceValue *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "variable"));
}


void CSSVariableReferenceValue_set_variable(CSSVariableReferenceValue* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "variable", value);
}


CSSUnparsedValue CSSVariableReferenceValue_fallback(const CSSVariableReferenceValue *self) {
    return em_Val_as(CSSUnparsedValue, em_Val_get(em_Val_as_val(self->inner), "fallback"));
}

