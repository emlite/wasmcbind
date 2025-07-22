#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(External, em_Val);

jb_Undefined External_AddSearchProvider(External* self );

jb_Undefined External_IsSearchProviderInstalled(External* self );
