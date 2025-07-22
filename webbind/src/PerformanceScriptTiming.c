#include <webbind/PerformanceScriptTiming.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(PerformanceScriptTiming, PerformanceEntry);


jb_Any PerformanceScriptTiming_startTime(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "startTime"));
}


jb_Any PerformanceScriptTiming_duration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "duration"));
}


jb_DOMString PerformanceScriptTiming_name(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "name"));
}


jb_DOMString PerformanceScriptTiming_entryType(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "entryType"));
}


ScriptInvokerType PerformanceScriptTiming_invokerType(const PerformanceScriptTiming *self) {
    return em_Val_as(ScriptInvokerType, em_Val_get(PerformanceEntry_as_val(self->inner), "invokerType"));
}


jb_DOMString PerformanceScriptTiming_invoker(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "invoker"));
}


jb_Any PerformanceScriptTiming_executionStart(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "executionStart"));
}


jb_DOMString PerformanceScriptTiming_sourceURL(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "sourceURL"));
}


jb_DOMString PerformanceScriptTiming_sourceFunctionName(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "sourceFunctionName"));
}


long long PerformanceScriptTiming_sourceCharPosition(const PerformanceScriptTiming *self) {
    return em_Val_as(long long, em_Val_get(PerformanceEntry_as_val(self->inner), "sourceCharPosition"));
}


jb_Any PerformanceScriptTiming_pauseDuration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "pauseDuration"));
}


jb_Any PerformanceScriptTiming_forcedStyleAndLayoutDuration(const PerformanceScriptTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "forcedStyleAndLayoutDuration"));
}


Window PerformanceScriptTiming_window(const PerformanceScriptTiming *self) {
    return em_Val_as(Window, em_Val_get(PerformanceEntry_as_val(self->inner), "window"));
}


ScriptWindowAttribution PerformanceScriptTiming_windowAttribution(const PerformanceScriptTiming *self) {
    return em_Val_as(ScriptWindowAttribution, em_Val_get(PerformanceEntry_as_val(self->inner), "windowAttribution"));
}


jb_Object PerformanceScriptTiming_toJSON(PerformanceScriptTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}

