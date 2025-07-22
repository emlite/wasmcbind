#include <webbind/URLSearchParams.h>


DEFINE_EMLITE_TYPE(URLSearchParams, em_Val);


URLSearchParams URLSearchParams_new0() {
        em_Val vv = em_Val_new(em_Val_global("URLSearchParams") );
        return URLSearchParams_from_val(&vv);
      }


URLSearchParams URLSearchParams_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("URLSearchParams") , em_Val_from(init));
        return URLSearchParams_from_val(&vv);
      }


unsigned long URLSearchParams_size(const URLSearchParams *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


jb_Undefined URLSearchParams_append(URLSearchParams* self , jb_USVString * name, jb_USVString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_delete_0(URLSearchParams* self , jb_USVString * name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}


jb_Undefined URLSearchParams_delete_1(URLSearchParams* self , jb_USVString * name, jb_USVString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name), em_Val_from(value)));
}


jb_USVString URLSearchParams_get(URLSearchParams* self , jb_USVString * name) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_Sequence URLSearchParams_getAll(URLSearchParams* self , jb_USVString * name) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(name)));
}


bool URLSearchParams_has0(URLSearchParams* self , jb_USVString * name) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name)));
}


bool URLSearchParams_has1(URLSearchParams* self , jb_USVString * name, jb_USVString * value) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_set(URLSearchParams* self , jb_USVString * name, jb_USVString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined URLSearchParams_sort(URLSearchParams* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "sort"));
}

