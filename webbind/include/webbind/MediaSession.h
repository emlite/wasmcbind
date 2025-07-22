#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MediaMetadata MediaMetadata;
typedef struct MediaPositionState MediaPositionState;


typedef struct {
  em_Val inner;
} MediaPositionState;


DECLARE_EMLITE_TYPE(MediaPositionState, em_Val);

double MediaPositionState_duration( const MediaPositionState *self);

void MediaPositionState_set_duration(MediaPositionState* self, double value);

double MediaPositionState_playbackRate( const MediaPositionState *self);

void MediaPositionState_set_playbackRate(MediaPositionState* self, double value);

double MediaPositionState_position( const MediaPositionState *self);

void MediaPositionState_set_position(MediaPositionState* self, double value);
typedef struct {
  em_Val inner;
} MediaSession;


DECLARE_EMLITE_TYPE(MediaSession, em_Val);

MediaMetadata MediaSession_metadata( const MediaSession *self);

void MediaSession_set_metadata(MediaSession* self, const MediaMetadata* value);

MediaSessionPlaybackState MediaSession_playbackState( const MediaSession *self);

void MediaSession_set_playbackState(MediaSession* self, const MediaSessionPlaybackState* value);

jb_Undefined MediaSession_setActionHandler(MediaSession* self , const MediaSessionAction* action, const jb_Function* handler);

jb_Undefined MediaSession_setPositionState(MediaSession* self );

jb_Undefined MediaSession_setPositionState(MediaSession* self , const MediaPositionState* state);

jb_Promise MediaSession_setMicrophoneActive(MediaSession* self , bool active);

jb_Promise MediaSession_setCameraActive(MediaSession* self , bool active);

jb_Promise MediaSession_setScreenshareActive(MediaSession* self , bool active);
