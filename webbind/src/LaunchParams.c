#include <webbind/LaunchParams.h>
#include <webbind/FileSystemHandle.h>


DEFINE_EMLITE_TYPE(LaunchParams, em_Val);


jb_DOMString LaunchParams_targetURL(const LaunchParams *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetURL")));
}


jb_FrozenArray LaunchParams_files(const LaunchParams *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("files")));
}

