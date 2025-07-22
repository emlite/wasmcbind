#include <webbind/FileReader.h>
#include <webbind/Blob.h>
#include <webbind/DOMException.h>


DEFINE_EMLITE_TYPE(FileReader, EventTarget);


FileReader FileReader_new() : EventTarget(em_Val_global("FileReader").new_()) {
        return FileReader(em_Val_new(em_Val_global("FileReader", ));
      }


jb_Undefined FileReader_readAsArrayBuffer(FileReader* self , const Blob* blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsArrayBuffer", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsBinaryString(FileReader* self , const Blob* blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsBinaryString", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsText(FileReader* self , const Blob* blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsText", em_Val_from(blob)));
}


jb_Undefined FileReader_readAsText(FileReader* self , const Blob* blob, const jb_DOMString* encoding) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsText", em_Val_from(blob), em_Val_from(encoding)));
}


jb_Undefined FileReader_readAsDataURL(FileReader* self , const Blob* blob) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "readAsDataURL", em_Val_from(blob)));
}


jb_Undefined FileReader_abort(FileReader* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


unsigned short FileReader_readyState(const FileReader *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


jb_Any FileReader_result(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "result"));
}


DOMException FileReader_error(const FileReader *self) {
    return em_Val_as(DOMException, em_Val_get(EventTarget_as_val(self->inner), "error"));
}


jb_Any FileReader_onloadstart(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadstart"));
}


void FileReader_set_onloadstart(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadstart", value);
}


jb_Any FileReader_onprogress(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onprogress"));
}


void FileReader_set_onprogress(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onprogress", value);
}


jb_Any FileReader_onload(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onload"));
}


void FileReader_set_onload(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onload", value);
}


jb_Any FileReader_onabort(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onabort"));
}


void FileReader_set_onabort(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onabort", value);
}


jb_Any FileReader_onerror(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void FileReader_set_onerror(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any FileReader_onloadend(const FileReader *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onloadend"));
}


void FileReader_set_onloadend(FileReader* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onloadend", value);
}

