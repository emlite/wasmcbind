#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


typedef struct {
  em_Val inner;
} StructuredSerializeOptions;


DECLARE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);

jb_Sequence StructuredSerializeOptions_transfer( const StructuredSerializeOptions *self);

void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, const jb_Sequence* value);
typedef struct {
  EventTarget inner;
} MessagePort;


DECLARE_EMLITE_TYPE(MessagePort, EventTarget);

jb_Undefined MessagePort_postMessage(MessagePort* self , const jb_Any* message);

jb_Undefined MessagePort_postMessage(MessagePort* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Undefined MessagePort_start(MessagePort* self );

jb_Undefined MessagePort_close(MessagePort* self );

jb_Any MessagePort_onclose( const MessagePort *self);

void MessagePort_set_onclose(MessagePort* self, const jb_Any* value);

jb_Any MessagePort_onmessage( const MessagePort *self);

void MessagePort_set_onmessage(MessagePort* self, const jb_Any* value);

jb_Any MessagePort_onmessageerror( const MessagePort *self);

void MessagePort_set_onmessageerror(MessagePort* self, const jb_Any* value);
