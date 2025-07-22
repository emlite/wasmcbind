#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DocumentType DocumentType;
typedef struct XMLDocument XMLDocument;
typedef struct Document Document;


DECLARE_EMLITE_TYPE(DOMImplementation, em_Val);

DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , jb_DOMString * name, jb_DOMString * publicId, jb_DOMString * systemId);

XMLDocument DOMImplementation_createDocument0(DOMImplementation* self , jb_DOMString * namespace_, jb_DOMString * qualifiedName);

XMLDocument DOMImplementation_createDocument1(DOMImplementation* self , jb_DOMString * namespace_, jb_DOMString * qualifiedName, DocumentType * doctype);

Document DOMImplementation_createHTMLDocument0(DOMImplementation* self );

Document DOMImplementation_createHTMLDocument1(DOMImplementation* self , jb_DOMString * title);

bool DOMImplementation_hasFeature(DOMImplementation* self );
