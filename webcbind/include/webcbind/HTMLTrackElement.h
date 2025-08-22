#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextTrack TextTrack;


/**
 * @brief Interface HTMLTrackElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTrackElement)
 */
DECLARE_EMLITE_TYPE(HTMLTrackElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTrackElement` object. 
*/
HTMLTrackElement HTMLTrackElement_new();

/**
 * @brief Gets the `kind` property. 
*/
jb_String HTMLTrackElement_kind(const HTMLTrackElement *self);

/**
 * @brief Sets the `kind` property. 
*/
void HTMLTrackElement_set_kind(HTMLTrackElement* self, jb_String * value);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLTrackElement_src(const HTMLTrackElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLTrackElement_set_src(HTMLTrackElement* self, jb_String * value);

/**
 * @brief Gets the `srclang` property. 
*/
jb_String HTMLTrackElement_srclang(const HTMLTrackElement *self);

/**
 * @brief Sets the `srclang` property. 
*/
void HTMLTrackElement_set_srclang(HTMLTrackElement* self, jb_String * value);

/**
 * @brief Gets the `label` property. 
*/
jb_String HTMLTrackElement_label(const HTMLTrackElement *self);

/**
 * @brief Sets the `label` property. 
*/
void HTMLTrackElement_set_label(HTMLTrackElement* self, jb_String * value);

/**
 * @brief Gets the `default` property. 
*/
bool HTMLTrackElement_default_(const HTMLTrackElement *self);

/**
 * @brief Sets the `default` property. 
*/
void HTMLTrackElement_set_default_(HTMLTrackElement* self, bool value);

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short HTMLTrackElement_readyState(const HTMLTrackElement *self);

/**
 * @brief Gets the `track` property. 
*/
TextTrack HTMLTrackElement_track(const HTMLTrackElement *self);

#ifdef __cplusplus
}
#endif
