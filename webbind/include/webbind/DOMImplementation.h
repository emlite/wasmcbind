#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DocumentType DocumentType;
typedef struct XMLDocument XMLDocument;
typedef struct Document Document;


typedef struct {
  em_Val inner;
} DOMImplementation;


DECLARE_EMLITE_TYPE(DOMImplementation, em_Val);

DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , const jb_DOMString* name, const jb_DOMString* publicId, const jb_DOMString* systemId);

XMLDocument DOMImplementation_createDocument(DOMImplementation* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName);

XMLDocument DOMImplementation_createDocument(DOMImplementation* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const DocumentType* doctype);

Document DOMImplementation_createHTMLDocument(DOMImplementation* self );

Document DOMImplementation_createHTMLDocument(DOMImplementation* self , const jb_DOMString* title);

bool DOMImplementation_hasFeature(DOMImplementation* self );
