#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventModifierInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

/** @brief Dictionary type MouseEventInit */
DECLARE_EMLITE_TYPE(MouseEventInit, EventModifierInit);

/** @brief Getter of the screenX property */
long MouseEventInit_screenX(const MouseEventInit *self);

/** @brief Setter of the screenX property */
void MouseEventInit_set_screenX(MouseEventInit* self, long value);

/** @brief Getter of the screenY property */
long MouseEventInit_screenY(const MouseEventInit *self);

/** @brief Setter of the screenY property */
void MouseEventInit_set_screenY(MouseEventInit* self, long value);

/** @brief Getter of the clientX property */
long MouseEventInit_clientX(const MouseEventInit *self);

/** @brief Setter of the clientX property */
void MouseEventInit_set_clientX(MouseEventInit* self, long value);

/** @brief Getter of the clientY property */
long MouseEventInit_clientY(const MouseEventInit *self);

/** @brief Setter of the clientY property */
void MouseEventInit_set_clientY(MouseEventInit* self, long value);

/** @brief Getter of the button property */
short MouseEventInit_button(const MouseEventInit *self);

/** @brief Setter of the button property */
void MouseEventInit_set_button(MouseEventInit* self, short value);

/** @brief Getter of the buttons property */
unsigned short MouseEventInit_buttons(const MouseEventInit *self);

/** @brief Setter of the buttons property */
void MouseEventInit_set_buttons(MouseEventInit* self, unsigned short value);

/** @brief Getter of the relatedTarget property */
EventTarget MouseEventInit_relatedTarget(const MouseEventInit *self);

/** @brief Setter of the relatedTarget property */
void MouseEventInit_set_relatedTarget(MouseEventInit* self, EventTarget * value);

/** @brief Constructor of the MouseEventInit dictionary type */
MouseEventInit MouseEventInit_new();

#ifdef __cplusplus
}
#endif
