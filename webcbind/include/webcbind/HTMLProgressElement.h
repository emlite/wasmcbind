#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLProgressElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLProgressElement)
 */
DECLARE_EMLITE_TYPE(HTMLProgressElement, HTMLElement);

/**
 * @brief Creates a new `HTMLProgressElement` object. 
*/
HTMLProgressElement HTMLProgressElement_new();

/**
 * @brief Gets the `value` property. 
*/
double HTMLProgressElement_value(const HTMLProgressElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLProgressElement_set_value(HTMLProgressElement* self, double value);

/**
 * @brief Gets the `max` property. 
*/
double HTMLProgressElement_max(const HTMLProgressElement *self);

/**
 * @brief Sets the `max` property. 
*/
void HTMLProgressElement_set_max(HTMLProgressElement* self, double value);

/**
 * @brief Gets the `position` property. 
*/
double HTMLProgressElement_position(const HTMLProgressElement *self);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLProgressElement_labels(const HTMLProgressElement *self);

#ifdef __cplusplus
}
#endif
