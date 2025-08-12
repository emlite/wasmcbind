#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

/** @brief Dictionary type TouchInit */
DECLARE_EMLITE_TYPE(TouchInit, em_Val);

/** @brief Getter of the identifier property */
long TouchInit_identifier(const TouchInit *self);

/** @brief Setter of the identifier property */
void TouchInit_set_identifier(TouchInit* self, long value);

/** @brief Getter of the target property */
EventTarget TouchInit_target(const TouchInit *self);

/** @brief Setter of the target property */
void TouchInit_set_target(TouchInit* self, EventTarget * value);

/** @brief Getter of the clientX property */
double TouchInit_clientX(const TouchInit *self);

/** @brief Setter of the clientX property */
void TouchInit_set_clientX(TouchInit* self, double value);

/** @brief Getter of the clientY property */
double TouchInit_clientY(const TouchInit *self);

/** @brief Setter of the clientY property */
void TouchInit_set_clientY(TouchInit* self, double value);

/** @brief Getter of the screenX property */
double TouchInit_screenX(const TouchInit *self);

/** @brief Setter of the screenX property */
void TouchInit_set_screenX(TouchInit* self, double value);

/** @brief Getter of the screenY property */
double TouchInit_screenY(const TouchInit *self);

/** @brief Setter of the screenY property */
void TouchInit_set_screenY(TouchInit* self, double value);

/** @brief Getter of the pageX property */
double TouchInit_pageX(const TouchInit *self);

/** @brief Setter of the pageX property */
void TouchInit_set_pageX(TouchInit* self, double value);

/** @brief Getter of the pageY property */
double TouchInit_pageY(const TouchInit *self);

/** @brief Setter of the pageY property */
void TouchInit_set_pageY(TouchInit* self, double value);

/** @brief Getter of the radiusX property */
float TouchInit_radiusX(const TouchInit *self);

/** @brief Setter of the radiusX property */
void TouchInit_set_radiusX(TouchInit* self, float value);

/** @brief Getter of the radiusY property */
float TouchInit_radiusY(const TouchInit *self);

/** @brief Setter of the radiusY property */
void TouchInit_set_radiusY(TouchInit* self, float value);

/** @brief Getter of the rotationAngle property */
float TouchInit_rotationAngle(const TouchInit *self);

/** @brief Setter of the rotationAngle property */
void TouchInit_set_rotationAngle(TouchInit* self, float value);

/** @brief Getter of the force property */
float TouchInit_force(const TouchInit *self);

/** @brief Setter of the force property */
void TouchInit_set_force(TouchInit* self, float value);

/** @brief Getter of the altitudeAngle property */
double TouchInit_altitudeAngle(const TouchInit *self);

/** @brief Setter of the altitudeAngle property */
void TouchInit_set_altitudeAngle(TouchInit* self, double value);

/** @brief Getter of the azimuthAngle property */
double TouchInit_azimuthAngle(const TouchInit *self);

/** @brief Setter of the azimuthAngle property */
void TouchInit_set_azimuthAngle(TouchInit* self, double value);

/** @brief Getter of the touchType property */
TouchType TouchInit_touchType(const TouchInit *self);

/** @brief Setter of the touchType property */
void TouchInit_set_touchType(TouchInit* self, TouchType * value);

/** @brief Constructor of the TouchInit dictionary type */
TouchInit TouchInit_new();

#ifdef __cplusplus
}
#endif
