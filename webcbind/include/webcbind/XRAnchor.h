#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;


/**
 * @brief Interface XRAnchor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchor)
 */
DECLARE_EMLITE_TYPE(XRAnchor, em_Val);

/**
 * @brief Gets the `anchorSpace` property. 
*/
XRSpace XRAnchor_anchorSpace(const XRAnchor *self);

/**
 * @brief Calls the `requestPersistentHandle` method. 
*/
jb_Promise XRAnchor_requestPersistentHandle(XRAnchor* self );

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined XRAnchor_delete_(XRAnchor* self );

#ifdef __cplusplus
}
#endif
