#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;

/** @brief Dictionary type XRSessionEventInit */
DECLARE_EMLITE_TYPE(XRSessionEventInit, EventInit);

/** @brief Getter of the session property */
XRSession XRSessionEventInit_session(const XRSessionEventInit *self);

/** @brief Setter of the session property */
void XRSessionEventInit_set_session(XRSessionEventInit* self, XRSession * value);

/** @brief Constructor of the XRSessionEventInit dictionary type */
XRSessionEventInit XRSessionEventInit_new();

#ifdef __cplusplus
}
#endif
