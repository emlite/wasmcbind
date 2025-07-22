#include <webbind/HTMLDialogElement.h>


DEFINE_EMLITE_TYPE(HTMLDialogElement, HTMLElement);


HTMLDialogElement HTMLDialogElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDialogElement") );
        return HTMLDialogElement_from_val(&vv);
      }


bool HTMLDialogElement_open(const HTMLDialogElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("open")));
}


void HTMLDialogElement_set_open(HTMLDialogElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("open"), em_Val_from(value));
}


jb_DOMString HTMLDialogElement_returnValue(const HTMLDialogElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("returnValue")));
}


void HTMLDialogElement_set_returnValue(HTMLDialogElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("returnValue"), em_Val_from(value));
}


jb_DOMString HTMLDialogElement_closedBy(const HTMLDialogElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("closedBy")));
}


void HTMLDialogElement_set_closedBy(HTMLDialogElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("closedBy"), em_Val_from(value));
}


jb_Undefined HTMLDialogElement_show(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "show"));
}


jb_Undefined HTMLDialogElement_showModal(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showModal"));
}


jb_Undefined HTMLDialogElement_close0(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "close"));
}


jb_Undefined HTMLDialogElement_close1(HTMLDialogElement* self , jb_DOMString * returnValue) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "close", em_Val_from(returnValue)));
}


jb_Undefined HTMLDialogElement_requestClose0(HTMLDialogElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestClose"));
}


jb_Undefined HTMLDialogElement_requestClose1(HTMLDialogElement* self , jb_DOMString * returnValue) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestClose", em_Val_from(returnValue)));
}

