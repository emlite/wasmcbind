#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PointerEvent PointerEvent;

/** @brief Dictionary type PointerEventInit */
DECLARE_EMLITE_TYPE(PointerEventInit, MouseEventInit);

/** @brief Getter of the pointerId property */
long PointerEventInit_pointerId(const PointerEventInit *self);

/** @brief Setter of the pointerId property */
void PointerEventInit_set_pointerId(PointerEventInit* self, long value);

/** @brief Getter of the width property */
double PointerEventInit_width(const PointerEventInit *self);

/** @brief Setter of the width property */
void PointerEventInit_set_width(PointerEventInit* self, double value);

/** @brief Getter of the height property */
double PointerEventInit_height(const PointerEventInit *self);

/** @brief Setter of the height property */
void PointerEventInit_set_height(PointerEventInit* self, double value);

/** @brief Getter of the pressure property */
float PointerEventInit_pressure(const PointerEventInit *self);

/** @brief Setter of the pressure property */
void PointerEventInit_set_pressure(PointerEventInit* self, float value);

/** @brief Getter of the tangentialPressure property */
float PointerEventInit_tangentialPressure(const PointerEventInit *self);

/** @brief Setter of the tangentialPressure property */
void PointerEventInit_set_tangentialPressure(PointerEventInit* self, float value);

/** @brief Getter of the tiltX property */
long PointerEventInit_tiltX(const PointerEventInit *self);

/** @brief Setter of the tiltX property */
void PointerEventInit_set_tiltX(PointerEventInit* self, long value);

/** @brief Getter of the tiltY property */
long PointerEventInit_tiltY(const PointerEventInit *self);

/** @brief Setter of the tiltY property */
void PointerEventInit_set_tiltY(PointerEventInit* self, long value);

/** @brief Getter of the twist property */
long PointerEventInit_twist(const PointerEventInit *self);

/** @brief Setter of the twist property */
void PointerEventInit_set_twist(PointerEventInit* self, long value);

/** @brief Getter of the altitudeAngle property */
double PointerEventInit_altitudeAngle(const PointerEventInit *self);

/** @brief Setter of the altitudeAngle property */
void PointerEventInit_set_altitudeAngle(PointerEventInit* self, double value);

/** @brief Getter of the azimuthAngle property */
double PointerEventInit_azimuthAngle(const PointerEventInit *self);

/** @brief Setter of the azimuthAngle property */
void PointerEventInit_set_azimuthAngle(PointerEventInit* self, double value);

/** @brief Getter of the pointerType property */
jb_String PointerEventInit_pointerType(const PointerEventInit *self);

/** @brief Setter of the pointerType property */
void PointerEventInit_set_pointerType(PointerEventInit* self, jb_String * value);

/** @brief Getter of the isPrimary property */
bool PointerEventInit_isPrimary(const PointerEventInit *self);

/** @brief Setter of the isPrimary property */
void PointerEventInit_set_isPrimary(PointerEventInit* self, bool value);

/** @brief Getter of the persistentDeviceId property */
long PointerEventInit_persistentDeviceId(const PointerEventInit *self);

/** @brief Setter of the persistentDeviceId property */
void PointerEventInit_set_persistentDeviceId(PointerEventInit* self, long value);

/** @brief Getter of the coalescedEvents property */
jb_Array PointerEventInit_coalescedEvents(const PointerEventInit *self);

/** @brief Setter of the coalescedEvents property */
void PointerEventInit_set_coalescedEvents(PointerEventInit* self, jb_Array * value);

/** @brief Getter of the predictedEvents property */
jb_Array PointerEventInit_predictedEvents(const PointerEventInit *self);

/** @brief Setter of the predictedEvents property */
void PointerEventInit_set_predictedEvents(PointerEventInit* self, jb_Array * value);

/** @brief Constructor of the PointerEventInit dictionary type */
PointerEventInit PointerEventInit_new();

#ifdef __cplusplus
}
#endif
