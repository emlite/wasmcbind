#include <webbind/CSSFunctionRule.h>

#include <webbind/FunctionParameter.h>

DEFINE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);


jb_String CSSFunctionRule_name(const CSSFunctionRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("name")));
}


jb_Array CSSFunctionRule_getParameters(CSSFunctionRule* self ) {
    return em_Val_as(jb_Array, em_Val_call(CSSGroupingRule_as_val(self->inner), "getParameters"));
}


jb_String CSSFunctionRule_returnType(const CSSFunctionRule *self) {
    return em_Val_as(jb_String, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("returnType")));
}

