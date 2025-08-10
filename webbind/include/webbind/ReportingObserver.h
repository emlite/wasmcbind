#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReportingObserverOptions ReportingObserverOptions;

DECLARE_EMLITE_TYPE(ReportingObserver, em_Val);

ReportingObserver ReportingObserver_new0(jb_Function * callback);

ReportingObserver ReportingObserver_new1(jb_Function * callback, ReportingObserverOptions * options);

jb_Undefined ReportingObserver_observe(ReportingObserver* self );

jb_Undefined ReportingObserver_disconnect(ReportingObserver* self );

jb_Any ReportingObserver_takeRecords(ReportingObserver* self );

#ifdef __cplusplus
}
#endif
