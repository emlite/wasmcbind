#include <webcbind/FileSystemWritableFileStream.h>

DEFINE_EMLITE_TYPE(FileSystemWritableFileStream, WritableStream);


jb_Promise FileSystemWritableFileStream_write(FileSystemWritableFileStream* self , jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStream_as_val(self->inner), "write", em_Val_from(data)));
}


jb_Promise FileSystemWritableFileStream_seek(FileSystemWritableFileStream* self , long long position) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStream_as_val(self->inner), "seek", em_Val_from(position)));
}


jb_Promise FileSystemWritableFileStream_truncate(FileSystemWritableFileStream* self , long long size) {
    return em_Val_as(jb_Promise, em_Val_call(WritableStream_as_val(self->inner), "truncate", em_Val_from(size)));
}

