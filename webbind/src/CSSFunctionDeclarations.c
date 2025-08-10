#include <webbind/CSSFunctionDeclarations.h>

#include <webbind/CSSFunctionDescriptors.h>

DEFINE_EMLITE_TYPE(CSSFunctionDeclarations, CSSRule);


CSSFunctionDescriptors CSSFunctionDeclarations_style(const CSSFunctionDeclarations *self) {
    return em_Val_as(CSSFunctionDescriptors, em_Val_get(CSSRule_as_val(self->inner), em_Val_from("style")));
}

