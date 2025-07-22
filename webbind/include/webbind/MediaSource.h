#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MediaSourceHandle MediaSourceHandle;
typedef struct SourceBufferList SourceBufferList;
typedef struct SourceBuffer SourceBuffer;


typedef struct {
  EventTarget inner;
} MediaSource;


DECLARE_EMLITE_TYPE(MediaSource, EventTarget);

MediaSource MediaSource_new();

MediaSourceHandle MediaSource_handle( const MediaSource *self);

SourceBufferList MediaSource_sourceBuffers( const MediaSource *self);

SourceBufferList MediaSource_activeSourceBuffers( const MediaSource *self);

ReadyState MediaSource_readyState( const MediaSource *self);

double MediaSource_duration( const MediaSource *self);

void MediaSource_set_duration(MediaSource* self, double value);

jb_Any MediaSource_onsourceopen( const MediaSource *self);

void MediaSource_set_onsourceopen(MediaSource* self, const jb_Any* value);

jb_Any MediaSource_onsourceended( const MediaSource *self);

void MediaSource_set_onsourceended(MediaSource* self, const jb_Any* value);

jb_Any MediaSource_onsourceclose( const MediaSource *self);

void MediaSource_set_onsourceclose(MediaSource* self, const jb_Any* value);

bool MediaSource_canConstructInDedicatedWorker( MediaSource *self);

SourceBuffer MediaSource_addSourceBuffer(MediaSource* self , const jb_DOMString* type);

jb_Undefined MediaSource_removeSourceBuffer(MediaSource* self , const SourceBuffer* sourceBuffer);

jb_Undefined MediaSource_endOfStream(MediaSource* self );

jb_Undefined MediaSource_endOfStream(MediaSource* self , const EndOfStreamError* error);

jb_Undefined MediaSource_setLiveSeekableRange(MediaSource* self , double start, double end);

jb_Undefined MediaSource_clearLiveSeekableRange(MediaSource* self );

bool MediaSource_isTypeSupported(MediaSource* self , const jb_DOMString* type);
