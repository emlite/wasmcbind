#include <webbind/FileReaderSync.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(FileReaderSync, em_Val);


FileReaderSync FileReaderSync_new() {
        em_Val vv = em_Val_new(em_Val_global("FileReaderSync") );
        return FileReaderSync_from_val(&vv);
      }


jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "readAsArrayBuffer", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsBinaryString(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsBinaryString", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsText0(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob)));
}


jb_DOMString FileReaderSync_readAsText1(FileReaderSync* self , Blob * blob, jb_DOMString * encoding) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob), em_Val_from(encoding)));
}


jb_DOMString FileReaderSync_readAsDataURL(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "readAsDataURL", em_Val_from(blob)));
}

