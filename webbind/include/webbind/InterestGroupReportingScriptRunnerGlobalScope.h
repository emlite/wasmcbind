#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupScriptRunnerGlobalScope.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(InterestGroupReportingScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_sendReportTo(InterestGroupReportingScriptRunnerGlobalScope* self , jb_DOMString * url);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdBeacon(InterestGroupReportingScriptRunnerGlobalScope* self , jb_Record * map);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdMacro(InterestGroupReportingScriptRunnerGlobalScope* self , jb_DOMString * name, jb_USVString * value);
