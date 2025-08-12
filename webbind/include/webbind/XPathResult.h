#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface XPathResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult)
 */
DECLARE_EMLITE_TYPE(XPathResult, em_Val);

/**
 * @brief Gets the `resultType` property. 
*/
unsigned short XPathResult_resultType(const XPathResult *self);

/**
 * @brief Gets the `numberValue` property. 
*/
double XPathResult_numberValue(const XPathResult *self);

/**
 * @brief Gets the `stringValue` property. 
*/
jb_String XPathResult_stringValue(const XPathResult *self);

/**
 * @brief Gets the `booleanValue` property. 
*/
bool XPathResult_booleanValue(const XPathResult *self);

/**
 * @brief Gets the `singleNodeValue` property. 
*/
Node XPathResult_singleNodeValue(const XPathResult *self);

/**
 * @brief Gets the `invalidIteratorState` property. 
*/
bool XPathResult_invalidIteratorState(const XPathResult *self);

/**
 * @brief Gets the `snapshotLength` property. 
*/
unsigned long XPathResult_snapshotLength(const XPathResult *self);

/**
 * @brief Calls the `iterateNext` method. 
*/
Node XPathResult_iterateNext(XPathResult* self );

/**
 * @brief Calls the `snapshotItem` method. 
*/
Node XPathResult_snapshotItem(XPathResult* self , unsigned long index);

#ifdef __cplusplus
}
#endif
