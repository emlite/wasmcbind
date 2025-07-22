#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WorkletOptions WorkletOptions;


typedef struct {
  em_Val inner;
} WorkletOptions;


DECLARE_EMLITE_TYPE(WorkletOptions, em_Val);

RequestCredentials WorkletOptions_credentials( const WorkletOptions *self);

void WorkletOptions_set_credentials(WorkletOptions* self, const RequestCredentials* value);
typedef struct {
  em_Val inner;
} Worklet;


DECLARE_EMLITE_TYPE(Worklet, em_Val);

jb_Promise Worklet_addModule(Worklet* self , const jb_USVString* moduleURL);

jb_Promise Worklet_addModule(Worklet* self , const jb_USVString* moduleURL, const WorkletOptions* options);
