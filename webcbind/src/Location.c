#include <webcbind/Location.h>

#include <webcbind/DOMStringList.h>

DEFINE_EMLITE_TYPE(Location, em_Val);


jb_String Location_href(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("href")));
}


void Location_set_href(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_String Location_origin(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


jb_String Location_protocol(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void Location_set_protocol(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String Location_host(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("host")));
}


void Location_set_host(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("host"), em_Val_from(value));
}


jb_String Location_hostname(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


void Location_set_hostname(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_String Location_port(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


void Location_set_port(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String Location_pathname(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


void Location_set_pathname(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_String Location_search(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


void Location_set_search(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_String Location_hash(const Location *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


void Location_set_hash(Location* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


jb_Undefined Location_assign(Location* self , jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "assign", em_Val_from(url)));
}


jb_Undefined Location_replace(Location* self , jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(url)));
}


jb_Undefined Location_reload(Location* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reload"));
}


DOMStringList Location_ancestorOrigins(const Location *self) {
    return em_Val_as(DOMStringList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ancestorOrigins")));
}

