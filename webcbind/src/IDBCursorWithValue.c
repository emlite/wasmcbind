#include <webcbind/IDBCursorWithValue.h>

DEFINE_EMLITE_TYPE(IDBCursorWithValue, IDBCursor);


jb_Any IDBCursorWithValue_value(const IDBCursorWithValue *self) {
    return em_Val_as(jb_Any, em_Val_get(IDBCursor_as_val(self->inner), em_Val_from("value")));
}

