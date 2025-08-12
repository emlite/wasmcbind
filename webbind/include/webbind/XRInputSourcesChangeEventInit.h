#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;

/** @brief Dictionary type XRInputSourcesChangeEventInit */
DECLARE_EMLITE_TYPE(XRInputSourcesChangeEventInit, EventInit);

/** @brief Getter of the session property */
XRSession XRInputSourcesChangeEventInit_session(const XRInputSourcesChangeEventInit *self);

/** @brief Setter of the session property */
void XRInputSourcesChangeEventInit_set_session(XRInputSourcesChangeEventInit* self, XRSession * value);

/** @brief Getter of the added property */
jb_Array XRInputSourcesChangeEventInit_added(const XRInputSourcesChangeEventInit *self);

/** @brief Setter of the added property */
void XRInputSourcesChangeEventInit_set_added(XRInputSourcesChangeEventInit* self, jb_Array * value);

/** @brief Getter of the removed property */
jb_Array XRInputSourcesChangeEventInit_removed(const XRInputSourcesChangeEventInit *self);

/** @brief Setter of the removed property */
void XRInputSourcesChangeEventInit_set_removed(XRInputSourcesChangeEventInit* self, jb_Array * value);

/** @brief Constructor of the XRInputSourcesChangeEventInit dictionary type */
XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit_new();

#ifdef __cplusplus
}
#endif
