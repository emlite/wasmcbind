#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WorkerLocation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation)
 */
DECLARE_EMLITE_TYPE(WorkerLocation, em_Val);

/**
 * @brief Gets the `href` property. 
*/
jb_String WorkerLocation_href(const WorkerLocation *self);

/**
 * @brief Gets the `origin` property. 
*/
jb_String WorkerLocation_origin(const WorkerLocation *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String WorkerLocation_protocol(const WorkerLocation *self);

/**
 * @brief Gets the `host` property. 
*/
jb_String WorkerLocation_host(const WorkerLocation *self);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String WorkerLocation_hostname(const WorkerLocation *self);

/**
 * @brief Gets the `port` property. 
*/
jb_String WorkerLocation_port(const WorkerLocation *self);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String WorkerLocation_pathname(const WorkerLocation *self);

/**
 * @brief Gets the `search` property. 
*/
jb_String WorkerLocation_search(const WorkerLocation *self);

/**
 * @brief Gets the `hash` property. 
*/
jb_String WorkerLocation_hash(const WorkerLocation *self);

#ifdef __cplusplus
}
#endif
