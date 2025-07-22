#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MessagePort.h"
#include "enums.h"


typedef struct {
  em_Val inner;
} Client;


DECLARE_EMLITE_TYPE(Client, em_Val);

jb_USVString Client_url( const Client *self);

FrameType Client_frameType( const Client *self);

jb_DOMString Client_id( const Client *self);

ClientType Client_type( const Client *self);

jb_Undefined Client_postMessage(Client* self , const jb_Any* message);

jb_Undefined Client_postMessage(Client* self , const jb_Any* message, const StructuredSerializeOptions* options);

ClientLifecycleState Client_lifecycleState( const Client *self);
