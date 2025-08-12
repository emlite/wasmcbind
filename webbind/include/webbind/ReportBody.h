#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReportBody */
DECLARE_EMLITE_TYPE(ReportBody, em_Val);

/** @brief Constructor of the ReportBody dictionary type */
ReportBody ReportBody_new();

#ifdef __cplusplus
}
#endif
