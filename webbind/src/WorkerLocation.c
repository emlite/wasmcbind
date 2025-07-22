#include <webbind/WorkerLocation.h>


DEFINE_EMLITE_TYPE(WorkerLocation, em_Val);


jb_USVString WorkerLocation_href(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "href"));
}


jb_USVString WorkerLocation_origin(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


jb_USVString WorkerLocation_protocol(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


jb_USVString WorkerLocation_host(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "host"));
}


jb_USVString WorkerLocation_hostname(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hostname"));
}


jb_USVString WorkerLocation_port(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "port"));
}


jb_USVString WorkerLocation_pathname(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "pathname"));
}


jb_USVString WorkerLocation_search(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "search"));
}


jb_USVString WorkerLocation_hash(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hash"));
}

