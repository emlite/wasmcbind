#include <webbind/ProfilerStack.h>

DEFINE_EMLITE_TYPE(ProfilerStack, em_Val);


long long ProfilerStack_parentId(const ProfilerStack *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parentId")));
}


void ProfilerStack_set_parentId(ProfilerStack* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("parentId"), em_Val_from(value));
}


long long ProfilerStack_frameId(const ProfilerStack *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameId")));
}


void ProfilerStack_set_frameId(ProfilerStack* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameId"), em_Val_from(value));
}


ProfilerStack ProfilerStack_new() {
    em_Val obj = em_Val_object();
    return ProfilerStack_from_val(&obj);
}

