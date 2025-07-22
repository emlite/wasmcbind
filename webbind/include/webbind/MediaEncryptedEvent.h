#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} MediaEncryptedEvent;


DECLARE_EMLITE_TYPE(MediaEncryptedEvent, Event);

MediaEncryptedEvent MediaEncryptedEvent_new(const jb_DOMString* type);

MediaEncryptedEvent MediaEncryptedEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString MediaEncryptedEvent_initDataType( const MediaEncryptedEvent *self);

jb_ArrayBuffer MediaEncryptedEvent_initData( const MediaEncryptedEvent *self);
