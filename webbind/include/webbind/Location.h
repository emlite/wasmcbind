#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMStringList DOMStringList;


/**
 * @brief Interface Location
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Location)
 */
DECLARE_EMLITE_TYPE(Location, em_Val);

/**
 * @brief Gets the `href` property. 
*/
jb_String Location_href(const Location *self);

/**
 * @brief Sets the `href` property. 
*/
void Location_set_href(Location* self, jb_String * value);

/**
 * @brief Gets the `origin` property. 
*/
jb_String Location_origin(const Location *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String Location_protocol(const Location *self);

/**
 * @brief Sets the `protocol` property. 
*/
void Location_set_protocol(Location* self, jb_String * value);

/**
 * @brief Gets the `host` property. 
*/
jb_String Location_host(const Location *self);

/**
 * @brief Sets the `host` property. 
*/
void Location_set_host(Location* self, jb_String * value);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String Location_hostname(const Location *self);

/**
 * @brief Sets the `hostname` property. 
*/
void Location_set_hostname(Location* self, jb_String * value);

/**
 * @brief Gets the `port` property. 
*/
jb_String Location_port(const Location *self);

/**
 * @brief Sets the `port` property. 
*/
void Location_set_port(Location* self, jb_String * value);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String Location_pathname(const Location *self);

/**
 * @brief Sets the `pathname` property. 
*/
void Location_set_pathname(Location* self, jb_String * value);

/**
 * @brief Gets the `search` property. 
*/
jb_String Location_search(const Location *self);

/**
 * @brief Sets the `search` property. 
*/
void Location_set_search(Location* self, jb_String * value);

/**
 * @brief Gets the `hash` property. 
*/
jb_String Location_hash(const Location *self);

/**
 * @brief Sets the `hash` property. 
*/
void Location_set_hash(Location* self, jb_String * value);

/**
 * @brief Calls the `assign` method. 
*/
jb_Undefined Location_assign(Location* self , jb_String * url);

/**
 * @brief Calls the `replace` method. 
*/
jb_Undefined Location_replace(Location* self , jb_String * url);

/**
 * @brief Calls the `reload` method. 
*/
jb_Undefined Location_reload(Location* self );

/**
 * @brief Gets the `ancestorOrigins` property. 
*/
DOMStringList Location_ancestorOrigins(const Location *self);

#ifdef __cplusplus
}
#endif
