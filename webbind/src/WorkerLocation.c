#include <webbind/WorkerLocation.h>


DEFINE_EMLITE_TYPE(WorkerLocation, em_Val);


jb_String WorkerLocation_href(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("href")));
}


jb_String WorkerLocation_origin(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


jb_String WorkerLocation_protocol(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


jb_String WorkerLocation_host(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("host")));
}


jb_String WorkerLocation_hostname(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


jb_String WorkerLocation_port(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


jb_String WorkerLocation_pathname(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


jb_String WorkerLocation_search(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


jb_String WorkerLocation_hash(const WorkerLocation *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}

