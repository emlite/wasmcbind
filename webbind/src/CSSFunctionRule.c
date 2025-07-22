#include <webbind/CSSFunctionRule.h>


DEFINE_EMLITE_TYPE(FunctionParameter, em_Val);


jb_CSSOMString FunctionParameter_name(const FunctionParameter *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void FunctionParameter_set_name(FunctionParameter* self, jb_CSSOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_CSSOMString FunctionParameter_type(const FunctionParameter *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void FunctionParameter_set_type(FunctionParameter* self, jb_CSSOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_CSSOMString FunctionParameter_defaultValue(const FunctionParameter *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultValue")));
}


void FunctionParameter_set_defaultValue(FunctionParameter* self, jb_CSSOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);


jb_CSSOMString CSSFunctionRule_name(const CSSFunctionRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("name")));
}


jb_Sequence CSSFunctionRule_getParameters(CSSFunctionRule* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(CSSGroupingRule_as_val(self->inner), "getParameters"));
}


jb_CSSOMString CSSFunctionRule_returnType(const CSSFunctionRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSGroupingRule_as_val(self->inner), em_Val_from("returnType")));
}

