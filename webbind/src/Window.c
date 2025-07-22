#include <webbind/Window.h>
#include <webbind/Document.h>
#include <webbind/Location.h>
#include <webbind/History.h>
#include <webbind/Navigation.h>
#include <webbind/CustomElementRegistry.h>
#include <webbind/BarProp.h>
#include <webbind/Element.h>
#include <webbind/Navigator.h>
#include <webbind/CookieStore.h>
#include <webbind/Viewport.h>
#include <webbind/MediaQueryList.h>
#include <webbind/Screen.h>
#include <webbind/VisualViewport.h>
#include <webbind/CSSStyleDeclaration.h>
#include <webbind/DigitalGoodsService.h>
#include <webbind/DocumentPictureInPicture.h>
#include <webbind/Fence.h>
#include <webbind/FileSystemFileHandle.h>
#include <webbind/FileSystemDirectoryHandle.h>
#include <webbind/External.h>
#include <webbind/FontData.h>
#include <webbind/PortalHost.h>
#include <webbind/Selection.h>
#include <webbind/SharedStorage.h>
#include <webbind/SpeechSynthesis.h>
#include <webbind/LaunchQueue.h>
#include <webbind/ScreenDetails.h>
#include <webbind/Crypto.h>
#include <webbind/Storage.h>


DEFINE_EMLITE_TYPE(WindowPostMessageOptions, em_Val);


jb_USVString WindowPostMessageOptions_targetOrigin(const WindowPostMessageOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "targetOrigin"));
}


void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "targetOrigin", value);
}

DEFINE_EMLITE_TYPE(OpenFilePickerOptions, em_Val);


bool OpenFilePickerOptions_multiple(const OpenFilePickerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "multiple"));
}


void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "multiple", value);
}

DEFINE_EMLITE_TYPE(SaveFilePickerOptions, em_Val);


jb_USVString SaveFilePickerOptions_suggestedName(const SaveFilePickerOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "suggestedName"));
}


void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "suggestedName", value);
}

DEFINE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);


jb_DOMString DirectoryPickerOptions_id(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}


jb_Any DirectoryPickerOptions_startIn(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "startIn"));
}


void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "startIn", value);
}


FileSystemPermissionMode DirectoryPickerOptions_mode(const DirectoryPickerOptions *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, const FileSystemPermissionMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}

DEFINE_EMLITE_TYPE(QueryOptions, em_Val);


jb_Sequence QueryOptions_postscriptNames(const QueryOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "postscriptNames"));
}


void QueryOptions_set_postscriptNames(QueryOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "postscriptNames", value);
}

DEFINE_EMLITE_TYPE(IdleRequestOptions, em_Val);


unsigned long IdleRequestOptions_timeout(const IdleRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "timeout"));
}


void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeout", value);
}

DEFINE_EMLITE_TYPE(Window, EventTarget);


jb_Any Window_window(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "window"));
}


jb_Any Window_self(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "self"));
}


Document Window_document(const Window *self) {
    return em_Val_as(Document, em_Val_get(EventTarget_as_val(self->inner), "document"));
}


jb_DOMString Window_name(const Window *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


void Window_set_name(Window* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "name", value);
}


jb_Any Window_location(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "location"));
}


History Window_history(const Window *self) {
    return em_Val_as(History, em_Val_get(EventTarget_as_val(self->inner), "history"));
}


Navigation Window_navigation(const Window *self) {
    return em_Val_as(Navigation, em_Val_get(EventTarget_as_val(self->inner), "navigation"));
}


CustomElementRegistry Window_customElements(const Window *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(EventTarget_as_val(self->inner), "customElements"));
}


BarProp Window_locationbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "locationbar"));
}


BarProp Window_menubar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "menubar"));
}


BarProp Window_personalbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "personalbar"));
}


BarProp Window_scrollbars(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "scrollbars"));
}


BarProp Window_statusbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "statusbar"));
}


BarProp Window_toolbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), "toolbar"));
}


jb_DOMString Window_status(const Window *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "status"));
}


void Window_set_status(Window* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "status", value);
}


jb_Undefined Window_close(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


bool Window_closed(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "closed"));
}


jb_Undefined Window_stop(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined Window_focus(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "focus"));
}


jb_Undefined Window_blur(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "blur"));
}


jb_Any Window_frames(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "frames"));
}


unsigned long Window_length(const Window *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "length"));
}


jb_Any Window_top(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "top"));
}


jb_Any Window_opener(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "opener"));
}


void Window_set_opener(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "opener", value);
}


jb_Any Window_parent(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "parent"));
}


Element Window_frameElement(const Window *self) {
    return em_Val_as(Element, em_Val_get(EventTarget_as_val(self->inner), "frameElement"));
}


jb_Any Window_open(Window* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open"));
}


jb_Any Window_open(Window* self , const jb_USVString* url) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url)));
}


jb_Any Window_open(Window* self , const jb_USVString* url, const jb_DOMString* target) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url), em_Val_from(target)));
}


jb_Any Window_open(Window* self , const jb_USVString* url, const jb_DOMString* target, const jb_DOMString* features) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url), em_Val_from(target), em_Val_from(features)));
}


Navigator Window_navigator(const Window *self) {
    return em_Val_as(Navigator, em_Val_get(EventTarget_as_val(self->inner), "navigator"));
}


Navigator Window_clientInformation(const Window *self) {
    return em_Val_as(Navigator, em_Val_get(EventTarget_as_val(self->inner), "clientInformation"));
}


bool Window_originAgentCluster(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "originAgentCluster"));
}


jb_Undefined Window_alert(Window* self , const jb_DOMString* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "alert", em_Val_from(message)));
}


bool Window_confirm(Window* self ) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "confirm"));
}


bool Window_confirm(Window* self , const jb_DOMString* message) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "confirm", em_Val_from(message)));
}


jb_DOMString Window_prompt(Window* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt"));
}


jb_DOMString Window_prompt(Window* self , const jb_DOMString* message) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt", em_Val_from(message)));
}


jb_DOMString Window_prompt(Window* self , const jb_DOMString* message, const jb_DOMString* default_) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt", em_Val_from(message), em_Val_from(default_)));
}


jb_Undefined Window_print(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "print"));
}


jb_Undefined Window_postMessage(Window* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined Window_postMessage(Window* self , const jb_Any* message, const WindowPostMessageOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


bool Window_credentialless(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "credentialless"));
}


short Window_orientation(const Window *self) {
    return em_Val_as(short, em_Val_get(EventTarget_as_val(self->inner), "orientation"));
}


jb_Any Window_onorientationchange(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onorientationchange"));
}


void Window_set_onorientationchange(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onorientationchange", value);
}


CookieStore Window_cookieStore(const Window *self) {
    return em_Val_as(CookieStore, em_Val_get(EventTarget_as_val(self->inner), "cookieStore"));
}


jb_Undefined Window_navigate(Window* self , const SpatialNavigationDirection* dir) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(dir)));
}


Viewport Window_viewport(const Window *self) {
    return em_Val_as(Viewport, em_Val_get(EventTarget_as_val(self->inner), "viewport"));
}


MediaQueryList Window_matchMedia(Window* self , const jb_CSSOMString* query) {
    return em_Val_as(MediaQueryList, em_Val_call(EventTarget_as_val(self->inner), "matchMedia", em_Val_from(query)));
}


Screen Window_screen(const Window *self) {
    return em_Val_as(Screen, em_Val_get(EventTarget_as_val(self->inner), "screen"));
}


VisualViewport Window_visualViewport(const Window *self) {
    return em_Val_as(VisualViewport, em_Val_get(EventTarget_as_val(self->inner), "visualViewport"));
}


jb_Undefined Window_moveTo(Window* self , long x, long y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "moveTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Window_moveBy(Window* self , long x, long y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "moveBy", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Window_resizeTo(Window* self , long width, long height) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resizeTo", em_Val_from(width), em_Val_from(height)));
}


jb_Undefined Window_resizeBy(Window* self , long x, long y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resizeBy", em_Val_from(x), em_Val_from(y)));
}


long Window_innerWidth(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "innerWidth"));
}


long Window_innerHeight(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "innerHeight"));
}


double Window_scrollX(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "scrollX"));
}


double Window_pageXOffset(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "pageXOffset"));
}


double Window_scrollY(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "scrollY"));
}


double Window_pageYOffset(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "pageYOffset"));
}


jb_Undefined Window_scroll(Window* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "scroll", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Window_scrollTo(Window* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "scrollTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Window_scrollBy(Window* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "scrollBy", em_Val_from(x), em_Val_from(y)));
}


long Window_screenX(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "screenX"));
}


long Window_screenLeft(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "screenLeft"));
}


long Window_screenY(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "screenY"));
}


long Window_screenTop(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "screenTop"));
}


long Window_outerWidth(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "outerWidth"));
}


long Window_outerHeight(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), "outerHeight"));
}


double Window_devicePixelRatio(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "devicePixelRatio"));
}


CSSStyleProperties Window_getComputedStyle(Window* self , const Element* elt) {
    return em_Val_as(CSSStyleProperties, em_Val_call(EventTarget_as_val(self->inner), "getComputedStyle", em_Val_from(elt)));
}


CSSStyleProperties Window_getComputedStyle(Window* self , const Element* elt, const jb_CSSOMString* pseudoElt) {
    return em_Val_as(CSSStyleProperties, em_Val_call(EventTarget_as_val(self->inner), "getComputedStyle", em_Val_from(elt), em_Val_from(pseudoElt)));
}


jb_Promise Window_getDigitalGoodsService(Window* self , const jb_DOMString* serviceProvider) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDigitalGoodsService", em_Val_from(serviceProvider)));
}


DocumentPictureInPicture Window_documentPictureInPicture(const Window *self) {
    return em_Val_as(DocumentPictureInPicture, em_Val_get(EventTarget_as_val(self->inner), "documentPictureInPicture"));
}


jb_Any Window_event(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "event"));
}


Fence Window_fence(const Window *self) {
    return em_Val_as(Fence, em_Val_get(EventTarget_as_val(self->inner), "fence"));
}


jb_Promise Window_showOpenFilePicker(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showOpenFilePicker"));
}


jb_Promise Window_showOpenFilePicker(Window* self , const OpenFilePickerOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showOpenFilePicker", em_Val_from(options)));
}


jb_Promise Window_showSaveFilePicker(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showSaveFilePicker"));
}


jb_Promise Window_showSaveFilePicker(Window* self , const SaveFilePickerOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showSaveFilePicker", em_Val_from(options)));
}


jb_Promise Window_showDirectoryPicker(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showDirectoryPicker"));
}


jb_Promise Window_showDirectoryPicker(Window* self , const DirectoryPickerOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showDirectoryPicker", em_Val_from(options)));
}


jb_Undefined Window_captureEvents(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "captureEvents"));
}


jb_Undefined Window_releaseEvents(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "releaseEvents"));
}


External Window_external(const Window *self) {
    return em_Val_as(External, em_Val_get(EventTarget_as_val(self->inner), "external"));
}


jb_Promise Window_queryLocalFonts(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "queryLocalFonts"));
}


jb_Promise Window_queryLocalFonts(Window* self , const QueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "queryLocalFonts", em_Val_from(options)));
}


jb_Any Window_onappinstalled(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onappinstalled"));
}


void Window_set_onappinstalled(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onappinstalled", value);
}


jb_Any Window_onbeforeinstallprompt(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onbeforeinstallprompt"));
}


void Window_set_onbeforeinstallprompt(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onbeforeinstallprompt", value);
}


jb_Any Window_ondeviceorientation(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondeviceorientation"));
}


void Window_set_ondeviceorientation(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondeviceorientation", value);
}


jb_Any Window_ondeviceorientationabsolute(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondeviceorientationabsolute"));
}


void Window_set_ondeviceorientationabsolute(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondeviceorientationabsolute", value);
}


jb_Any Window_ondevicemotion(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondevicemotion"));
}


void Window_set_ondevicemotion(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondevicemotion", value);
}


PortalHost Window_portalHost(const Window *self) {
    return em_Val_as(PortalHost, em_Val_get(EventTarget_as_val(self->inner), "portalHost"));
}


unsigned long Window_requestIdleCallback(Window* self , const jb_Function* callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestIdleCallback", em_Val_from(callback)));
}


unsigned long Window_requestIdleCallback(Window* self , const jb_Function* callback, const IdleRequestOptions* options) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestIdleCallback", em_Val_from(callback), em_Val_from(options)));
}


jb_Undefined Window_cancelIdleCallback(Window* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelIdleCallback", em_Val_from(handle)));
}


Selection Window_getSelection(Window* self ) {
    return em_Val_as(Selection, em_Val_call(EventTarget_as_val(self->inner), "getSelection"));
}


SharedStorage Window_sharedStorage(const Window *self) {
    return em_Val_as(SharedStorage, em_Val_get(EventTarget_as_val(self->inner), "sharedStorage"));
}


SpeechSynthesis Window_speechSynthesis(const Window *self) {
    return em_Val_as(SpeechSynthesis, em_Val_get(EventTarget_as_val(self->inner), "speechSynthesis"));
}


LaunchQueue Window_launchQueue(const Window *self) {
    return em_Val_as(LaunchQueue, em_Val_get(EventTarget_as_val(self->inner), "launchQueue"));
}


jb_Promise Window_getScreenDetails(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getScreenDetails"));
}


jb_Any Window_onbeforexrselect(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onbeforexrselect"));
}


void Window_set_onbeforexrselect(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onbeforexrselect", value);
}


jb_Any Window_onportalactivate(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onportalactivate"));
}


void Window_set_onportalactivate(Window* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onportalactivate", value);
}


Crypto Window_crypto(const Window *self) {
    return em_Val_as(Crypto, em_Val_get(EventTarget_as_val(self->inner), "crypto"));
}


unsigned long Window_requestAnimationFrame(Window* self , const jb_Function* callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestAnimationFrame", em_Val_from(callback)));
}


jb_Undefined Window_cancelAnimationFrame(Window* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelAnimationFrame", em_Val_from(handle)));
}


Storage Window_sessionStorage(const Window *self) {
    return em_Val_as(Storage, em_Val_get(EventTarget_as_val(self->inner), "sessionStorage"));
}


Storage Window_localStorage(const Window *self) {
    return em_Val_as(Storage, em_Val_get(EventTarget_as_val(self->inner), "localStorage"));
}

