#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(RTCDTMFSender, EventTarget);

jb_Undefined RTCDTMFSender_insertDTMF0(RTCDTMFSender* self , jb_DOMString * tones);

jb_Undefined RTCDTMFSender_insertDTMF1(RTCDTMFSender* self , jb_DOMString * tones, unsigned long duration);

jb_Undefined RTCDTMFSender_insertDTMF2(RTCDTMFSender* self , jb_DOMString * tones, unsigned long duration, unsigned long interToneGap);

jb_Any RTCDTMFSender_ontonechange( const RTCDTMFSender *self);

void RTCDTMFSender_set_ontonechange(RTCDTMFSender* self, jb_Any * value);

bool RTCDTMFSender_canInsertDTMF( const RTCDTMFSender *self);

jb_DOMString RTCDTMFSender_toneBuffer( const RTCDTMFSender *self);
