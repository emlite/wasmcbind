#include <webcbind/StyleSheetList.h>

#include <webcbind/CSSStyleSheet.h>

DEFINE_EMLITE_TYPE(StyleSheetList, em_Val);


CSSStyleSheet StyleSheetList_item(StyleSheetList* self , unsigned long index) {
    return em_Val_as(CSSStyleSheet, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


unsigned long StyleSheetList_length(const StyleSheetList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

