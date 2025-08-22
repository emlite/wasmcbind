#include <webcbind/PerformanceScriptTiming.h>

#include <webcbind/Window.h>

DEFINE_EMLITE_TYPE(PerformanceScriptTiming, PerformanceEntry);


jb_Any PerformanceScriptTiming_startTime(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("startTime")));
}


jb_Any PerformanceScriptTiming_duration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("duration")));
}


jb_String PerformanceScriptTiming_name(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("name")));
}


jb_String PerformanceScriptTiming_entryType(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("entryType")));
}


ScriptInvokerType PerformanceScriptTiming_invokerType(const PerformanceScriptTiming *self) {
    return em_Val_as(ScriptInvokerType, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("invokerType")));
}


jb_String PerformanceScriptTiming_invoker(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("invoker")));
}


jb_Any PerformanceScriptTiming_executionStart(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("executionStart")));
}


jb_String PerformanceScriptTiming_sourceURL(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("sourceURL")));
}


jb_String PerformanceScriptTiming_sourceFunctionName(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("sourceFunctionName")));
}


long long PerformanceScriptTiming_sourceCharPosition(const PerformanceScriptTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("sourceCharPosition")));
}


jb_Any PerformanceScriptTiming_pauseDuration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("pauseDuration")));
}


jb_Any PerformanceScriptTiming_forcedStyleAndLayoutDuration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("forcedStyleAndLayoutDuration")));
}


Window PerformanceScriptTiming_window(const PerformanceScriptTiming *self) {
    return em_Val_as(Window, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("window")));
}


ScriptWindowAttribution PerformanceScriptTiming_windowAttribution(const PerformanceScriptTiming *self) {
    return em_Val_as(ScriptWindowAttribution, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("windowAttribution")));
}


jb_Object PerformanceScriptTiming_toJSON(PerformanceScriptTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

