#include <webbind/XPathResult.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(XPathResult, em_Val);


unsigned short XPathResult_resultType(const XPathResult *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resultType")));
}


double XPathResult_numberValue(const XPathResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberValue")));
}


jb_DOMString XPathResult_stringValue(const XPathResult *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stringValue")));
}


bool XPathResult_booleanValue(const XPathResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("booleanValue")));
}


Node XPathResult_singleNodeValue(const XPathResult *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("singleNodeValue")));
}


bool XPathResult_invalidIteratorState(const XPathResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("invalidIteratorState")));
}


unsigned long XPathResult_snapshotLength(const XPathResult *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("snapshotLength")));
}


Node XPathResult_iterateNext(XPathResult* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "iterateNext"));
}


Node XPathResult_snapshotItem(XPathResult* self , unsigned long index) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "snapshotItem", em_Val_from(index)));
}

