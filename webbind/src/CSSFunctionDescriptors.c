#include <webbind/CSSFunctionDescriptors.h>


DEFINE_EMLITE_TYPE(CSSFunctionDescriptors, CSSStyleDeclaration);


jb_CSSOMString CSSFunctionDescriptors_result(const CSSFunctionDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("result")));
}


void CSSFunctionDescriptors_set_result(CSSFunctionDescriptors* self, jb_CSSOMString * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("result"), em_Val_from(value));
}

