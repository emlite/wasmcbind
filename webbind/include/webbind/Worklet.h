#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WorkletOptions WorkletOptions;


DECLARE_EMLITE_TYPE(WorkletOptions, em_Val);

RequestCredentials WorkletOptions_credentials( const WorkletOptions *self);

void WorkletOptions_set_credentials(WorkletOptions* self, RequestCredentials * value);
DECLARE_EMLITE_TYPE(Worklet, em_Val);

jb_Promise Worklet_addModule0(Worklet* self , jb_USVString * moduleURL);

jb_Promise Worklet_addModule1(Worklet* self , jb_USVString * moduleURL, WorkletOptions * options);
