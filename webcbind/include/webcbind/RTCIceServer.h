#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceServer */
DECLARE_EMLITE_TYPE(RTCIceServer, em_Val);

/** @brief Getter of the urls property */
jb_Any RTCIceServer_urls(const RTCIceServer *self);

/** @brief Setter of the urls property */
void RTCIceServer_set_urls(RTCIceServer* self, jb_Any * value);

/** @brief Getter of the username property */
jb_String RTCIceServer_username(const RTCIceServer *self);

/** @brief Setter of the username property */
void RTCIceServer_set_username(RTCIceServer* self, jb_String * value);

/** @brief Getter of the credential property */
jb_String RTCIceServer_credential(const RTCIceServer *self);

/** @brief Setter of the credential property */
void RTCIceServer_set_credential(RTCIceServer* self, jb_String * value);

/** @brief Constructor of the RTCIceServer dictionary type */
RTCIceServer RTCIceServer_new();

#ifdef __cplusplus
}
#endif
