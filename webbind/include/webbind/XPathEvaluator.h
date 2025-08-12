#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XPathExpression XPathExpression;
typedef struct Node Node;
typedef struct XPathResult XPathResult;


/**
 * @brief Interface XPathEvaluator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator)
 */
DECLARE_EMLITE_TYPE(XPathEvaluator, em_Val);

/**
 * @brief Creates a new `XPathEvaluator` object. 
*/
XPathEvaluator XPathEvaluator_new();

/**
 * @brief Calls the `createExpression` method. 
*/
XPathExpression XPathEvaluator_createExpression0(XPathEvaluator* self , jb_String * expression);

/**
 * @brief Calls the `createExpression` method. 
*/
XPathExpression XPathEvaluator_createExpression1(XPathEvaluator* self , jb_String * expression, jb_Function * resolver);

/**
 * @brief Calls the `createNSResolver` method. 
*/
Node XPathEvaluator_createNSResolver(XPathEvaluator* self , Node * nodeResolver);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathEvaluator_evaluate0(XPathEvaluator* self , jb_String * expression, Node * contextNode);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathEvaluator_evaluate1(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathEvaluator_evaluate2(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathEvaluator_evaluate3(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result);

#ifdef __cplusplus
}
#endif
