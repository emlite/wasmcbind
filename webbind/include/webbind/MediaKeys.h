#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MediaKeySession MediaKeySession;
typedef struct MediaKeysPolicy MediaKeysPolicy;


typedef struct {
  em_Val inner;
} MediaKeysPolicy;


DECLARE_EMLITE_TYPE(MediaKeysPolicy, em_Val);

jb_DOMString MediaKeysPolicy_minHdcpVersion( const MediaKeysPolicy *self);

void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} MediaKeys;


DECLARE_EMLITE_TYPE(MediaKeys, em_Val);

MediaKeySession MediaKeys_createSession(MediaKeys* self );

MediaKeySession MediaKeys_createSession(MediaKeys* self , const MediaKeySessionType* sessionType);

jb_Promise MediaKeys_getStatusForPolicy(MediaKeys* self );

jb_Promise MediaKeys_getStatusForPolicy(MediaKeys* self , const MediaKeysPolicy* policy);

jb_Promise MediaKeys_setServerCertificate(MediaKeys* self , const jb_Any* serverCertificate);
