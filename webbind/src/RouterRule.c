#include <webbind/RouterRule.h>

DEFINE_EMLITE_TYPE(RouterRule, em_Val);


RouterCondition RouterRule_condition(const RouterRule *self) {
    return em_Val_as(RouterCondition, em_Val_get(em_Val_as_val(self->inner), em_Val_from("condition")));
}


void RouterRule_set_condition(RouterRule* self, RouterCondition * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("condition"), em_Val_from(value));
}


jb_Any RouterRule_source(const RouterRule *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void RouterRule_set_source(RouterRule* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


RouterRule RouterRule_new() {
    em_Val obj = em_Val_object();
    return RouterRule_from_val(&obj);
}

