#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OffscreenCanvas OffscreenCanvas;
typedef struct MediaStream MediaStream;


/**
 * @brief Interface HTMLCanvasElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement)
 */
DECLARE_EMLITE_TYPE(HTMLCanvasElement, HTMLElement);

/**
 * @brief Creates a new `HTMLCanvasElement` object. 
*/
HTMLCanvasElement HTMLCanvasElement_new();

/**
 * @brief Gets the `width` property. 
*/
unsigned long HTMLCanvasElement_width(const HTMLCanvasElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLCanvasElement_set_width(HTMLCanvasElement* self, unsigned long value);

/**
 * @brief Gets the `height` property. 
*/
unsigned long HTMLCanvasElement_height(const HTMLCanvasElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLCanvasElement_set_height(HTMLCanvasElement* self, unsigned long value);

/**
 * @brief Calls the `getContext` method. 
*/
jb_Any HTMLCanvasElement_getContext0(HTMLCanvasElement* self , jb_String * contextId);

/**
 * @brief Calls the `getContext` method. 
*/
jb_Any HTMLCanvasElement_getContext1(HTMLCanvasElement* self , jb_String * contextId, jb_Any * options);

/**
 * @brief Calls the `toDataURL` method. 
*/
jb_String HTMLCanvasElement_toDataURL0(HTMLCanvasElement* self );

/**
 * @brief Calls the `toDataURL` method. 
*/
jb_String HTMLCanvasElement_toDataURL1(HTMLCanvasElement* self , jb_String * type);

/**
 * @brief Calls the `toDataURL` method. 
*/
jb_String HTMLCanvasElement_toDataURL2(HTMLCanvasElement* self , jb_String * type, jb_Any * quality);

/**
 * @brief Calls the `toBlob` method. 
*/
jb_Undefined HTMLCanvasElement_toBlob0(HTMLCanvasElement* self , jb_Function * callback);

/**
 * @brief Calls the `toBlob` method. 
*/
jb_Undefined HTMLCanvasElement_toBlob1(HTMLCanvasElement* self , jb_Function * callback, jb_String * type);

/**
 * @brief Calls the `toBlob` method. 
*/
jb_Undefined HTMLCanvasElement_toBlob2(HTMLCanvasElement* self , jb_Function * callback, jb_String * type, jb_Any * quality);

/**
 * @brief Calls the `transferControlToOffscreen` method. 
*/
OffscreenCanvas HTMLCanvasElement_transferControlToOffscreen(HTMLCanvasElement* self );

/**
 * @brief Calls the `captureStream` method. 
*/
MediaStream HTMLCanvasElement_captureStream0(HTMLCanvasElement* self );

/**
 * @brief Calls the `captureStream` method. 
*/
MediaStream HTMLCanvasElement_captureStream1(HTMLCanvasElement* self , double frameRequestRate);

#ifdef __cplusplus
}
#endif
