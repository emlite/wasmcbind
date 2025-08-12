#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MimeType MimeType;


/**
 * @brief Interface Plugin
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Plugin)
 */
DECLARE_EMLITE_TYPE(Plugin, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String Plugin_name(const Plugin *self);

/**
 * @brief Gets the `description` property. 
*/
jb_String Plugin_description(const Plugin *self);

/**
 * @brief Gets the `filename` property. 
*/
jb_String Plugin_filename(const Plugin *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long Plugin_length(const Plugin *self);

/**
 * @brief Calls the `item` method. 
*/
MimeType Plugin_item(Plugin* self , unsigned long index);

/**
 * @brief Calls the `namedItem` method. 
*/
MimeType Plugin_namedItem(Plugin* self , jb_String * name);

#ifdef __cplusplus
}
#endif
