#include <webbind/DOMImplementation.h>
#include <webbind/DocumentType.h>
#include <webbind/XMLDocument.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(DOMImplementation, em_Val);


DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , jb_String * name, jb_String * publicId, jb_String * systemId) {
    return em_Val_as(DocumentType, em_Val_call(em_Val_as_val(self->inner), "createDocumentType", em_Val_from(name), em_Val_from(publicId), em_Val_from(systemId)));
}


XMLDocument DOMImplementation_createDocument0(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName) {
    return em_Val_as(XMLDocument, em_Val_call(em_Val_as_val(self->inner), "createDocument", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


XMLDocument DOMImplementation_createDocument1(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName, DocumentType * doctype) {
    return em_Val_as(XMLDocument, em_Val_call(em_Val_as_val(self->inner), "createDocument", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(doctype)));
}


Document DOMImplementation_createHTMLDocument0(DOMImplementation* self ) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "createHTMLDocument"));
}


Document DOMImplementation_createHTMLDocument1(DOMImplementation* self , jb_String * title) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "createHTMLDocument", em_Val_from(title)));
}


bool DOMImplementation_hasFeature(DOMImplementation* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "hasFeature"));
}

