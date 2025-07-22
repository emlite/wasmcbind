#include <webbind/FileReader.h>
#include <webbind/Blob.h>
#include <webbind/DOMException.h>


DEFINE_EMLITE_TYPE(FileReader, EventTarget);


FileReader FileReader_new() {
        em_Val vv = em_Val_new(em_Val_global("FileReader") );
        return FileReader_from_val(&vv);
      }


jb_Undefined FileReader_readAsArrayBuffer(FileReader* self , Blob * blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsArrayBuffer", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsBinaryString(FileReader* self , Blob * blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsBinaryString", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsText0(FileReader* self , Blob * blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsText", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsText1(FileReader* self , Blob * blob, jb_DOMString * encoding) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsText", em_Val_from(blob), em_Val_from(encoding)));
}


jb_Undefined FileReader_readAsDataURL(FileReader* self , Blob * blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsDataURL", em_Val_from(blob)));
}


jb_Undefined FileReader_abort(FileReader* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


unsigned short FileReader_readyState(const FileReader *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


jb_Any FileReader_result(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("result")));
}


DOMException FileReader_error(const FileReader *self) {
    return em_Val_as(DOMException, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("error")));
}


jb_Any FileReader_onloadstart(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadstart")));
}


void FileReader_set_onloadstart(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadstart"), em_Val_from(value));
}


jb_Any FileReader_onprogress(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onprogress")));
}


void FileReader_set_onprogress(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onprogress"), em_Val_from(value));
}


jb_Any FileReader_onload(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onload")));
}


void FileReader_set_onload(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onload"), em_Val_from(value));
}


jb_Any FileReader_onabort(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onabort")));
}


void FileReader_set_onabort(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onabort"), em_Val_from(value));
}


jb_Any FileReader_onerror(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void FileReader_set_onerror(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any FileReader_onloadend(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onloadend")));
}


void FileReader_set_onloadend(FileReader* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onloadend"), em_Val_from(value));
}

