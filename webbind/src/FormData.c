#include <webbind/FormData.h>
#include <webbind/Blob.h>
#include <webbind/HTMLElement.h>
#include <webbind/HTMLFormElement.h>


DEFINE_EMLITE_TYPE(FormData, em_Val);


FormData FormData_new0() {
        em_Val vv = em_Val_new(em_Val_global("FormData") );
        return FormData_from_val(&vv);
      }


FormData FormData_new1(HTMLFormElement * form) {
        em_Val vv = em_Val_new(em_Val_global("FormData") , em_Val_from(form));
        return FormData_from_val(&vv);
      }


FormData FormData_new2(HTMLFormElement * form, HTMLElement * submitter) {
        em_Val vv = em_Val_new(em_Val_global("FormData") , em_Val_from(form), em_Val_from(submitter));
        return FormData_from_val(&vv);
      }


jb_Undefined FormData_append0(FormData* self , jb_USVString * name, Blob * blobValue) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(blobValue)));
}


jb_Undefined FormData_append1(FormData* self , jb_USVString * name, Blob * blobValue, jb_USVString * filename) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(blobValue), em_Val_from(filename)));
}


jb_Undefined FormData_delete_(FormData* self , jb_USVString * name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}


jb_Any FormData_get(FormData* self , jb_USVString * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_Sequence FormData_getAll(FormData* self , jb_USVString * name) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getAll", em_Val_from(name)));
}


bool FormData_has(FormData* self , jb_USVString * name) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name)));
}


jb_Undefined FormData_set0(FormData* self , jb_USVString * name, Blob * blobValue) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(blobValue)));
}


jb_Undefined FormData_set1(FormData* self , jb_USVString * name, Blob * blobValue, jb_USVString * filename) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(blobValue), em_Val_from(filename)));
}

