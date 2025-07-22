#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;
typedef struct DocumentFragment DocumentFragment;
typedef struct Document Document;


typedef struct {
  em_Val inner;
} XSLTProcessor;


DECLARE_EMLITE_TYPE(XSLTProcessor, em_Val);

XSLTProcessor XSLTProcessor_new();

jb_Undefined XSLTProcessor_importStylesheet(XSLTProcessor* self , const Node* style);

DocumentFragment XSLTProcessor_transformToFragment(XSLTProcessor* self , const Node* source, const Document* output);

Document XSLTProcessor_transformToDocument(XSLTProcessor* self , const Node* source);

jb_Undefined XSLTProcessor_setParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName, const jb_Any* value);

jb_Any XSLTProcessor_getParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName);

jb_Undefined XSLTProcessor_removeParameter(XSLTProcessor* self , const jb_DOMString* namespaceURI, const jb_DOMString* localName);

jb_Undefined XSLTProcessor_clearParameters(XSLTProcessor* self );

jb_Undefined XSLTProcessor_reset(XSLTProcessor* self );
