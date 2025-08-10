#include <webbind/IDBCursor.h>

#include <webbind/IDBRequest.h>

DEFINE_EMLITE_TYPE(IDBCursor, em_Val);


jb_Any IDBCursor_source(const IDBCursor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


IDBCursorDirection IDBCursor_direction(const IDBCursor *self) {
    return em_Val_as(IDBCursorDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


jb_Any IDBCursor_key(const IDBCursor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("key")));
}


jb_Any IDBCursor_primaryKey(const IDBCursor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaryKey")));
}


IDBRequest IDBCursor_request(const IDBCursor *self) {
    return em_Val_as(IDBRequest, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


jb_Undefined IDBCursor_advance(IDBCursor* self , unsigned long count) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "advance", em_Val_from(count)));
}


jb_Undefined IDBCursor_continue_0(IDBCursor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "continue"));
}


jb_Undefined IDBCursor_continue_1(IDBCursor* self , jb_Any * key) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "continue", em_Val_from(key)));
}


jb_Undefined IDBCursor_continuePrimaryKey(IDBCursor* self , jb_Any * key, jb_Any * primaryKey) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "continuePrimaryKey", em_Val_from(key), em_Val_from(primaryKey)));
}


IDBRequest IDBCursor_update(IDBCursor* self , jb_Any * value) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "update", em_Val_from(value)));
}


IDBRequest IDBCursor_delete_(IDBCursor* self ) {
    return em_Val_as(IDBRequest, em_Val_call(em_Val_as_val(self->inner), "delete"));
}

