#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLMeterElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMeterElement)
 */
DECLARE_EMLITE_TYPE(HTMLMeterElement, HTMLElement);

/**
 * @brief Creates a new `HTMLMeterElement` object. 
*/
HTMLMeterElement HTMLMeterElement_new();

/**
 * @brief Gets the `value` property. 
*/
double HTMLMeterElement_value(const HTMLMeterElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLMeterElement_set_value(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `min` property. 
*/
double HTMLMeterElement_min(const HTMLMeterElement *self);

/**
 * @brief Sets the `min` property. 
*/
void HTMLMeterElement_set_min(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `max` property. 
*/
double HTMLMeterElement_max(const HTMLMeterElement *self);

/**
 * @brief Sets the `max` property. 
*/
void HTMLMeterElement_set_max(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `low` property. 
*/
double HTMLMeterElement_low(const HTMLMeterElement *self);

/**
 * @brief Sets the `low` property. 
*/
void HTMLMeterElement_set_low(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `high` property. 
*/
double HTMLMeterElement_high(const HTMLMeterElement *self);

/**
 * @brief Sets the `high` property. 
*/
void HTMLMeterElement_set_high(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `optimum` property. 
*/
double HTMLMeterElement_optimum(const HTMLMeterElement *self);

/**
 * @brief Sets the `optimum` property. 
*/
void HTMLMeterElement_set_optimum(HTMLMeterElement* self, double value);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLMeterElement_labels(const HTMLMeterElement *self);

#ifdef __cplusplus
}
#endif
