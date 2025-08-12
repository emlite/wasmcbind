#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLClampOptions */
DECLARE_EMLITE_TYPE(MLClampOptions, MLOperatorOptions);

/** @brief Getter of the minValue property */
jb_Any MLClampOptions_minValue(const MLClampOptions *self);

/** @brief Setter of the minValue property */
void MLClampOptions_set_minValue(MLClampOptions* self, jb_Any * value);

/** @brief Getter of the maxValue property */
jb_Any MLClampOptions_maxValue(const MLClampOptions *self);

/** @brief Setter of the maxValue property */
void MLClampOptions_set_maxValue(MLClampOptions* self, jb_Any * value);

/** @brief Constructor of the MLClampOptions dictionary type */
MLClampOptions MLClampOptions_new();

#ifdef __cplusplus
}
#endif
