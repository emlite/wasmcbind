#include <webcbind/ProfilerFrame.h>

DEFINE_EMLITE_TYPE(ProfilerFrame, em_Val);


jb_String ProfilerFrame_name(const ProfilerFrame *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void ProfilerFrame_set_name(ProfilerFrame* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


long long ProfilerFrame_resourceId(const ProfilerFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resourceId")));
}


void ProfilerFrame_set_resourceId(ProfilerFrame* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resourceId"), em_Val_from(value));
}


long long ProfilerFrame_line(const ProfilerFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("line")));
}


void ProfilerFrame_set_line(ProfilerFrame* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("line"), em_Val_from(value));
}


long long ProfilerFrame_column(const ProfilerFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("column")));
}


void ProfilerFrame_set_column(ProfilerFrame* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("column"), em_Val_from(value));
}


ProfilerFrame ProfilerFrame_new() {
    em_Val obj = em_Val_object();
    return ProfilerFrame_from_val(&obj);
}

