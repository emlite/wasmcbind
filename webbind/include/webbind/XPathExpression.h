#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XPathResult XPathResult;
typedef struct Node Node;


typedef struct {
  em_Val inner;
} XPathExpression;


DECLARE_EMLITE_TYPE(XPathExpression, em_Val);

XPathResult XPathExpression_evaluate(XPathExpression* self , const Node* contextNode);

XPathResult XPathExpression_evaluate(XPathExpression* self , const Node* contextNode, unsigned short type);

XPathResult XPathExpression_evaluate(XPathExpression* self , const Node* contextNode, unsigned short type, const XPathResult* result);
