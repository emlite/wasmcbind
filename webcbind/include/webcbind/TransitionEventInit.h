#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TransitionEventInit */
DECLARE_EMLITE_TYPE(TransitionEventInit, EventInit);

/** @brief Getter of the propertyName property */
jb_String TransitionEventInit_propertyName(const TransitionEventInit *self);

/** @brief Setter of the propertyName property */
void TransitionEventInit_set_propertyName(TransitionEventInit* self, jb_String * value);

/** @brief Getter of the elapsedTime property */
double TransitionEventInit_elapsedTime(const TransitionEventInit *self);

/** @brief Setter of the elapsedTime property */
void TransitionEventInit_set_elapsedTime(TransitionEventInit* self, double value);

/** @brief Getter of the pseudoElement property */
jb_String TransitionEventInit_pseudoElement(const TransitionEventInit *self);

/** @brief Setter of the pseudoElement property */
void TransitionEventInit_set_pseudoElement(TransitionEventInit* self, jb_String * value);

/** @brief Constructor of the TransitionEventInit dictionary type */
TransitionEventInit TransitionEventInit_new();

#ifdef __cplusplus
}
#endif
