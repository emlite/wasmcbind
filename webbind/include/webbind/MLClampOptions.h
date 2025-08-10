#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLClampOptions, MLOperatorOptions);

jb_Any MLClampOptions_minValue(const MLClampOptions *self);

void MLClampOptions_set_minValue(MLClampOptions* self, jb_Any * value);

jb_Any MLClampOptions_maxValue(const MLClampOptions *self);

void MLClampOptions_set_maxValue(MLClampOptions* self, jb_Any * value);

MLClampOptions MLClampOptions_new();

#ifdef __cplusplus
}
#endif
