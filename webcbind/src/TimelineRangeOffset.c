#include <webcbind/TimelineRangeOffset.h>

#include <webcbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(TimelineRangeOffset, em_Val);


jb_String TimelineRangeOffset_rangeName(const TimelineRangeOffset *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeName")));
}


void TimelineRangeOffset_set_rangeName(TimelineRangeOffset* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeName"), em_Val_from(value));
}


CSSNumericValue TimelineRangeOffset_offset(const TimelineRangeOffset *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void TimelineRangeOffset_set_offset(TimelineRangeOffset* self, CSSNumericValue * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


TimelineRangeOffset TimelineRangeOffset_new() {
    em_Val obj = em_Val_object();
    return TimelineRangeOffset_from_val(&obj);
}

