#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;
typedef struct Document Document;
typedef struct PermissionsPolicy PermissionsPolicy;


/**
 * @brief Interface HTMLIFrameElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement)
 */
DECLARE_EMLITE_TYPE(HTMLIFrameElement, HTMLElement);

/**
 * @brief Creates a new `HTMLIFrameElement` object. 
*/
HTMLIFrameElement HTMLIFrameElement_new();

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLIFrameElement_src(const HTMLIFrameElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLIFrameElement_set_src(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `srcdoc` property. 
*/
jb_Any HTMLIFrameElement_srcdoc(const HTMLIFrameElement *self);

/**
 * @brief Sets the `srcdoc` property. 
*/
void HTMLIFrameElement_set_srcdoc(HTMLIFrameElement* self, jb_Any * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLIFrameElement_name(const HTMLIFrameElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLIFrameElement_set_name(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `sandbox` property. 
*/
DOMTokenList HTMLIFrameElement_sandbox(const HTMLIFrameElement *self);

/**
 * @brief Gets the `allow` property. 
*/
jb_String HTMLIFrameElement_allow(const HTMLIFrameElement *self);

/**
 * @brief Sets the `allow` property. 
*/
void HTMLIFrameElement_set_allow(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `allowFullscreen` property. 
*/
bool HTMLIFrameElement_allowFullscreen(const HTMLIFrameElement *self);

/**
 * @brief Sets the `allowFullscreen` property. 
*/
void HTMLIFrameElement_set_allowFullscreen(HTMLIFrameElement* self, bool value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLIFrameElement_width(const HTMLIFrameElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLIFrameElement_set_width(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLIFrameElement_height(const HTMLIFrameElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLIFrameElement_set_height(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLIFrameElement_referrerPolicy(const HTMLIFrameElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLIFrameElement_set_referrerPolicy(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `loading` property. 
*/
jb_String HTMLIFrameElement_loading(const HTMLIFrameElement *self);

/**
 * @brief Sets the `loading` property. 
*/
void HTMLIFrameElement_set_loading(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `contentDocument` property. 
*/
Document HTMLIFrameElement_contentDocument(const HTMLIFrameElement *self);

/**
 * @brief Gets the `contentWindow` property. 
*/
jb_Any HTMLIFrameElement_contentWindow(const HTMLIFrameElement *self);

/**
 * @brief Calls the `getSVGDocument` method. 
*/
Document HTMLIFrameElement_getSVGDocument(HTMLIFrameElement* self );

/**
 * @brief Gets the `credentialless` property. 
*/
bool HTMLIFrameElement_credentialless(const HTMLIFrameElement *self);

/**
 * @brief Sets the `credentialless` property. 
*/
void HTMLIFrameElement_set_credentialless(HTMLIFrameElement* self, bool value);

/**
 * @brief Gets the `csp` property. 
*/
jb_String HTMLIFrameElement_csp(const HTMLIFrameElement *self);

/**
 * @brief Sets the `csp` property. 
*/
void HTMLIFrameElement_set_csp(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLIFrameElement_align(const HTMLIFrameElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLIFrameElement_set_align(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `scrolling` property. 
*/
jb_String HTMLIFrameElement_scrolling(const HTMLIFrameElement *self);

/**
 * @brief Sets the `scrolling` property. 
*/
void HTMLIFrameElement_set_scrolling(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `frameBorder` property. 
*/
jb_String HTMLIFrameElement_frameBorder(const HTMLIFrameElement *self);

/**
 * @brief Sets the `frameBorder` property. 
*/
void HTMLIFrameElement_set_frameBorder(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `longDesc` property. 
*/
jb_String HTMLIFrameElement_longDesc(const HTMLIFrameElement *self);

/**
 * @brief Sets the `longDesc` property. 
*/
void HTMLIFrameElement_set_longDesc(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `marginHeight` property. 
*/
jb_String HTMLIFrameElement_marginHeight(const HTMLIFrameElement *self);

/**
 * @brief Sets the `marginHeight` property. 
*/
void HTMLIFrameElement_set_marginHeight(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `marginWidth` property. 
*/
jb_String HTMLIFrameElement_marginWidth(const HTMLIFrameElement *self);

/**
 * @brief Sets the `marginWidth` property. 
*/
void HTMLIFrameElement_set_marginWidth(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `permissionsPolicy` property. 
*/
PermissionsPolicy HTMLIFrameElement_permissionsPolicy(const HTMLIFrameElement *self);

/**
 * @brief Gets the `privateToken` property. 
*/
jb_String HTMLIFrameElement_privateToken(const HTMLIFrameElement *self);

/**
 * @brief Sets the `privateToken` property. 
*/
void HTMLIFrameElement_set_privateToken(HTMLIFrameElement* self, jb_String * value);

/**
 * @brief Gets the `adAuctionHeaders` property. 
*/
bool HTMLIFrameElement_adAuctionHeaders(const HTMLIFrameElement *self);

/**
 * @brief Sets the `adAuctionHeaders` property. 
*/
void HTMLIFrameElement_set_adAuctionHeaders(HTMLIFrameElement* self, bool value);

/**
 * @brief Gets the `sharedStorageWritable` property. 
*/
bool HTMLIFrameElement_sharedStorageWritable(const HTMLIFrameElement *self);

/**
 * @brief Sets the `sharedStorageWritable` property. 
*/
void HTMLIFrameElement_set_sharedStorageWritable(HTMLIFrameElement* self, bool value);

#ifdef __cplusplus
}
#endif
