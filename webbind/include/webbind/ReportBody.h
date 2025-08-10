#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ReportBody, em_Val);

ReportBody ReportBody_new();

#ifdef __cplusplus
}
#endif
