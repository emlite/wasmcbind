#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XPathResult XPathResult;
typedef struct Node Node;


/**
 * @brief Interface XPathExpression
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression)
 */
DECLARE_EMLITE_TYPE(XPathExpression, em_Val);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathExpression_evaluate0(XPathExpression* self , Node * contextNode);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathExpression_evaluate1(XPathExpression* self , Node * contextNode, unsigned short type);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult XPathExpression_evaluate2(XPathExpression* self , Node * contextNode, unsigned short type, XPathResult * result);

#ifdef __cplusplus
}
#endif
