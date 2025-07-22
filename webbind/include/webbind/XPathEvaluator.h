#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XPathExpression XPathExpression;
typedef struct Node Node;
typedef struct XPathResult XPathResult;


typedef struct {
  em_Val inner;
} XPathEvaluator;


DECLARE_EMLITE_TYPE(XPathEvaluator, em_Val);

XPathEvaluator XPathEvaluator_new();

XPathExpression XPathEvaluator_createExpression(XPathEvaluator* self , const jb_DOMString* expression);

XPathExpression XPathEvaluator_createExpression(XPathEvaluator* self , const jb_DOMString* expression, const jb_Function* resolver);

Node XPathEvaluator_createNSResolver(XPathEvaluator* self , const Node* nodeResolver);

XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode);

XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver);

XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type);

XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type, const XPathResult* result);
