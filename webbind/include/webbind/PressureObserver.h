#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PressureObserverOptions PressureObserverOptions;
typedef struct PressureRecord PressureRecord;


/**
 * @brief Interface PressureObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver)
 */
DECLARE_EMLITE_TYPE(PressureObserver, em_Val);

/**
 * @brief Creates a new `PressureObserver` object. 
*/
PressureObserver PressureObserver_new(jb_Function * callback);

/**
 * @brief Calls the `observe` method. 
*/
jb_Promise PressureObserver_observe0(PressureObserver* self , PressureSource * source);

/**
 * @brief Calls the `observe` method. 
*/
jb_Promise PressureObserver_observe1(PressureObserver* self , PressureSource * source, PressureObserverOptions * options);

/**
 * @brief Calls the `unobserve` method. 
*/
jb_Undefined PressureObserver_unobserve(PressureObserver* self , PressureSource * source);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined PressureObserver_disconnect(PressureObserver* self );

/**
 * @brief Calls the `takeRecords` method. 
*/
jb_Array PressureObserver_takeRecords(PressureObserver* self );

/**
 * @brief Gets the `knownSources` property. 
*/
jb_Array PressureObserver_knownSources(const PressureObserver *self);

#ifdef __cplusplus
}
#endif
