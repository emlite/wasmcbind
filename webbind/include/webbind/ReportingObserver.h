#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ReportingObserver;


DECLARE_EMLITE_TYPE(ReportingObserver, em_Val);

ReportingObserver ReportingObserver_new(const jb_Function* callback);

ReportingObserver ReportingObserver_new(const jb_Function* callback, const jb_Any* options);

jb_Undefined ReportingObserver_observe(ReportingObserver* self );

jb_Undefined ReportingObserver_disconnect(ReportingObserver* self );

jb_Any ReportingObserver_takeRecords(ReportingObserver* self );
