#include <webbind/RouterCondition.h>

DEFINE_EMLITE_TYPE(RouterCondition, em_Val);


jb_Any RouterCondition_urlPattern(const RouterCondition *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("urlPattern")));
}


void RouterCondition_set_urlPattern(RouterCondition* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("urlPattern"), em_Val_from(value));
}


jb_String RouterCondition_requestMethod(const RouterCondition *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestMethod")));
}


void RouterCondition_set_requestMethod(RouterCondition* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestMethod"), em_Val_from(value));
}


RequestMode RouterCondition_requestMode(const RouterCondition *self) {
    return em_Val_as(RequestMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestMode")));
}


void RouterCondition_set_requestMode(RouterCondition* self, RequestMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestMode"), em_Val_from(value));
}


RequestDestination RouterCondition_requestDestination(const RouterCondition *self) {
    return em_Val_as(RequestDestination, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestDestination")));
}


void RouterCondition_set_requestDestination(RouterCondition* self, RequestDestination * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestDestination"), em_Val_from(value));
}


RunningStatus RouterCondition_runningStatus(const RouterCondition *self) {
    return em_Val_as(RunningStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("runningStatus")));
}


void RouterCondition_set_runningStatus(RouterCondition* self, RunningStatus * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("runningStatus"), em_Val_from(value));
}


jb_Array RouterCondition_or_(const RouterCondition *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("or")));
}


void RouterCondition_set_or_(RouterCondition* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("or"), em_Val_from(value));
}


RouterCondition RouterCondition_not_(const RouterCondition *self) {
    return em_Val_as(RouterCondition, em_Val_get(em_Val_as_val(self->inner), em_Val_from("not")));
}


void RouterCondition_set_not_(RouterCondition* self, RouterCondition * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("not"), em_Val_from(value));
}


RouterCondition RouterCondition_new() {
    em_Val obj = em_Val_object();
    return RouterCondition_from_val(&obj);
}

