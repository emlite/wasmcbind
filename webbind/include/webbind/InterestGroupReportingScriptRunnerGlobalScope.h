#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupScriptRunnerGlobalScope.h"
#include "enums.h"


typedef struct {
  InterestGroupScriptRunnerGlobalScope inner;
} InterestGroupReportingScriptRunnerGlobalScope;


DECLARE_EMLITE_TYPE(InterestGroupReportingScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_sendReportTo(InterestGroupReportingScriptRunnerGlobalScope* self , const jb_DOMString* url);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdBeacon(InterestGroupReportingScriptRunnerGlobalScope* self , const jb_Record* map);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdMacro(InterestGroupReportingScriptRunnerGlobalScope* self , const jb_DOMString* name, const jb_USVString* value);
