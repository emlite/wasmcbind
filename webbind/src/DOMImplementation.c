#include <webbind/DOMImplementation.h>
#include <webbind/DocumentType.h>
#include <webbind/XMLDocument.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(DOMImplementation, em_Val);


DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , const jb_DOMString* name, const jb_DOMString* publicId, const jb_DOMString* systemId) {
    return em_Val_as(DocumentType, em_Val_call(em_Val_as_val(self->inner), "createDocumentType", em_Val_from(name), em_Val_from(publicId), em_Val_from(systemId)));
}


XMLDocument DOMImplementation_createDocument(DOMImplementation* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName) {
    return em_Val_as(XMLDocument, em_Val_call(em_Val_as_val(self->inner), "createDocument", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


XMLDocument DOMImplementation_createDocument(DOMImplementation* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const DocumentType* doctype) {
    return em_Val_as(XMLDocument, em_Val_call(em_Val_as_val(self->inner), "createDocument", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(doctype)));
}


Document DOMImplementation_createHTMLDocument(DOMImplementation* self ) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "createHTMLDocument"));
}


Document DOMImplementation_createHTMLDocument(DOMImplementation* self , const jb_DOMString* title) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "createHTMLDocument", em_Val_from(title)));
}


bool DOMImplementation_hasFeature(DOMImplementation* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "hasFeature"));
}

