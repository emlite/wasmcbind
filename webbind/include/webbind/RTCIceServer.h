#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceServer, em_Val);

jb_Any RTCIceServer_urls(const RTCIceServer *self);

void RTCIceServer_set_urls(RTCIceServer* self, jb_Any * value);

jb_String RTCIceServer_username(const RTCIceServer *self);

void RTCIceServer_set_username(RTCIceServer* self, jb_String * value);

jb_String RTCIceServer_credential(const RTCIceServer *self);

void RTCIceServer_set_credential(RTCIceServer* self, jb_String * value);

RTCIceServer RTCIceServer_new();

#ifdef __cplusplus
}
#endif
