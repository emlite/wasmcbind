#include <webbind/ContentIndex.h>

#include <webbind/ContentDescription.h>

DEFINE_EMLITE_TYPE(ContentIndex, em_Val);


jb_Promise ContentIndex_add(ContentIndex* self , ContentDescription * description) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(description)));
}


jb_Promise ContentIndex_delete_(ContentIndex* self , jb_String * id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(id)));
}


jb_Promise ContentIndex_getAll(ContentIndex* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getAll"));
}

