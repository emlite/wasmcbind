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
#include <webbind/CSSStyleProperties.h>
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
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetOrigin")));
}


void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("targetOrigin"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(OpenFilePickerOptions, em_Val);


bool OpenFilePickerOptions_multiple(const OpenFilePickerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiple")));
}


void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SaveFilePickerOptions, em_Val);


jb_USVString SaveFilePickerOptions_suggestedName(const SaveFilePickerOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suggestedName")));
}


void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suggestedName"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);


jb_DOMString DirectoryPickerOptions_id(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Any DirectoryPickerOptions_startIn(const DirectoryPickerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startIn")));
}


void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startIn"), em_Val_from(value));
}


FileSystemPermissionMode DirectoryPickerOptions_mode(const DirectoryPickerOptions *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, FileSystemPermissionMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(QueryOptions, em_Val);


jb_Sequence QueryOptions_postscriptNames(const QueryOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postscriptNames")));
}


void QueryOptions_set_postscriptNames(QueryOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("postscriptNames"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(IdleRequestOptions, em_Val);


unsigned long IdleRequestOptions_timeout(const IdleRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Window, EventTarget);


jb_Any Window_window(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("window")));
}


jb_Any Window_self(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("self")));
}


Document Window_document(const Window *self) {
    return em_Val_as(Document, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("document")));
}


jb_DOMString Window_name(const Window *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


void Window_set_name(Window* self, jb_DOMString * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_Any Window_location(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("location")));
}


History Window_history(const Window *self) {
    return em_Val_as(History, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("history")));
}


Navigation Window_navigation(const Window *self) {
    return em_Val_as(Navigation, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("navigation")));
}


CustomElementRegistry Window_customElements(const Window *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("customElements")));
}


BarProp Window_locationbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("locationbar")));
}


BarProp Window_menubar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("menubar")));
}


BarProp Window_personalbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("personalbar")));
}


BarProp Window_scrollbars(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scrollbars")));
}


BarProp Window_statusbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("statusbar")));
}


BarProp Window_toolbar(const Window *self) {
    return em_Val_as(BarProp, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("toolbar")));
}


jb_DOMString Window_status(const Window *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("status")));
}


void Window_set_status(Window* self, jb_DOMString * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("status"), em_Val_from(value));
}


jb_Undefined Window_close(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


bool Window_closed(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("closed")));
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
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("frames")));
}


unsigned long Window_length(const Window *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("length")));
}


jb_Any Window_top(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("top")));
}


jb_Any Window_opener(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("opener")));
}


void Window_set_opener(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("opener"), em_Val_from(value));
}


jb_Any Window_parent(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("parent")));
}


Element Window_frameElement(const Window *self) {
    return em_Val_as(Element, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("frameElement")));
}


jb_Any Window_open0(Window* self ) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open"));
}


jb_Any Window_open1(Window* self , jb_USVString * url) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url)));
}


jb_Any Window_open2(Window* self , jb_USVString * url, jb_DOMString * target) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url), em_Val_from(target)));
}


jb_Any Window_open3(Window* self , jb_USVString * url, jb_DOMString * target, jb_DOMString * features) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "open", em_Val_from(url), em_Val_from(target), em_Val_from(features)));
}


Navigator Window_navigator(const Window *self) {
    return em_Val_as(Navigator, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("navigator")));
}


Navigator Window_clientInformation(const Window *self) {
    return em_Val_as(Navigator, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("clientInformation")));
}


bool Window_originAgentCluster(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("originAgentCluster")));
}


jb_Undefined Window_alert(Window* self , jb_DOMString * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "alert", em_Val_from(message)));
}


bool Window_confirm0(Window* self ) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "confirm"));
}


bool Window_confirm1(Window* self , jb_DOMString * message) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "confirm", em_Val_from(message)));
}


jb_DOMString Window_prompt0(Window* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt"));
}


jb_DOMString Window_prompt1(Window* self , jb_DOMString * message) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt", em_Val_from(message)));
}


jb_DOMString Window_prompt2(Window* self , jb_DOMString * message, jb_DOMString * default_) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "prompt", em_Val_from(message), em_Val_from(default_)));
}


jb_Undefined Window_print(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "print"));
}


jb_Undefined Window_postMessage0(Window* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined Window_postMessage1(Window* self , jb_Any * message, WindowPostMessageOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


bool Window_credentialless(const Window *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("credentialless")));
}


short Window_orientation(const Window *self) {
    return em_Val_as(short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("orientation")));
}


jb_Any Window_onorientationchange(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onorientationchange")));
}


void Window_set_onorientationchange(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onorientationchange"), em_Val_from(value));
}


CookieStore Window_cookieStore(const Window *self) {
    return em_Val_as(CookieStore, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("cookieStore")));
}


jb_Undefined Window_navigate(Window* self , SpatialNavigationDirection * dir) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(dir)));
}


Viewport Window_viewport(const Window *self) {
    return em_Val_as(Viewport, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("viewport")));
}


MediaQueryList Window_matchMedia(Window* self , jb_CSSOMString * query) {
    return em_Val_as(MediaQueryList, em_Val_call(EventTarget_as_val(self->inner), "matchMedia", em_Val_from(query)));
}


Screen Window_screen(const Window *self) {
    return em_Val_as(Screen, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screen")));
}


VisualViewport Window_visualViewport(const Window *self) {
    return em_Val_as(VisualViewport, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("visualViewport")));
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
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("innerWidth")));
}


long Window_innerHeight(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("innerHeight")));
}


double Window_scrollX(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scrollX")));
}


double Window_pageXOffset(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pageXOffset")));
}


double Window_scrollY(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scrollY")));
}


double Window_pageYOffset(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pageYOffset")));
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
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screenX")));
}


long Window_screenLeft(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screenLeft")));
}


long Window_screenY(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screenY")));
}


long Window_screenTop(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("screenTop")));
}


long Window_outerWidth(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("outerWidth")));
}


long Window_outerHeight(const Window *self) {
    return em_Val_as(long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("outerHeight")));
}


double Window_devicePixelRatio(const Window *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("devicePixelRatio")));
}


CSSStyleProperties Window_getComputedStyle0(Window* self , Element * elt) {
    return em_Val_as(CSSStyleProperties, em_Val_call(EventTarget_as_val(self->inner), "getComputedStyle", em_Val_from(elt)));
}


CSSStyleProperties Window_getComputedStyle1(Window* self , Element * elt, jb_CSSOMString * pseudoElt) {
    return em_Val_as(CSSStyleProperties, em_Val_call(EventTarget_as_val(self->inner), "getComputedStyle", em_Val_from(elt), em_Val_from(pseudoElt)));
}


jb_Promise Window_getDigitalGoodsService(Window* self , jb_DOMString * serviceProvider) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDigitalGoodsService", em_Val_from(serviceProvider)));
}


DocumentPictureInPicture Window_documentPictureInPicture(const Window *self) {
    return em_Val_as(DocumentPictureInPicture, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("documentPictureInPicture")));
}


jb_Any Window_event(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("event")));
}


Fence Window_fence(const Window *self) {
    return em_Val_as(Fence, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("fence")));
}


jb_Promise Window_showOpenFilePicker0(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showOpenFilePicker"));
}


jb_Promise Window_showOpenFilePicker1(Window* self , OpenFilePickerOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showOpenFilePicker", em_Val_from(options)));
}


jb_Promise Window_showSaveFilePicker0(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showSaveFilePicker"));
}


jb_Promise Window_showSaveFilePicker1(Window* self , SaveFilePickerOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showSaveFilePicker", em_Val_from(options)));
}


jb_Promise Window_showDirectoryPicker0(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showDirectoryPicker"));
}


jb_Promise Window_showDirectoryPicker1(Window* self , DirectoryPickerOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "showDirectoryPicker", em_Val_from(options)));
}


jb_Undefined Window_captureEvents(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "captureEvents"));
}


jb_Undefined Window_releaseEvents(Window* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "releaseEvents"));
}


External Window_external(const Window *self) {
    return em_Val_as(External, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("external")));
}


jb_Promise Window_queryLocalFonts0(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "queryLocalFonts"));
}


jb_Promise Window_queryLocalFonts1(Window* self , QueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "queryLocalFonts", em_Val_from(options)));
}


jb_Any Window_onappinstalled(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onappinstalled")));
}


void Window_set_onappinstalled(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onappinstalled"), em_Val_from(value));
}


jb_Any Window_onbeforeinstallprompt(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onbeforeinstallprompt")));
}


void Window_set_onbeforeinstallprompt(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onbeforeinstallprompt"), em_Val_from(value));
}


jb_Any Window_ondeviceorientation(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondeviceorientation")));
}


void Window_set_ondeviceorientation(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondeviceorientation"), em_Val_from(value));
}


jb_Any Window_ondeviceorientationabsolute(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondeviceorientationabsolute")));
}


void Window_set_ondeviceorientationabsolute(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondeviceorientationabsolute"), em_Val_from(value));
}


jb_Any Window_ondevicemotion(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondevicemotion")));
}


void Window_set_ondevicemotion(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondevicemotion"), em_Val_from(value));
}


PortalHost Window_portalHost(const Window *self) {
    return em_Val_as(PortalHost, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("portalHost")));
}


unsigned long Window_requestIdleCallback0(Window* self , jb_Function * callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestIdleCallback", em_Val_from(callback)));
}


unsigned long Window_requestIdleCallback1(Window* self , jb_Function * callback, IdleRequestOptions * options) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestIdleCallback", em_Val_from(callback), em_Val_from(options)));
}


jb_Undefined Window_cancelIdleCallback(Window* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelIdleCallback", em_Val_from(handle)));
}


Selection Window_getSelection(Window* self ) {
    return em_Val_as(Selection, em_Val_call(EventTarget_as_val(self->inner), "getSelection"));
}


SharedStorage Window_sharedStorage(const Window *self) {
    return em_Val_as(SharedStorage, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sharedStorage")));
}


SpeechSynthesis Window_speechSynthesis(const Window *self) {
    return em_Val_as(SpeechSynthesis, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("speechSynthesis")));
}


LaunchQueue Window_launchQueue(const Window *self) {
    return em_Val_as(LaunchQueue, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("launchQueue")));
}


jb_Promise Window_getScreenDetails(Window* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getScreenDetails"));
}


jb_Any Window_onbeforexrselect(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onbeforexrselect")));
}


void Window_set_onbeforexrselect(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onbeforexrselect"), em_Val_from(value));
}


jb_Any Window_onportalactivate(const Window *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onportalactivate")));
}


void Window_set_onportalactivate(Window* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onportalactivate"), em_Val_from(value));
}


Crypto Window_crypto(const Window *self) {
    return em_Val_as(Crypto, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("crypto")));
}


unsigned long Window_requestAnimationFrame(Window* self , jb_Function * callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestAnimationFrame", em_Val_from(callback)));
}


jb_Undefined Window_cancelAnimationFrame(Window* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelAnimationFrame", em_Val_from(handle)));
}


Storage Window_sessionStorage(const Window *self) {
    return em_Val_as(Storage, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sessionStorage")));
}


Storage Window_localStorage(const Window *self) {
    return em_Val_as(Storage, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("localStorage")));
}

