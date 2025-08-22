#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CharacterData.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Comment
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Comment)
 */
DECLARE_EMLITE_TYPE(Comment, CharacterData);

/**
 * @brief Creates a new `Comment` object. 
*/
Comment Comment_new0();

/**
 * @brief Creates a new `Comment` object. 
*/
Comment Comment_new1(jb_String * data);

#ifdef __cplusplus
}
#endif
