#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PositionOptions PositionOptions;


typedef struct {
  em_Val inner;
} PositionOptions;


DECLARE_EMLITE_TYPE(PositionOptions, em_Val);

bool PositionOptions_enableHighAccuracy( const PositionOptions *self);

void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value);

unsigned long PositionOptions_timeout( const PositionOptions *self);

void PositionOptions_set_timeout(PositionOptions* self, unsigned long value);

unsigned long PositionOptions_maximumAge( const PositionOptions *self);

void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value);
typedef struct {
  em_Val inner;
} Geolocation;


DECLARE_EMLITE_TYPE(Geolocation, em_Val);

jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback);

jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback);

jb_Undefined Geolocation_getCurrentPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback, const PositionOptions* options);

long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback);

long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback);

long Geolocation_watchPosition(Geolocation* self , const jb_Function* successCallback, const jb_Function* errorCallback, const PositionOptions* options);

jb_Undefined Geolocation_clearWatch(Geolocation* self , long watchId);
