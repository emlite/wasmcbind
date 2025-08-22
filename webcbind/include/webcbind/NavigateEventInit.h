#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationDestination NavigationDestination;
typedef struct AbortSignal AbortSignal;
typedef struct FormData FormData;
typedef struct Element Element;

/** @brief Dictionary type NavigateEventInit */
DECLARE_EMLITE_TYPE(NavigateEventInit, EventInit);

/** @brief Getter of the navigationType property */
NavigationType NavigateEventInit_navigationType(const NavigateEventInit *self);

/** @brief Setter of the navigationType property */
void NavigateEventInit_set_navigationType(NavigateEventInit* self, NavigationType * value);

/** @brief Getter of the destination property */
NavigationDestination NavigateEventInit_destination(const NavigateEventInit *self);

/** @brief Setter of the destination property */
void NavigateEventInit_set_destination(NavigateEventInit* self, NavigationDestination * value);

/** @brief Getter of the canIntercept property */
bool NavigateEventInit_canIntercept(const NavigateEventInit *self);

/** @brief Setter of the canIntercept property */
void NavigateEventInit_set_canIntercept(NavigateEventInit* self, bool value);

/** @brief Getter of the userInitiated property */
bool NavigateEventInit_userInitiated(const NavigateEventInit *self);

/** @brief Setter of the userInitiated property */
void NavigateEventInit_set_userInitiated(NavigateEventInit* self, bool value);

/** @brief Getter of the hashChange property */
bool NavigateEventInit_hashChange(const NavigateEventInit *self);

/** @brief Setter of the hashChange property */
void NavigateEventInit_set_hashChange(NavigateEventInit* self, bool value);

/** @brief Getter of the signal property */
AbortSignal NavigateEventInit_signal(const NavigateEventInit *self);

/** @brief Setter of the signal property */
void NavigateEventInit_set_signal(NavigateEventInit* self, AbortSignal * value);

/** @brief Getter of the formData property */
FormData NavigateEventInit_formData(const NavigateEventInit *self);

/** @brief Setter of the formData property */
void NavigateEventInit_set_formData(NavigateEventInit* self, FormData * value);

/** @brief Getter of the downloadRequest property */
jb_String NavigateEventInit_downloadRequest(const NavigateEventInit *self);

/** @brief Setter of the downloadRequest property */
void NavigateEventInit_set_downloadRequest(NavigateEventInit* self, jb_String * value);

/** @brief Getter of the info property */
jb_Any NavigateEventInit_info(const NavigateEventInit *self);

/** @brief Setter of the info property */
void NavigateEventInit_set_info(NavigateEventInit* self, jb_Any * value);

/** @brief Getter of the hasUAVisualTransition property */
bool NavigateEventInit_hasUAVisualTransition(const NavigateEventInit *self);

/** @brief Setter of the hasUAVisualTransition property */
void NavigateEventInit_set_hasUAVisualTransition(NavigateEventInit* self, bool value);

/** @brief Getter of the sourceElement property */
Element NavigateEventInit_sourceElement(const NavigateEventInit *self);

/** @brief Setter of the sourceElement property */
void NavigateEventInit_set_sourceElement(NavigateEventInit* self, Element * value);

/** @brief Constructor of the NavigateEventInit dictionary type */
NavigateEventInit NavigateEventInit_new();

#ifdef __cplusplus
}
#endif
