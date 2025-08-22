#include <webcbind/GeolocationSensorOptions.h>

DEFINE_EMLITE_TYPE(GeolocationSensorOptions, SensorOptions);


GeolocationSensorOptions GeolocationSensorOptions_new() {
    em_Val obj = em_Val_object();
    return GeolocationSensorOptions_from_val(&obj);
}

