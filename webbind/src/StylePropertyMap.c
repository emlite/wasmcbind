#include <webbind/StylePropertyMap.h>


DEFINE_EMLITE_TYPE(StylePropertyMap, StylePropertyMapReadOnly);


jb_Undefined StylePropertyMap_set(StylePropertyMap* self , jb_String * property, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(StylePropertyMapReadOnly_as_val(self->inner), "set", em_Val_from(property), em_Val_from(values)));
}


jb_Undefined StylePropertyMap_append(StylePropertyMap* self , jb_String * property, jb_Any * values) {
    return em_Val_as(jb_Undefined, em_Val_call(StylePropertyMapReadOnly_as_val(self->inner), "append", em_Val_from(property), em_Val_from(values)));
}


jb_Undefined StylePropertyMap_delete_(StylePropertyMap* self , jb_String * property) {
    return em_Val_as(jb_Undefined, em_Val_call(StylePropertyMapReadOnly_as_val(self->inner), "delete", em_Val_from(property)));
}


jb_Undefined StylePropertyMap_clear(StylePropertyMap* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(StylePropertyMapReadOnly_as_val(self->inner), "clear"));
}

