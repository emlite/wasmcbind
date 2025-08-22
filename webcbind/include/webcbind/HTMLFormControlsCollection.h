#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLCollection.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLFormControlsCollection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormControlsCollection)
 */
DECLARE_EMLITE_TYPE(HTMLFormControlsCollection, HTMLCollection);

/**
 * @brief Calls the `namedItem` method. 
*/
jb_Any HTMLFormControlsCollection_namedItem(HTMLFormControlsCollection* self , jb_String * name);

#ifdef __cplusplus
}
#endif
