#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MediaSource.h"
#include "enums.h"


typedef struct {
  MediaSource inner;
} ManagedMediaSource;


DECLARE_EMLITE_TYPE(ManagedMediaSource, MediaSource);

ManagedMediaSource ManagedMediaSource_new();

bool ManagedMediaSource_streaming( const ManagedMediaSource *self);

jb_Any ManagedMediaSource_onstartstreaming( const ManagedMediaSource *self);

void ManagedMediaSource_set_onstartstreaming(ManagedMediaSource* self, const jb_Any* value);

jb_Any ManagedMediaSource_onendstreaming( const ManagedMediaSource *self);

void ManagedMediaSource_set_onendstreaming(ManagedMediaSource* self, const jb_Any* value);
