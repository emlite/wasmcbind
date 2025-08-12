#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PositionOptions PositionOptions;


/**
 * @brief Interface Geolocation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation)
 */
DECLARE_EMLITE_TYPE(Geolocation, em_Val);

/**
 * @brief Calls the `getCurrentPosition` method. 
*/
jb_Undefined Geolocation_getCurrentPosition0(Geolocation* self , jb_Function * successCallback);

/**
 * @brief Calls the `getCurrentPosition` method. 
*/
jb_Undefined Geolocation_getCurrentPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback);

/**
 * @brief Calls the `getCurrentPosition` method. 
*/
jb_Undefined Geolocation_getCurrentPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options);

/**
 * @brief Calls the `watchPosition` method. 
*/
long Geolocation_watchPosition0(Geolocation* self , jb_Function * successCallback);

/**
 * @brief Calls the `watchPosition` method. 
*/
long Geolocation_watchPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback);

/**
 * @brief Calls the `watchPosition` method. 
*/
long Geolocation_watchPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options);

/**
 * @brief Calls the `clearWatch` method. 
*/
jb_Undefined Geolocation_clearWatch(Geolocation* self , long watchId);

#ifdef __cplusplus
}
#endif
