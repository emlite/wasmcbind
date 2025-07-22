#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(MLGraph, em_Val);

jb_Undefined MLGraph_destroy(MLGraph* self );
