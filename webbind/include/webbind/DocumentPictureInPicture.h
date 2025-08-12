#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;
typedef struct DocumentPictureInPictureOptions DocumentPictureInPictureOptions;


/**
 * @brief Interface DocumentPictureInPicture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPicture)
 */
DECLARE_EMLITE_TYPE(DocumentPictureInPicture, EventTarget);

/**
 * @brief Calls the `requestWindow` method. 
*/
jb_Promise DocumentPictureInPicture_requestWindow0(DocumentPictureInPicture* self );

/**
 * @brief Calls the `requestWindow` method. 
*/
jb_Promise DocumentPictureInPicture_requestWindow1(DocumentPictureInPicture* self , DocumentPictureInPictureOptions * options);

/**
 * @brief Gets the `window` property. 
*/
Window DocumentPictureInPicture_window(const DocumentPictureInPicture *self);

/**
 * @brief Gets the `onenter` property. 
*/
jb_Any DocumentPictureInPicture_onenter(const DocumentPictureInPicture *self);

/**
 * @brief Sets the `onenter` property. 
*/
void DocumentPictureInPicture_set_onenter(DocumentPictureInPicture* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
