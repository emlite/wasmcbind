#include <webbind/HTMLDialogElement.h>


DEFINE_EMLITE_TYPE(HTMLDialogElement, HTMLElement);


HTMLDialogElement HTMLDialogElement_new() : HTMLElement(em_Val_global("HTMLDialogElement").new_()) {
        return HTMLDialogElement(em_Val_new(em_Val_global("HTMLDialogElement", ));
      }


bool HTMLDialogElement_open(const HTMLDialogElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "open"));
}


void HTMLDialogElement_set_open(HTMLDialogElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "open", value);
}


jb_DOMString HTMLDialogElement_returnValue(const HTMLDialogElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "returnValue"));
}


void HTMLDialogElement_set_returnValue(HTMLDialogElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "returnValue", value);
}


jb_DOMString HTMLDialogElement_closedBy(const HTMLDialogElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "closedBy"));
}


void HTMLDialogElement_set_closedBy(HTMLDialogElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "closedBy", value);
}


jb_Undefined HTMLDialogElement_show(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "show"));
}


jb_Undefined HTMLDialogElement_showModal(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showModal"));
}


jb_Undefined HTMLDialogElement_close(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "close"));
}


jb_Undefined HTMLDialogElement_close(HTMLDialogElement* self , const jb_DOMString* returnValue) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "close", em_Val_from(returnValue)));
}


jb_Undefined HTMLDialogElement_requestClose(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestClose"));
}


jb_Undefined HTMLDialogElement_requestClose(HTMLDialogElement* self , const jb_DOMString* returnValue) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestClose", em_Val_from(returnValue)));
}

