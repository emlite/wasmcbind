#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Text.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CDATASection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CDATASection)
 */
DECLARE_EMLITE_TYPE(CDATASection, Text);

#ifdef __cplusplus
}
#endif
