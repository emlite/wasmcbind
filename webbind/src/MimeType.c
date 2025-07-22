#include <webbind/MimeType.h>
#include <webbind/Plugin.h>


DEFINE_EMLITE_TYPE(MimeType, em_Val);


jb_DOMString MimeType_type(const MimeType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_DOMString MimeType_description(const MimeType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


jb_DOMString MimeType_suffixes(const MimeType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suffixes")));
}


Plugin MimeType_enabledPlugin(const MimeType *self) {
    return em_Val_as(Plugin, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabledPlugin")));
}

