#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PerformanceEntry.h"
#include "enums.h"

typedef struct Window Window;


typedef struct {
  PerformanceEntry inner;
} PerformanceScriptTiming;


DECLARE_EMLITE_TYPE(PerformanceScriptTiming, PerformanceEntry);

jb_Any PerformanceScriptTiming_startTime( const PerformanceScriptTiming *self);

jb_Any PerformanceScriptTiming_duration( const PerformanceScriptTiming *self);

jb_DOMString PerformanceScriptTiming_name( const PerformanceScriptTiming *self);

jb_DOMString PerformanceScriptTiming_entryType( const PerformanceScriptTiming *self);

ScriptInvokerType PerformanceScriptTiming_invokerType( const PerformanceScriptTiming *self);

jb_DOMString PerformanceScriptTiming_invoker( const PerformanceScriptTiming *self);

jb_Any PerformanceScriptTiming_executionStart( const PerformanceScriptTiming *self);

jb_DOMString PerformanceScriptTiming_sourceURL( const PerformanceScriptTiming *self);

jb_DOMString PerformanceScriptTiming_sourceFunctionName( const PerformanceScriptTiming *self);

long long PerformanceScriptTiming_sourceCharPosition( const PerformanceScriptTiming *self);

jb_Any PerformanceScriptTiming_pauseDuration( const PerformanceScriptTiming *self);

jb_Any PerformanceScriptTiming_forcedStyleAndLayoutDuration( const PerformanceScriptTiming *self);

Window PerformanceScriptTiming_window( const PerformanceScriptTiming *self);

ScriptWindowAttribution PerformanceScriptTiming_windowAttribution( const PerformanceScriptTiming *self);

jb_Object PerformanceScriptTiming_toJSON(PerformanceScriptTiming* self );
