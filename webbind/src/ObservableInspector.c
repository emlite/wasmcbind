#include <webbind/ObservableInspector.h>

DEFINE_EMLITE_TYPE(ObservableInspector, em_Val);


jb_Function ObservableInspector_next(const ObservableInspector *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("next")));
}


void ObservableInspector_set_next(ObservableInspector* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("next"), em_Val_from(value));
}


jb_Function ObservableInspector_error(const ObservableInspector *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void ObservableInspector_set_error(ObservableInspector* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_Function ObservableInspector_complete(const ObservableInspector *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("complete")));
}


void ObservableInspector_set_complete(ObservableInspector* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("complete"), em_Val_from(value));
}


jb_Function ObservableInspector_subscribe(const ObservableInspector *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subscribe")));
}


void ObservableInspector_set_subscribe(ObservableInspector* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subscribe"), em_Val_from(value));
}


jb_Function ObservableInspector_abort(const ObservableInspector *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("abort")));
}


void ObservableInspector_set_abort(ObservableInspector* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("abort"), em_Val_from(value));
}


ObservableInspector ObservableInspector_new() {
    em_Val obj = em_Val_object();
    return ObservableInspector_from_val(&obj);
}

