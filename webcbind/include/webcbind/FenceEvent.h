#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FenceEvent */
DECLARE_EMLITE_TYPE(FenceEvent, em_Val);

/** @brief Getter of the eventType property */
jb_String FenceEvent_eventType(const FenceEvent *self);

/** @brief Setter of the eventType property */
void FenceEvent_set_eventType(FenceEvent* self, jb_String * value);

/** @brief Getter of the eventData property */
jb_String FenceEvent_eventData(const FenceEvent *self);

/** @brief Setter of the eventData property */
void FenceEvent_set_eventData(FenceEvent* self, jb_String * value);

/** @brief Getter of the destination property */
jb_Array FenceEvent_destination(const FenceEvent *self);

/** @brief Setter of the destination property */
void FenceEvent_set_destination(FenceEvent* self, jb_Array * value);

/** @brief Getter of the crossOriginExposed property */
bool FenceEvent_crossOriginExposed(const FenceEvent *self);

/** @brief Setter of the crossOriginExposed property */
void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value);

/** @brief Getter of the once property */
bool FenceEvent_once(const FenceEvent *self);

/** @brief Setter of the once property */
void FenceEvent_set_once(FenceEvent* self, bool value);

/** @brief Getter of the destinationURL property */
jb_String FenceEvent_destinationURL(const FenceEvent *self);

/** @brief Setter of the destinationURL property */
void FenceEvent_set_destinationURL(FenceEvent* self, jb_String * value);

/** @brief Constructor of the FenceEvent dictionary type */
FenceEvent FenceEvent_new();

#ifdef __cplusplus
}
#endif
