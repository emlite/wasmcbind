#include <webbind/NamedFlow.h>
#include <webbind/Element.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(NamedFlow, EventTarget);


jb_CSSOMString NamedFlow_name(const NamedFlow *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


bool NamedFlow_overset(const NamedFlow *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "overset"));
}


jb_Sequence NamedFlow_getRegions(NamedFlow* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getRegions"));
}


short NamedFlow_firstEmptyRegionIndex(const NamedFlow *self) {
    return em_Val_as(short, em_Val_get(EventTarget_as_val(self->inner), "firstEmptyRegionIndex"));
}


jb_Sequence NamedFlow_getContent(NamedFlow* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getContent"));
}


jb_Sequence NamedFlow_getRegionsByContent(NamedFlow* self , const Node* node) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getRegionsByContent", em_Val_from(node)));
}

