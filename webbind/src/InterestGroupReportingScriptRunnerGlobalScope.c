#include <webbind/InterestGroupReportingScriptRunnerGlobalScope.h>


DEFINE_EMLITE_TYPE(InterestGroupReportingScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);


jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_sendReportTo(InterestGroupReportingScriptRunnerGlobalScope* self , jb_DOMString * url) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), "sendReportTo", em_Val_from(url)));
}


jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdBeacon(InterestGroupReportingScriptRunnerGlobalScope* self , jb_Record * map) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), "registerAdBeacon", em_Val_from(map)));
}


jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdMacro(InterestGroupReportingScriptRunnerGlobalScope* self , jb_DOMString * name, jb_USVString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(InterestGroupScriptRunnerGlobalScope_as_val(self->inner), "registerAdMacro", em_Val_from(name), em_Val_from(value)));
}

