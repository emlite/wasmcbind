#include <webbind/DataCue.h>

DEFINE_EMLITE_TYPE(DataCue, TextTrackCue);


DataCue DataCue_new0(double startTime, double endTime, jb_Any * value) {
        em_Val vv = em_Val_new(em_Val_global("DataCue") , em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value));
        return DataCue_from_val(&vv);
      }


DataCue DataCue_new1(double startTime, double endTime, jb_Any * value, jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("DataCue") , em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value), em_Val_from(type));
        return DataCue_from_val(&vv);
      }


jb_Any DataCue_value(const DataCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("value")));
}


void DataCue_set_value(DataCue* self, jb_Any * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_String DataCue_type(const DataCue *self) {
    return em_Val_as(jb_String, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("type")));
}

