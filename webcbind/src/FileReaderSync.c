#include <webcbind/FileReaderSync.h>

#include <webcbind/Blob.h>

DEFINE_EMLITE_TYPE(FileReaderSync, em_Val);


FileReaderSync FileReaderSync_new() {
        em_Val vv = em_Val_new(em_Val_global("FileReaderSync") );
        return FileReaderSync_from_val(&vv);
      }


jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "readAsArrayBuffer", em_Val_from(blob)));
}


jb_String FileReaderSync_readAsBinaryString(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "readAsBinaryString", em_Val_from(blob)));
}


jb_String FileReaderSync_readAsText0(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob)));
}


jb_String FileReaderSync_readAsText1(FileReaderSync* self , Blob * blob, jb_String * encoding) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "readAsText", em_Val_from(blob), em_Val_from(encoding)));
}


jb_String FileReaderSync_readAsDataURL(FileReaderSync* self , Blob * blob) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "readAsDataURL", em_Val_from(blob)));
}

