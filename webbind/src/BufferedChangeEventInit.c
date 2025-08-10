#include <webbind/BufferedChangeEventInit.h>

#include <webbind/TimeRanges.h>

DEFINE_EMLITE_TYPE(BufferedChangeEventInit, EventInit);


TimeRanges BufferedChangeEventInit_addedRanges(const BufferedChangeEventInit *self) {
    return em_Val_as(TimeRanges, em_Val_get(EventInit_as_val(self->inner), em_Val_from("addedRanges")));
}


void BufferedChangeEventInit_set_addedRanges(BufferedChangeEventInit* self, TimeRanges * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("addedRanges"), em_Val_from(value));
}


TimeRanges BufferedChangeEventInit_removedRanges(const BufferedChangeEventInit *self) {
    return em_Val_as(TimeRanges, em_Val_get(EventInit_as_val(self->inner), em_Val_from("removedRanges")));
}


void BufferedChangeEventInit_set_removedRanges(BufferedChangeEventInit* self, TimeRanges * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("removedRanges"), em_Val_from(value));
}


BufferedChangeEventInit BufferedChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return BufferedChangeEventInit_from_val(&obj);
}

