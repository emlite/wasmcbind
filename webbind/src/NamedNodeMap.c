#include <webbind/NamedNodeMap.h>

#include <webbind/Attr.h>

DEFINE_EMLITE_TYPE(NamedNodeMap, em_Val);


unsigned long NamedNodeMap_length(const NamedNodeMap *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


Attr NamedNodeMap_item(NamedNodeMap* self , unsigned long index) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


Attr NamedNodeMap_getNamedItem(NamedNodeMap* self , jb_String * qualifiedName) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "getNamedItem", em_Val_from(qualifiedName)));
}


Attr NamedNodeMap_getNamedItemNS(NamedNodeMap* self , jb_String * namespace_, jb_String * localName) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "getNamedItemNS", em_Val_from(namespace_), em_Val_from(localName)));
}


Attr NamedNodeMap_setNamedItem(NamedNodeMap* self , Attr * attr) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "setNamedItem", em_Val_from(attr)));
}


Attr NamedNodeMap_setNamedItemNS(NamedNodeMap* self , Attr * attr) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "setNamedItemNS", em_Val_from(attr)));
}


Attr NamedNodeMap_removeNamedItem(NamedNodeMap* self , jb_String * qualifiedName) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "removeNamedItem", em_Val_from(qualifiedName)));
}


Attr NamedNodeMap_removeNamedItemNS(NamedNodeMap* self , jb_String * namespace_, jb_String * localName) {
    return em_Val_as(Attr, em_Val_call(em_Val_as_val(self->inner), "removeNamedItemNS", em_Val_from(namespace_), em_Val_from(localName)));
}

