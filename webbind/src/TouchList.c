#include <webbind/TouchList.h>
#include <webbind/Touch.h>


DEFINE_EMLITE_TYPE(TouchList, em_Val);


unsigned long TouchList_length(const TouchList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


Touch TouchList_item(TouchList* self , unsigned long index) {
    return em_Val_as(Touch, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}

