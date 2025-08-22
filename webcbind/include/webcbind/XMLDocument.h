#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Document.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XMLDocument
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XMLDocument)
 */
DECLARE_EMLITE_TYPE(XMLDocument, Document);

#ifdef __cplusplus
}
#endif
