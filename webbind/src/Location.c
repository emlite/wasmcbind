#include <webbind/Location.h>
#include <webbind/DOMStringList.h>


DEFINE_EMLITE_TYPE(Location, em_Val);


jb_USVString Location_href(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "href"));
}


void Location_set_href(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "href", value);
}


jb_USVString Location_origin(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


jb_USVString Location_protocol(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


void Location_set_protocol(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "protocol", value);
}


jb_USVString Location_host(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "host"));
}


void Location_set_host(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "host", value);
}


jb_USVString Location_hostname(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hostname"));
}


void Location_set_hostname(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "hostname", value);
}


jb_USVString Location_port(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "port"));
}


void Location_set_port(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "port", value);
}


jb_USVString Location_pathname(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "pathname"));
}


void Location_set_pathname(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "pathname", value);
}


jb_USVString Location_search(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "search"));
}


void Location_set_search(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "search", value);
}


jb_USVString Location_hash(const Location *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hash"));
}


void Location_set_hash(Location* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "hash", value);
}


jb_Undefined Location_assign(Location* self , const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "assign", em_Val_from(url)));
}


jb_Undefined Location_replace(Location* self , const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(url)));
}


jb_Undefined Location_reload(Location* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reload"));
}


DOMStringList Location_ancestorOrigins(const Location *self) {
    return em_Val_as(DOMStringList, em_Val_get(em_Val_as_val(self->inner), "ancestorOrigins"));
}

