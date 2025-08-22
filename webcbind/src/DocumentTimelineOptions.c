#include <webcbind/DocumentTimelineOptions.h>

DEFINE_EMLITE_TYPE(DocumentTimelineOptions, em_Val);


jb_Any DocumentTimelineOptions_originTime(const DocumentTimelineOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("originTime")));
}


void DocumentTimelineOptions_set_originTime(DocumentTimelineOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("originTime"), em_Val_from(value));
}


DocumentTimelineOptions DocumentTimelineOptions_new() {
    em_Val obj = em_Val_object();
    return DocumentTimelineOptions_from_val(&obj);
}

