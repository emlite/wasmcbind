#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFace FontFace;


/**
 * @brief Interface FontFaceSet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet)
 */
DECLARE_EMLITE_TYPE(FontFaceSet, EventTarget);

/**
 * @brief Calls the `add` method. 
*/
FontFaceSet FontFaceSet_add(FontFaceSet* self , FontFace * font);

/**
 * @brief Calls the `delete` method. 
*/
bool FontFaceSet_delete_(FontFaceSet* self , FontFace * font);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined FontFaceSet_clear(FontFaceSet* self );

/**
 * @brief Gets the `onloading` property. 
*/
jb_Any FontFaceSet_onloading(const FontFaceSet *self);

/**
 * @brief Sets the `onloading` property. 
*/
void FontFaceSet_set_onloading(FontFaceSet* self, jb_Any * value);

/**
 * @brief Gets the `onloadingdone` property. 
*/
jb_Any FontFaceSet_onloadingdone(const FontFaceSet *self);

/**
 * @brief Sets the `onloadingdone` property. 
*/
void FontFaceSet_set_onloadingdone(FontFaceSet* self, jb_Any * value);

/**
 * @brief Gets the `onloadingerror` property. 
*/
jb_Any FontFaceSet_onloadingerror(const FontFaceSet *self);

/**
 * @brief Sets the `onloadingerror` property. 
*/
void FontFaceSet_set_onloadingerror(FontFaceSet* self, jb_Any * value);

/**
 * @brief Calls the `load` method. 
*/
jb_Promise FontFaceSet_load0(FontFaceSet* self , jb_String * font);

/**
 * @brief Calls the `load` method. 
*/
jb_Promise FontFaceSet_load1(FontFaceSet* self , jb_String * font, jb_String * text);

/**
 * @brief Calls the `check` method. 
*/
bool FontFaceSet_check0(FontFaceSet* self , jb_String * font);

/**
 * @brief Calls the `check` method. 
*/
bool FontFaceSet_check1(FontFaceSet* self , jb_String * font, jb_String * text);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise FontFaceSet_ready(const FontFaceSet *self);

/**
 * @brief Gets the `status` property. 
*/
FontFaceSetLoadStatus FontFaceSet_status(const FontFaceSet *self);

#ifdef __cplusplus
}
#endif
