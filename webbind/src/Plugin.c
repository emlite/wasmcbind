#include <webbind/Plugin.h>
#include <webbind/MimeType.h>


DEFINE_EMLITE_TYPE(Plugin, em_Val);


jb_DOMString Plugin_name(const Plugin *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_DOMString Plugin_description(const Plugin *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


jb_DOMString Plugin_filename(const Plugin *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filename")));
}


unsigned long Plugin_length(const Plugin *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


MimeType Plugin_item(Plugin* self , unsigned long index) {
    return em_Val_as(MimeType, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


MimeType Plugin_namedItem(Plugin* self , jb_DOMString * name) {
    return em_Val_as(MimeType, em_Val_call(em_Val_as_val(self->inner), "namedItem", em_Val_from(name)));
}

