#include <webcbind/XSLTProcessor.h>

#include <webcbind/Node.h>
#include <webcbind/DocumentFragment.h>
#include <webcbind/Document.h>

DEFINE_EMLITE_TYPE(XSLTProcessor, em_Val);


XSLTProcessor XSLTProcessor_new() {
        em_Val vv = em_Val_new(em_Val_global("XSLTProcessor") );
        return XSLTProcessor_from_val(&vv);
      }


jb_Undefined XSLTProcessor_importStylesheet(XSLTProcessor* self , Node * style) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "importStylesheet", em_Val_from(style)));
}


DocumentFragment XSLTProcessor_transformToFragment(XSLTProcessor* self , Node * source, Document * output) {
    return em_Val_as(DocumentFragment, em_Val_call(em_Val_as_val(self->inner), "transformToFragment", em_Val_from(source), em_Val_from(output)));
}


Document XSLTProcessor_transformToDocument(XSLTProcessor* self , Node * source) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "transformToDocument", em_Val_from(source)));
}


jb_Undefined XSLTProcessor_setParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName, jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setParameter", em_Val_from(namespaceURI), em_Val_from(localName), em_Val_from(value)));
}


jb_Any XSLTProcessor_getParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getParameter", em_Val_from(namespaceURI), em_Val_from(localName)));
}


jb_Undefined XSLTProcessor_removeParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeParameter", em_Val_from(namespaceURI), em_Val_from(localName)));
}


jb_Undefined XSLTProcessor_clearParameters(XSLTProcessor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearParameters"));
}


jb_Undefined XSLTProcessor_reset(XSLTProcessor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}

