#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} RemotePlayback;


DECLARE_EMLITE_TYPE(RemotePlayback, EventTarget);

jb_Promise RemotePlayback_watchAvailability(RemotePlayback* self , const jb_Function* callback);

jb_Promise RemotePlayback_cancelWatchAvailability(RemotePlayback* self );

jb_Promise RemotePlayback_cancelWatchAvailability(RemotePlayback* self , long id);

RemotePlaybackState RemotePlayback_state( const RemotePlayback *self);

jb_Any RemotePlayback_onconnecting( const RemotePlayback *self);

void RemotePlayback_set_onconnecting(RemotePlayback* self, const jb_Any* value);

jb_Any RemotePlayback_onconnect( const RemotePlayback *self);

void RemotePlayback_set_onconnect(RemotePlayback* self, const jb_Any* value);

jb_Any RemotePlayback_ondisconnect( const RemotePlayback *self);

void RemotePlayback_set_ondisconnect(RemotePlayback* self, const jb_Any* value);

jb_Promise RemotePlayback_prompt(RemotePlayback* self );
