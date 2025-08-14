#include <webbind/IDBGetAllOptions.h>

DEFINE_EMLITE_TYPE(IDBGetAllOptions, em_Val);


jb_Any IDBGetAllOptions_query(const IDBGetAllOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("query")));
}


void IDBGetAllOptions_set_query(IDBGetAllOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("query"), em_Val_from(value));
}


unsigned long IDBGetAllOptions_count(const IDBGetAllOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("count")));
}


void IDBGetAllOptions_set_count(IDBGetAllOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("count"), em_Val_from(value));
}


IDBCursorDirection IDBGetAllOptions_direction(const IDBGetAllOptions *self) {
    return em_Val_as(IDBCursorDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void IDBGetAllOptions_set_direction(IDBGetAllOptions* self, IDBCursorDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


IDBGetAllOptions IDBGetAllOptions_new() {
    em_Val obj = em_Val_object();
    return IDBGetAllOptions_from_val(&obj);
}

