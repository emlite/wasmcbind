#include <webbind/PluginArray.h>
#include <webbind/Plugin.h>


DEFINE_EMLITE_TYPE(PluginArray, em_Val);


jb_Undefined PluginArray_refresh(PluginArray* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "refresh"));
}


unsigned long PluginArray_length(const PluginArray *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


Plugin PluginArray_item(PluginArray* self , unsigned long index) {
    return em_Val_as(Plugin, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


Plugin PluginArray_namedItem(PluginArray* self , const jb_DOMString* name) {
    return em_Val_as(Plugin, em_Val_call(em_Val_as_val(self->inner), "namedItem", em_Val_from(name)));
}

