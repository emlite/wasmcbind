#include <webbind/CSSRuleList.h>
#include <webbind/CSSRule.h>


DEFINE_EMLITE_TYPE(CSSRuleList, em_Val);


CSSRule CSSRuleList_item(CSSRuleList* self , unsigned long index) {
    return em_Val_as(CSSRule, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


unsigned long CSSRuleList_length(const CSSRuleList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}

