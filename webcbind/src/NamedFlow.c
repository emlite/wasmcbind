#include <webcbind/NamedFlow.h>

#include <webcbind/Element.h>
#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(NamedFlow, EventTarget);


jb_String NamedFlow_name(const NamedFlow *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


bool NamedFlow_overset(const NamedFlow *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("overset")));
}


jb_Array NamedFlow_getRegions(NamedFlow* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getRegions"));
}


short NamedFlow_firstEmptyRegionIndex(const NamedFlow *self) {
    return em_Val_as(short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("firstEmptyRegionIndex")));
}


jb_Array NamedFlow_getContent(NamedFlow* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getContent"));
}


jb_Array NamedFlow_getRegionsByContent(NamedFlow* self , Node * node) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getRegionsByContent", em_Val_from(node)));
}

