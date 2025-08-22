#include <webcbind/CSSVariableReferenceValue.h>

#include <webcbind/CSSUnparsedValue.h>

DEFINE_EMLITE_TYPE(CSSVariableReferenceValue, em_Val);


CSSVariableReferenceValue CSSVariableReferenceValue_new0(jb_String * variable) {
        em_Val vv = em_Val_new(em_Val_global("CSSVariableReferenceValue") , em_Val_from(variable));
        return CSSVariableReferenceValue_from_val(&vv);
      }


CSSVariableReferenceValue CSSVariableReferenceValue_new1(jb_String * variable, CSSUnparsedValue * fallback) {
        em_Val vv = em_Val_new(em_Val_global("CSSVariableReferenceValue") , em_Val_from(variable), em_Val_from(fallback));
        return CSSVariableReferenceValue_from_val(&vv);
      }


jb_String CSSVariableReferenceValue_variable(const CSSVariableReferenceValue *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("variable")));
}


void CSSVariableReferenceValue_set_variable(CSSVariableReferenceValue* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("variable"), em_Val_from(value));
}


CSSUnparsedValue CSSVariableReferenceValue_fallback(const CSSVariableReferenceValue *self) {
    return em_Val_as(CSSUnparsedValue, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fallback")));
}

