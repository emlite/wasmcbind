#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Document Document;
typedef struct Location Location;
typedef struct History History;
typedef struct Navigation Navigation;
typedef struct CustomElementRegistry CustomElementRegistry;
typedef struct BarProp BarProp;
typedef struct Element Element;
typedef struct Navigator Navigator;
typedef struct WindowPostMessageOptions WindowPostMessageOptions;
typedef struct CookieStore CookieStore;
typedef struct Viewport Viewport;
typedef struct MediaQueryList MediaQueryList;
typedef struct Screen Screen;
typedef struct VisualViewport VisualViewport;
typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct DigitalGoodsService DigitalGoodsService;
typedef struct DocumentPictureInPicture DocumentPictureInPicture;
typedef struct Fence Fence;
typedef struct FetchLaterResult FetchLaterResult;
typedef struct DeferredRequestInit DeferredRequestInit;
typedef struct FileSystemFileHandle FileSystemFileHandle;
typedef struct OpenFilePickerOptions OpenFilePickerOptions;
typedef struct SaveFilePickerOptions SaveFilePickerOptions;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct DirectoryPickerOptions DirectoryPickerOptions;
typedef struct External External;
typedef struct FontData FontData;
typedef struct QueryOptions QueryOptions;
typedef struct PortalHost PortalHost;
typedef struct IdleRequestOptions IdleRequestOptions;
typedef struct Selection Selection;
typedef struct SharedStorage SharedStorage;
typedef struct SpeechSynthesis SpeechSynthesis;
typedef struct LaunchQueue LaunchQueue;
typedef struct ScreenDetails ScreenDetails;
typedef struct Crypto Crypto;
typedef struct Storage Storage;


/**
 * @brief Interface Window
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Window)
 */
DECLARE_EMLITE_TYPE(Window, EventTarget);

/**
 * @brief Gets the `window` property. 
*/
jb_Any Window_window(const Window *self);

/**
 * @brief Gets the `self` property. 
*/
jb_Any Window_self(const Window *self);

/**
 * @brief Gets the `document` property. 
*/
Document Window_document(const Window *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String Window_name(const Window *self);

/**
 * @brief Sets the `name` property. 
*/
void Window_set_name(Window* self, jb_String * value);

/**
 * @brief Gets the `location` property. 
*/
Location Window_location(const Window *self);

/**
 * @brief Gets the `history` property. 
*/
History Window_history(const Window *self);

/**
 * @brief Gets the `navigation` property. 
*/
Navigation Window_navigation(const Window *self);

/**
 * @brief Gets the `customElements` property. 
*/
CustomElementRegistry Window_customElements(const Window *self);

/**
 * @brief Gets the `locationbar` property. 
*/
BarProp Window_locationbar(const Window *self);

/**
 * @brief Gets the `menubar` property. 
*/
BarProp Window_menubar(const Window *self);

/**
 * @brief Gets the `personalbar` property. 
*/
BarProp Window_personalbar(const Window *self);

/**
 * @brief Gets the `scrollbars` property. 
*/
BarProp Window_scrollbars(const Window *self);

/**
 * @brief Gets the `statusbar` property. 
*/
BarProp Window_statusbar(const Window *self);

/**
 * @brief Gets the `toolbar` property. 
*/
BarProp Window_toolbar(const Window *self);

/**
 * @brief Gets the `status` property. 
*/
jb_String Window_status(const Window *self);

/**
 * @brief Sets the `status` property. 
*/
void Window_set_status(Window* self, jb_String * value);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined Window_close(Window* self );

/**
 * @brief Gets the `closed` property. 
*/
bool Window_closed(const Window *self);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined Window_stop(Window* self );

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined Window_focus(Window* self );

/**
 * @brief Calls the `blur` method. 
*/
jb_Undefined Window_blur(Window* self );

/**
 * @brief Gets the `frames` property. 
*/
jb_Any Window_frames(const Window *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long Window_length(const Window *self);

/**
 * @brief Gets the `top` property. 
*/
jb_Any Window_top(const Window *self);

/**
 * @brief Gets the `opener` property. 
*/
jb_Any Window_opener(const Window *self);

/**
 * @brief Sets the `opener` property. 
*/
void Window_set_opener(Window* self, jb_Any * value);

/**
 * @brief Gets the `parent` property. 
*/
jb_Any Window_parent(const Window *self);

/**
 * @brief Gets the `frameElement` property. 
*/
Element Window_frameElement(const Window *self);

/**
 * @brief Calls the `open` method. 
*/
jb_Any Window_open0(Window* self );

/**
 * @brief Calls the `open` method. 
*/
jb_Any Window_open1(Window* self , jb_String * url);

/**
 * @brief Calls the `open` method. 
*/
jb_Any Window_open2(Window* self , jb_String * url, jb_String * target);

/**
 * @brief Calls the `open` method. 
*/
jb_Any Window_open3(Window* self , jb_String * url, jb_String * target, jb_String * features);

/**
 * @brief Gets the `navigator` property. 
*/
Navigator Window_navigator(const Window *self);

/**
 * @brief Gets the `clientInformation` property. 
*/
Navigator Window_clientInformation(const Window *self);

/**
 * @brief Gets the `originAgentCluster` property. 
*/
bool Window_originAgentCluster(const Window *self);

/**
 * @brief Calls the `alert` method. 
*/
jb_Undefined Window_alert(Window* self , jb_String * message);

/**
 * @brief Calls the `confirm` method. 
*/
bool Window_confirm0(Window* self );

/**
 * @brief Calls the `confirm` method. 
*/
bool Window_confirm1(Window* self , jb_String * message);

/**
 * @brief Calls the `prompt` method. 
*/
jb_String Window_prompt0(Window* self );

/**
 * @brief Calls the `prompt` method. 
*/
jb_String Window_prompt1(Window* self , jb_String * message);

/**
 * @brief Calls the `prompt` method. 
*/
jb_String Window_prompt2(Window* self , jb_String * message, jb_String * default_);

/**
 * @brief Calls the `print` method. 
*/
jb_Undefined Window_print(Window* self );

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Window_postMessage0(Window* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined Window_postMessage1(Window* self , jb_Any * message, WindowPostMessageOptions * options);

/**
 * @brief Gets the `credentialless` property. 
*/
bool Window_credentialless(const Window *self);

/**
 * @brief Gets the `orientation` property. 
*/
short Window_orientation(const Window *self);

/**
 * @brief Gets the `onorientationchange` property. 
*/
jb_Any Window_onorientationchange(const Window *self);

/**
 * @brief Sets the `onorientationchange` property. 
*/
void Window_set_onorientationchange(Window* self, jb_Any * value);

/**
 * @brief Gets the `cookieStore` property. 
*/
CookieStore Window_cookieStore(const Window *self);

/**
 * @brief Calls the `navigate` method. 
*/
jb_Undefined Window_navigate(Window* self , SpatialNavigationDirection * dir);

/**
 * @brief Gets the `viewport` property. 
*/
Viewport Window_viewport(const Window *self);

/**
 * @brief Calls the `matchMedia` method. 
*/
MediaQueryList Window_matchMedia(Window* self , jb_String * query);

/**
 * @brief Gets the `screen` property. 
*/
Screen Window_screen(const Window *self);

/**
 * @brief Gets the `visualViewport` property. 
*/
VisualViewport Window_visualViewport(const Window *self);

/**
 * @brief Calls the `moveTo` method. 
*/
jb_Undefined Window_moveTo(Window* self , long x, long y);

/**
 * @brief Calls the `moveBy` method. 
*/
jb_Undefined Window_moveBy(Window* self , long x, long y);

/**
 * @brief Calls the `resizeTo` method. 
*/
jb_Undefined Window_resizeTo(Window* self , long width, long height);

/**
 * @brief Calls the `resizeBy` method. 
*/
jb_Undefined Window_resizeBy(Window* self , long x, long y);

/**
 * @brief Gets the `innerWidth` property. 
*/
long Window_innerWidth(const Window *self);

/**
 * @brief Gets the `innerHeight` property. 
*/
long Window_innerHeight(const Window *self);

/**
 * @brief Gets the `scrollX` property. 
*/
double Window_scrollX(const Window *self);

/**
 * @brief Gets the `pageXOffset` property. 
*/
double Window_pageXOffset(const Window *self);

/**
 * @brief Gets the `scrollY` property. 
*/
double Window_scrollY(const Window *self);

/**
 * @brief Gets the `pageYOffset` property. 
*/
double Window_pageYOffset(const Window *self);

/**
 * @brief Calls the `scroll` method. 
*/
jb_Undefined Window_scroll(Window* self , double x, double y);

/**
 * @brief Calls the `scrollTo` method. 
*/
jb_Undefined Window_scrollTo(Window* self , double x, double y);

/**
 * @brief Calls the `scrollBy` method. 
*/
jb_Undefined Window_scrollBy(Window* self , double x, double y);

/**
 * @brief Gets the `screenX` property. 
*/
long Window_screenX(const Window *self);

/**
 * @brief Gets the `screenLeft` property. 
*/
long Window_screenLeft(const Window *self);

/**
 * @brief Gets the `screenY` property. 
*/
long Window_screenY(const Window *self);

/**
 * @brief Gets the `screenTop` property. 
*/
long Window_screenTop(const Window *self);

/**
 * @brief Gets the `outerWidth` property. 
*/
long Window_outerWidth(const Window *self);

/**
 * @brief Gets the `outerHeight` property. 
*/
long Window_outerHeight(const Window *self);

/**
 * @brief Gets the `devicePixelRatio` property. 
*/
double Window_devicePixelRatio(const Window *self);

/**
 * @brief Calls the `getComputedStyle` method. 
*/
CSSStyleProperties Window_getComputedStyle0(Window* self , Element * elt);

/**
 * @brief Calls the `getComputedStyle` method. 
*/
CSSStyleProperties Window_getComputedStyle1(Window* self , Element * elt, jb_String * pseudoElt);

/**
 * @brief Calls the `getDigitalGoodsService` method. 
*/
jb_Promise Window_getDigitalGoodsService(Window* self , jb_String * serviceProvider);

/**
 * @brief Gets the `documentPictureInPicture` property. 
*/
DocumentPictureInPicture Window_documentPictureInPicture(const Window *self);

/**
 * @brief Gets the `event` property. 
*/
jb_Any Window_event(const Window *self);

/**
 * @brief Gets the `fence` property. 
*/
Fence Window_fence(const Window *self);

/**
 * @brief Calls the `fetchLater` method. 
*/
FetchLaterResult Window_fetchLater0(Window* self , jb_Any * input);

/**
 * @brief Calls the `fetchLater` method. 
*/
FetchLaterResult Window_fetchLater1(Window* self , jb_Any * input, DeferredRequestInit * init);

/**
 * @brief Calls the `showOpenFilePicker` method. 
*/
jb_Promise Window_showOpenFilePicker0(Window* self );

/**
 * @brief Calls the `showOpenFilePicker` method. 
*/
jb_Promise Window_showOpenFilePicker1(Window* self , OpenFilePickerOptions * options);

/**
 * @brief Calls the `showSaveFilePicker` method. 
*/
jb_Promise Window_showSaveFilePicker0(Window* self );

/**
 * @brief Calls the `showSaveFilePicker` method. 
*/
jb_Promise Window_showSaveFilePicker1(Window* self , SaveFilePickerOptions * options);

/**
 * @brief Calls the `showDirectoryPicker` method. 
*/
jb_Promise Window_showDirectoryPicker0(Window* self );

/**
 * @brief Calls the `showDirectoryPicker` method. 
*/
jb_Promise Window_showDirectoryPicker1(Window* self , DirectoryPickerOptions * options);

/**
 * @brief Calls the `captureEvents` method. 
*/
jb_Undefined Window_captureEvents(Window* self );

/**
 * @brief Calls the `releaseEvents` method. 
*/
jb_Undefined Window_releaseEvents(Window* self );

/**
 * @brief Gets the `external` property. 
*/
External Window_external(const Window *self);

/**
 * @brief Calls the `queryLocalFonts` method. 
*/
jb_Promise Window_queryLocalFonts0(Window* self );

/**
 * @brief Calls the `queryLocalFonts` method. 
*/
jb_Promise Window_queryLocalFonts1(Window* self , QueryOptions * options);

/**
 * @brief Gets the `onappinstalled` property. 
*/
jb_Any Window_onappinstalled(const Window *self);

/**
 * @brief Sets the `onappinstalled` property. 
*/
void Window_set_onappinstalled(Window* self, jb_Any * value);

/**
 * @brief Gets the `onbeforeinstallprompt` property. 
*/
jb_Any Window_onbeforeinstallprompt(const Window *self);

/**
 * @brief Sets the `onbeforeinstallprompt` property. 
*/
void Window_set_onbeforeinstallprompt(Window* self, jb_Any * value);

/**
 * @brief Gets the `ondeviceorientation` property. 
*/
jb_Any Window_ondeviceorientation(const Window *self);

/**
 * @brief Sets the `ondeviceorientation` property. 
*/
void Window_set_ondeviceorientation(Window* self, jb_Any * value);

/**
 * @brief Gets the `ondeviceorientationabsolute` property. 
*/
jb_Any Window_ondeviceorientationabsolute(const Window *self);

/**
 * @brief Sets the `ondeviceorientationabsolute` property. 
*/
void Window_set_ondeviceorientationabsolute(Window* self, jb_Any * value);

/**
 * @brief Gets the `ondevicemotion` property. 
*/
jb_Any Window_ondevicemotion(const Window *self);

/**
 * @brief Sets the `ondevicemotion` property. 
*/
void Window_set_ondevicemotion(Window* self, jb_Any * value);

/**
 * @brief Gets the `portalHost` property. 
*/
PortalHost Window_portalHost(const Window *self);

/**
 * @brief Calls the `requestIdleCallback` method. 
*/
unsigned long Window_requestIdleCallback0(Window* self , jb_Function * callback);

/**
 * @brief Calls the `requestIdleCallback` method. 
*/
unsigned long Window_requestIdleCallback1(Window* self , jb_Function * callback, IdleRequestOptions * options);

/**
 * @brief Calls the `cancelIdleCallback` method. 
*/
jb_Undefined Window_cancelIdleCallback(Window* self , unsigned long handle);

/**
 * @brief Calls the `getSelection` method. 
*/
Selection Window_getSelection(Window* self );

/**
 * @brief Gets the `sharedStorage` property. 
*/
SharedStorage Window_sharedStorage(const Window *self);

/**
 * @brief Gets the `speechSynthesis` property. 
*/
SpeechSynthesis Window_speechSynthesis(const Window *self);

/**
 * @brief Gets the `launchQueue` property. 
*/
LaunchQueue Window_launchQueue(const Window *self);

/**
 * @brief Calls the `getScreenDetails` method. 
*/
jb_Promise Window_getScreenDetails(Window* self );

/**
 * @brief Gets the `onbeforexrselect` property. 
*/
jb_Any Window_onbeforexrselect(const Window *self);

/**
 * @brief Sets the `onbeforexrselect` property. 
*/
void Window_set_onbeforexrselect(Window* self, jb_Any * value);

/**
 * @brief Gets the `onportalactivate` property. 
*/
jb_Any Window_onportalactivate(const Window *self);

/**
 * @brief Sets the `onportalactivate` property. 
*/
void Window_set_onportalactivate(Window* self, jb_Any * value);

/**
 * @brief Gets the `crypto` property. 
*/
Crypto Window_crypto(const Window *self);

/**
 * @brief Calls the `requestAnimationFrame` method. 
*/
unsigned long Window_requestAnimationFrame(Window* self , jb_Function * callback);

/**
 * @brief Calls the `cancelAnimationFrame` method. 
*/
jb_Undefined Window_cancelAnimationFrame(Window* self , unsigned long handle);

/**
 * @brief Gets the `sessionStorage` property. 
*/
Storage Window_sessionStorage(const Window *self);

/**
 * @brief Gets the `localStorage` property. 
*/
Storage Window_localStorage(const Window *self);

#ifdef __cplusplus
}
#endif
