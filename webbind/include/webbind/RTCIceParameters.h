#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceParameters */
DECLARE_EMLITE_TYPE(RTCIceParameters, em_Val);

/** @brief Getter of the usernameFragment property */
jb_String RTCIceParameters_usernameFragment(const RTCIceParameters *self);

/** @brief Setter of the usernameFragment property */
void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, jb_String * value);

/** @brief Getter of the password property */
jb_String RTCIceParameters_password(const RTCIceParameters *self);

/** @brief Setter of the password property */
void RTCIceParameters_set_password(RTCIceParameters* self, jb_String * value);

/** @brief Constructor of the RTCIceParameters dictionary type */
RTCIceParameters RTCIceParameters_new();

#ifdef __cplusplus
}
#endif
