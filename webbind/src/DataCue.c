#include <webbind/DataCue.h>


DEFINE_EMLITE_TYPE(DataCue, TextTrackCue);


DataCue DataCue_new(double startTime, double endTime, const jb_Any* value) : TextTrackCue(em_Val_global("DataCue").new_(em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value))) {
        return DataCue(em_Val_new(em_Val_global("DataCue", em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value)));
      }


DataCue DataCue_new(double startTime, double endTime, const jb_Any* value, const jb_DOMString* type) : TextTrackCue(em_Val_global("DataCue").new_(em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value), em_Val_from(type))) {
        return DataCue(em_Val_new(em_Val_global("DataCue", em_Val_from(startTime), em_Val_from(endTime), em_Val_from(value), em_Val_from(type)));
      }


jb_Any DataCue_value(const DataCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), "value"));
}


void DataCue_set_value(DataCue* self, const jb_Any* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "value", value);
}


jb_DOMString DataCue_type(const DataCue *self) {
    return em_Val_as(jb_DOMString, em_Val_get(TextTrackCue_as_val(self->inner), "type"));
}

