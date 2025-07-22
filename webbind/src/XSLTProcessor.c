#include <webbind/XSLTProcessor.h>
#include <webbind/Node.h>
#include <webbind/DocumentFragment.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(XSLTProcessor, em_Val);


XSLTProcessor XSLTProcessor_new() : em_Val(em_Val_global("XSLTProcessor").new_()) {
        return XSLTProcessor(em_Val_new(em_Val_global("XSLTProcessor", ));
      }


jb_Undefined XSLTProcessor_importStylesheet(XSLTProcessor* self , const Node* style) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "importStylesheet", em_Val_from(style)));
}


DocumentFragment XSLTProcessor_transformToFragment(XSLTProcessor* self , const Node* source, const Document* output) {
    return em_Val_as(DocumentFragment, em_Val_call(em_Val_as_val(self->inner), "transformToFragment", em_Val_from(source), em_Val_from(output)));
}


Document XSLTProcessor_transformToDocument(XSLTProcessor* self , const Node* source) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "transformToDocument", em_Val_from(source)));
}


jb_Undefined XSLTProcessor_setParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName, const jb_Any* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setParameter", em_Val_from(namespaceURI), em_Val_from(localName), em_Val_from(value)));
}


jb_Any XSLTProcessor_getParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getParameter", em_Val_from(namespaceURI), em_Val_from(localName)));
}


jb_Undefined XSLTProcessor_removeParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeParameter", em_Val_from(namespaceURI), em_Val_from(localName)));
}


jb_Undefined XSLTProcessor_clearParameters(XSLTProcessor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearParameters"));
}


jb_Undefined XSLTProcessor_reset(XSLTProcessor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}

