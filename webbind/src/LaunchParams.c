#include <webbind/LaunchParams.h>
#include <webbind/FileSystemHandle.h>


DEFINE_EMLITE_TYPE(LaunchParams, em_Val);


jb_String LaunchParams_targetURL(const LaunchParams *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetURL")));
}


jb_Array LaunchParams_files(const LaunchParams *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("files")));
}

