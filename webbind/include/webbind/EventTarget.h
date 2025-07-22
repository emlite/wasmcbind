#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Event Event;
typedef struct Observable Observable;
typedef struct ObservableEventListenerOptions ObservableEventListenerOptions;


typedef struct {
  em_Val inner;
} ObservableEventListenerOptions;


DECLARE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);

bool ObservableEventListenerOptions_capture( const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value);

bool ObservableEventListenerOptions_passive( const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value);
typedef struct {
  em_Val inner;
} EventTarget;


DECLARE_EMLITE_TYPE(EventTarget, em_Val);

EventTarget EventTarget_new();

jb_Undefined EventTarget_addEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback);

jb_Undefined EventTarget_addEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback, const jb_Any* options);

jb_Undefined EventTarget_removeEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback);

jb_Undefined EventTarget_removeEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback, const jb_Any* options);

bool EventTarget_dispatchEvent(EventTarget* self , const Event* event);

Observable EventTarget_when(EventTarget* self , const jb_DOMString* type);

Observable EventTarget_when(EventTarget* self , const jb_DOMString* type, const ObservableEventListenerOptions* options);
