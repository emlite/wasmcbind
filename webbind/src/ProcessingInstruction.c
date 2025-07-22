#include <webbind/ProcessingInstruction.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(ProcessingInstruction, CharacterData);


jb_DOMString ProcessingInstruction_target(const ProcessingInstruction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CharacterData_as_val(self->inner), em_Val_from("target")));
}


CSSStyleSheet ProcessingInstruction_sheet(const ProcessingInstruction *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(CharacterData_as_val(self->inner), em_Val_from("sheet")));
}

