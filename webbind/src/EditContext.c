#include <webbind/EditContext.h>
#include <webbind/DOMRect.h>
#include <webbind/HTMLElement.h>


DEFINE_EMLITE_TYPE(EditContext, EventTarget);


EditContext EditContext_new0() {
        em_Val vv = em_Val_new(em_Val_global("EditContext") );
        return EditContext_from_val(&vv);
      }


EditContext EditContext_new1(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("EditContext") , em_Val_from(options));
        return EditContext_from_val(&vv);
      }


jb_Undefined EditContext_updateText(EditContext* self , unsigned long rangeStart, unsigned long rangeEnd, jb_DOMString * text) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateText", em_Val_from(rangeStart), em_Val_from(rangeEnd), em_Val_from(text)));
}


jb_Undefined EditContext_updateSelection(EditContext* self , unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateSelection", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined EditContext_updateControlBounds(EditContext* self , DOMRect * controlBounds) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateControlBounds", em_Val_from(controlBounds)));
}


jb_Undefined EditContext_updateSelectionBounds(EditContext* self , DOMRect * selectionBounds) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateSelectionBounds", em_Val_from(selectionBounds)));
}


jb_Undefined EditContext_updateCharacterBounds(EditContext* self , unsigned long rangeStart, jb_Sequence * characterBounds) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateCharacterBounds", em_Val_from(rangeStart), em_Val_from(characterBounds)));
}


jb_Sequence EditContext_attachedElements(EditContext* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "attachedElements"));
}


jb_DOMString EditContext_text(const EditContext *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("text")));
}


unsigned long EditContext_selectionStart(const EditContext *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("selectionStart")));
}


unsigned long EditContext_selectionEnd(const EditContext *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("selectionEnd")));
}


unsigned long EditContext_characterBoundsRangeStart(const EditContext *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("characterBoundsRangeStart")));
}


jb_Sequence EditContext_characterBounds(EditContext* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "characterBounds"));
}


jb_Any EditContext_ontextupdate(const EditContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ontextupdate")));
}


void EditContext_set_ontextupdate(EditContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ontextupdate"), em_Val_from(value));
}


jb_Any EditContext_ontextformatupdate(const EditContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ontextformatupdate")));
}


void EditContext_set_ontextformatupdate(EditContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ontextformatupdate"), em_Val_from(value));
}


jb_Any EditContext_oncharacterboundsupdate(const EditContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncharacterboundsupdate")));
}


void EditContext_set_oncharacterboundsupdate(EditContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncharacterboundsupdate"), em_Val_from(value));
}


jb_Any EditContext_oncompositionstart(const EditContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncompositionstart")));
}


void EditContext_set_oncompositionstart(EditContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncompositionstart"), em_Val_from(value));
}


jb_Any EditContext_oncompositionend(const EditContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncompositionend")));
}


void EditContext_set_oncompositionend(EditContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncompositionend"), em_Val_from(value));
}

