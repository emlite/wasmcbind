#include <webbind/WorkerLocation.h>


DEFINE_EMLITE_TYPE(WorkerLocation, em_Val);


jb_USVString WorkerLocation_href(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("href")));
}


jb_USVString WorkerLocation_origin(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


jb_USVString WorkerLocation_protocol(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


jb_USVString WorkerLocation_host(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("host")));
}


jb_USVString WorkerLocation_hostname(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


jb_USVString WorkerLocation_port(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


jb_USVString WorkerLocation_pathname(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


jb_USVString WorkerLocation_search(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


jb_USVString WorkerLocation_hash(const WorkerLocation *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}

