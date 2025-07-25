#pragma once

#include <emlite/emlite.h>
#include "utils.h"

DECLARE_EMLITE_TYPE(jb_Any, em_Val);

#define ANY(x) ((jb_Any){.inner = em_Val_from(x)})