#include <webbind/ViewTransition.h>
#include <webbind/ViewTransitionTypeSet.h>


DEFINE_EMLITE_TYPE(ViewTransition, em_Val);


jb_Promise ViewTransition_updateCallbackDone(const ViewTransition *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "updateCallbackDone"));
}


jb_Promise ViewTransition_ready(const ViewTransition *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "ready"));
}


jb_Promise ViewTransition_finished(const ViewTransition *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "finished"));
}


jb_Undefined ViewTransition_skipTransition(ViewTransition* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "skipTransition"));
}


ViewTransitionTypeSet ViewTransition_types(const ViewTransition *self) {
    return em_Val_as(ViewTransitionTypeSet, em_Val_get(em_Val_as_val(self->inner), "types"));
}


void ViewTransition_set_types(ViewTransition* self, const ViewTransitionTypeSet* value) {
    em_Val_set(em_Val_as_val(self->inner), "types", value);
}

