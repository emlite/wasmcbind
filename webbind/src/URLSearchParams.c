#include <webbind/URLSearchParams.h>


DEFINE_EMLITE_TYPE(URLSearchParams, em_Val);


URLSearchParams URLSearchParams_new() : em_Val(em_Val_global("URLSearchParams").new_()) {
        return URLSearchParams(em_Val_new(em_Val_global("URLSearchParams", ));
      }


URLSearchParams URLSearchParams_new(const jb_Any* init) : em_Val(em_Val_global("URLSearchParams").new_(em_Val_from(init))) {
        return URLSearchParams(em_Val_new(em_Val_global("URLSearchParams", em_Val_from(init)));
      }


unsigned long URLSearchParams_size(const URLSearchParams *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "size"));
}


jb_Undefined URLSearchParams_append(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_delete_(URLSearchParams* self , const jb_USVString* name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}


jb_Undefined URLSearchParams_delete_(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name), em_Val_from(value)));
}


jb_USVString URLSearchParams_get(URLSearchParams* self , const jb_USVString* name) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_Sequence URLSearchParams_getAll(URLSearchParams* self , const jb_USVString* name) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(name)));
}


bool URLSearchParams_has(URLSearchParams* self , const jb_USVString* name) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name)));
}


bool URLSearchParams_has(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_set(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_sort(URLSearchParams* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "sort"));
}

