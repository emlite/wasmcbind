#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FenceEvent FenceEvent;
typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct Event Event;


typedef struct {
  em_Val inner;
} FenceEvent;


DECLARE_EMLITE_TYPE(FenceEvent, em_Val);

jb_DOMString FenceEvent_eventType( const FenceEvent *self);

void FenceEvent_set_eventType(FenceEvent* self, const jb_DOMString* value);

jb_DOMString FenceEvent_eventData( const FenceEvent *self);

void FenceEvent_set_eventData(FenceEvent* self, const jb_DOMString* value);

jb_Sequence FenceEvent_destination( const FenceEvent *self);

void FenceEvent_set_destination(FenceEvent* self, const jb_Sequence* value);

bool FenceEvent_crossOriginExposed( const FenceEvent *self);

void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value);

bool FenceEvent_once( const FenceEvent *self);

void FenceEvent_set_once(FenceEvent* self, bool value);

jb_USVString FenceEvent_destinationURL( const FenceEvent *self);

void FenceEvent_set_destinationURL(FenceEvent* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} Fence;


DECLARE_EMLITE_TYPE(Fence, em_Val);

jb_Undefined Fence_reportEvent(Fence* self );

jb_Undefined Fence_reportEvent(Fence* self , const jb_Any* event);

jb_Undefined Fence_setReportEventDataForAutomaticBeacons(Fence* self );

jb_Undefined Fence_setReportEventDataForAutomaticBeacons(Fence* self , const FenceEvent* event);

jb_Sequence Fence_getNestedConfigs(Fence* self );

jb_Promise Fence_disableUntrustedNetwork(Fence* self );

jb_Undefined Fence_notifyEvent(Fence* self , const Event* event);
