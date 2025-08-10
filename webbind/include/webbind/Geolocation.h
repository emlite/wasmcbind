#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PositionOptions PositionOptions;

DECLARE_EMLITE_TYPE(Geolocation, em_Val);

jb_Undefined Geolocation_getCurrentPosition0(Geolocation* self , jb_Function * successCallback);

jb_Undefined Geolocation_getCurrentPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback);

jb_Undefined Geolocation_getCurrentPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options);

long Geolocation_watchPosition0(Geolocation* self , jb_Function * successCallback);

long Geolocation_watchPosition1(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback);

long Geolocation_watchPosition2(Geolocation* self , jb_Function * successCallback, jb_Function * errorCallback, PositionOptions * options);

jb_Undefined Geolocation_clearWatch(Geolocation* self , long watchId);

#ifdef __cplusplus
}
#endif
