#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Blob Blob;


typedef struct {
  Event inner;
} BlobEvent;


DECLARE_EMLITE_TYPE(BlobEvent, Event);

BlobEvent BlobEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Blob BlobEvent_data( const BlobEvent *self);

jb_Any BlobEvent_timecode( const BlobEvent *self);
