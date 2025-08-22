#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ReportingObserverOptions */
DECLARE_EMLITE_TYPE(ReportingObserverOptions, em_Val);

/** @brief Getter of the types property */
jb_Array ReportingObserverOptions_types(const ReportingObserverOptions *self);

/** @brief Setter of the types property */
void ReportingObserverOptions_set_types(ReportingObserverOptions* self, jb_Array * value);

/** @brief Getter of the buffered property */
bool ReportingObserverOptions_buffered(const ReportingObserverOptions *self);

/** @brief Setter of the buffered property */
void ReportingObserverOptions_set_buffered(ReportingObserverOptions* self, bool value);

/** @brief Constructor of the ReportingObserverOptions dictionary type */
ReportingObserverOptions ReportingObserverOptions_new();

#ifdef __cplusplus
}
#endif
