#include <webbind/Range.h>
#include <webbind/Node.h>
#include <webbind/DocumentFragment.h>
#include <webbind/DOMRectList.h>
#include <webbind/DOMRect.h>


DEFINE_EMLITE_TYPE(Range, AbstractRange);


Range Range_new() : AbstractRange(em_Val_global("Range").new_()) {
        return Range(em_Val_new(em_Val_global("Range", ));
      }


Node Range_commonAncestorContainer(const Range *self) {
    return em_Val_as(Node, em_Val_get(AbstractRange_as_val(self->inner), "commonAncestorContainer"));
}


jb_Undefined Range_setStart(Range* self , const Node* node, unsigned long offset) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setStart", em_Val_from(node), em_Val_from(offset)));
}


jb_Undefined Range_setEnd(Range* self , const Node* node, unsigned long offset) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setEnd", em_Val_from(node), em_Val_from(offset)));
}


jb_Undefined Range_setStartBefore(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setStartBefore", em_Val_from(node)));
}


jb_Undefined Range_setStartAfter(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setStartAfter", em_Val_from(node)));
}


jb_Undefined Range_setEndBefore(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setEndBefore", em_Val_from(node)));
}


jb_Undefined Range_setEndAfter(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "setEndAfter", em_Val_from(node)));
}


jb_Undefined Range_collapse(Range* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "collapse"));
}


jb_Undefined Range_collapse(Range* self , bool toStart) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "collapse", em_Val_from(toStart)));
}


jb_Undefined Range_selectNode(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "selectNode", em_Val_from(node)));
}


jb_Undefined Range_selectNodeContents(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "selectNodeContents", em_Val_from(node)));
}


short Range_compareBoundaryPoints(Range* self , unsigned short how, const Range* sourceRange) {
    return em_Val_as(short, em_Val_call(AbstractRange_as_val(self->inner), "compareBoundaryPoints", em_Val_from(how), em_Val_from(sourceRange)));
}


jb_Undefined Range_deleteContents(Range* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "deleteContents"));
}


DocumentFragment Range_extractContents(Range* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(AbstractRange_as_val(self->inner), "extractContents"));
}


DocumentFragment Range_cloneContents(Range* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(AbstractRange_as_val(self->inner), "cloneContents"));
}


jb_Undefined Range_insertNode(Range* self , const Node* node) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "insertNode", em_Val_from(node)));
}


jb_Undefined Range_surroundContents(Range* self , const Node* newParent) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "surroundContents", em_Val_from(newParent)));
}


Range Range_cloneRange(Range* self ) {
    return em_Val_as(Range, em_Val_call(AbstractRange_as_val(self->inner), "cloneRange"));
}


jb_Undefined Range_detach(Range* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AbstractRange_as_val(self->inner), "detach"));
}


bool Range_isPointInRange(Range* self , const Node* node, unsigned long offset) {
    return em_Val_as(bool, em_Val_call(AbstractRange_as_val(self->inner), "isPointInRange", em_Val_from(node), em_Val_from(offset)));
}


short Range_comparePoint(Range* self , const Node* node, unsigned long offset) {
    return em_Val_as(short, em_Val_call(AbstractRange_as_val(self->inner), "comparePoint", em_Val_from(node), em_Val_from(offset)));
}


bool Range_intersectsNode(Range* self , const Node* node) {
    return em_Val_as(bool, em_Val_call(AbstractRange_as_val(self->inner), "intersectsNode", em_Val_from(node)));
}


DOMRectList Range_getClientRects(Range* self ) {
    return em_Val_as(DOMRectList, em_Val_call(AbstractRange_as_val(self->inner), "getClientRects"));
}


DOMRect Range_getBoundingClientRect(Range* self ) {
    return em_Val_as(DOMRect, em_Val_call(AbstractRange_as_val(self->inner), "getBoundingClientRect"));
}


DocumentFragment Range_createContextualFragment(Range* self , const jb_Any* string) {
    return em_Val_as(DocumentFragment, em_Val_call(AbstractRange_as_val(self->inner), "createContextualFragment", em_Val_from(string)));
}

