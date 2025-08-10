#include <webbind/TimeRanges.h>

DEFINE_EMLITE_TYPE(TimeRanges, em_Val);


unsigned long TimeRanges_length(const TimeRanges *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


double TimeRanges_start(TimeRanges* self , unsigned long index) {
    return em_Val_as(double, em_Val_call(em_Val_as_val(self->inner), "start", em_Val_from(index)));
}


double TimeRanges_end(TimeRanges* self , unsigned long index) {
    return em_Val_as(double, em_Val_call(em_Val_as_val(self->inner), "end", em_Val_from(index)));
}

