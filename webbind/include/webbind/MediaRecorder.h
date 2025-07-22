#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MediaStream MediaStream;


typedef struct {
  EventTarget inner;
} MediaRecorder;


DECLARE_EMLITE_TYPE(MediaRecorder, EventTarget);

MediaRecorder MediaRecorder_new(const MediaStream* stream);

MediaRecorder MediaRecorder_new(const MediaStream* stream, const jb_Any* options);

MediaStream MediaRecorder_stream( const MediaRecorder *self);

jb_DOMString MediaRecorder_mimeType( const MediaRecorder *self);

RecordingState MediaRecorder_state( const MediaRecorder *self);

jb_Any MediaRecorder_onstart( const MediaRecorder *self);

void MediaRecorder_set_onstart(MediaRecorder* self, const jb_Any* value);

jb_Any MediaRecorder_onstop( const MediaRecorder *self);

void MediaRecorder_set_onstop(MediaRecorder* self, const jb_Any* value);

jb_Any MediaRecorder_ondataavailable( const MediaRecorder *self);

void MediaRecorder_set_ondataavailable(MediaRecorder* self, const jb_Any* value);

jb_Any MediaRecorder_onpause( const MediaRecorder *self);

void MediaRecorder_set_onpause(MediaRecorder* self, const jb_Any* value);

jb_Any MediaRecorder_onresume( const MediaRecorder *self);

void MediaRecorder_set_onresume(MediaRecorder* self, const jb_Any* value);

jb_Any MediaRecorder_onerror( const MediaRecorder *self);

void MediaRecorder_set_onerror(MediaRecorder* self, const jb_Any* value);

unsigned long MediaRecorder_videoBitsPerSecond( const MediaRecorder *self);

unsigned long MediaRecorder_audioBitsPerSecond( const MediaRecorder *self);

BitrateMode MediaRecorder_audioBitrateMode( const MediaRecorder *self);

jb_Undefined MediaRecorder_start(MediaRecorder* self );

jb_Undefined MediaRecorder_start(MediaRecorder* self , unsigned long timeslice);

jb_Undefined MediaRecorder_stop(MediaRecorder* self );

jb_Undefined MediaRecorder_pause(MediaRecorder* self );

jb_Undefined MediaRecorder_resume(MediaRecorder* self );

jb_Undefined MediaRecorder_requestData(MediaRecorder* self );

bool MediaRecorder_isTypeSupported(MediaRecorder* self , const jb_DOMString* type);
