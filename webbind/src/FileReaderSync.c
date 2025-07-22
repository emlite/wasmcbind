#include <webbind/FileReaderSync.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(FileReaderSync, em_Val);


FileReaderSync FileReaderSync_new() : em_Val(em_Val_global("FileReaderSync").new_()) {
        return FileReaderSync(em_Val_new(em_Val_global("FileReaderSync", ));
      }


jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , const Blob* blob) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "readAsArrayBuffer", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsBinaryString(FileReaderSync* self , const Blob* blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsBinaryString", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsText(FileReaderSync* self , const Blob* blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsText(FileReaderSync* self , const Blob* blob, const jb_DOMString* encoding) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob), em_Val_from(encoding)));
}


jb_DOMString FileReaderSync_readAsDataURL(FileReaderSync* self , const Blob* blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsDataURL", em_Val_from(blob)));
}

