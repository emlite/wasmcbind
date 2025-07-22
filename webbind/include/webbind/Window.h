#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "window.h"
#include "enums.h"

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
typedef struct CSSStyleDeclaration CSSStyleDeclaration;
typedef struct DigitalGoodsService DigitalGoodsService;
typedef struct DocumentPictureInPicture DocumentPictureInPicture;
typedef struct Fence Fence;
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


typedef struct {
  em_Val inner;
} WindowPostMessageOptions;


DECLARE_EMLITE_TYPE(WindowPostMessageOptions, em_Val);

jb_USVString WindowPostMessageOptions_targetOrigin( const WindowPostMessageOptions *self);

void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} OpenFilePickerOptions;


DECLARE_EMLITE_TYPE(OpenFilePickerOptions, em_Val);

bool OpenFilePickerOptions_multiple( const OpenFilePickerOptions *self);

void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value);
typedef struct {
  em_Val inner;
} SaveFilePickerOptions;


DECLARE_EMLITE_TYPE(SaveFilePickerOptions, em_Val);

jb_USVString SaveFilePickerOptions_suggestedName( const SaveFilePickerOptions *self);

void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} DirectoryPickerOptions;


DECLARE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);

jb_DOMString DirectoryPickerOptions_id( const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, const jb_DOMString* value);

jb_Any DirectoryPickerOptions_startIn( const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, const jb_Any* value);

FileSystemPermissionMode DirectoryPickerOptions_mode( const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, const FileSystemPermissionMode* value);
typedef struct {
  em_Val inner;
} QueryOptions;


DECLARE_EMLITE_TYPE(QueryOptions, em_Val);

jb_Sequence QueryOptions_postscriptNames( const QueryOptions *self);

void QueryOptions_set_postscriptNames(QueryOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} IdleRequestOptions;


DECLARE_EMLITE_TYPE(IdleRequestOptions, em_Val);

unsigned long IdleRequestOptions_timeout( const IdleRequestOptions *self);

void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value);
typedef struct {
  EventTarget inner;
} Window;


DECLARE_EMLITE_TYPE(Window, EventTarget);

jb_Any Window_window( const Window *self);

jb_Any Window_self( const Window *self);

Document Window_document( const Window *self);

jb_DOMString Window_name( const Window *self);

void Window_set_name(Window* self, const jb_DOMString* value);

jb_Any Window_location( const Window *self);

History Window_history( const Window *self);

Navigation Window_navigation( const Window *self);

CustomElementRegistry Window_customElements( const Window *self);

BarProp Window_locationbar( const Window *self);

BarProp Window_menubar( const Window *self);

BarProp Window_personalbar( const Window *self);

BarProp Window_scrollbars( const Window *self);

BarProp Window_statusbar( const Window *self);

BarProp Window_toolbar( const Window *self);

jb_DOMString Window_status( const Window *self);

void Window_set_status(Window* self, const jb_DOMString* value);

jb_Undefined Window_close(Window* self );

bool Window_closed( const Window *self);

jb_Undefined Window_stop(Window* self );

jb_Undefined Window_focus(Window* self );

jb_Undefined Window_blur(Window* self );

jb_Any Window_frames( const Window *self);

unsigned long Window_length( const Window *self);

jb_Any Window_top( const Window *self);

jb_Any Window_opener( const Window *self);

void Window_set_opener(Window* self, const jb_Any* value);

jb_Any Window_parent( const Window *self);

Element Window_frameElement( const Window *self);

jb_Any Window_open(Window* self );

jb_Any Window_open(Window* self , const jb_USVString* url);

jb_Any Window_open(Window* self , const jb_USVString* url, const jb_DOMString* target);

jb_Any Window_open(Window* self , const jb_USVString* url, const jb_DOMString* target, const jb_DOMString* features);

Navigator Window_navigator( const Window *self);

Navigator Window_clientInformation( const Window *self);

bool Window_originAgentCluster( const Window *self);

jb_Undefined Window_alert(Window* self , const jb_DOMString* message);

bool Window_confirm(Window* self );

bool Window_confirm(Window* self , const jb_DOMString* message);

jb_DOMString Window_prompt(Window* self );

jb_DOMString Window_prompt(Window* self , const jb_DOMString* message);

jb_DOMString Window_prompt(Window* self , const jb_DOMString* message, const jb_DOMString* default_);

jb_Undefined Window_print(Window* self );

jb_Undefined Window_postMessage(Window* self , const jb_Any* message);

jb_Undefined Window_postMessage(Window* self , const jb_Any* message, const WindowPostMessageOptions* options);

bool Window_credentialless( const Window *self);

short Window_orientation( const Window *self);

jb_Any Window_onorientationchange( const Window *self);

void Window_set_onorientationchange(Window* self, const jb_Any* value);

CookieStore Window_cookieStore( const Window *self);

jb_Undefined Window_navigate(Window* self , const SpatialNavigationDirection* dir);

Viewport Window_viewport( const Window *self);

MediaQueryList Window_matchMedia(Window* self , const jb_CSSOMString* query);

Screen Window_screen( const Window *self);

VisualViewport Window_visualViewport( const Window *self);

jb_Undefined Window_moveTo(Window* self , long x, long y);

jb_Undefined Window_moveBy(Window* self , long x, long y);

jb_Undefined Window_resizeTo(Window* self , long width, long height);

jb_Undefined Window_resizeBy(Window* self , long x, long y);

long Window_innerWidth( const Window *self);

long Window_innerHeight( const Window *self);

double Window_scrollX( const Window *self);

double Window_pageXOffset( const Window *self);

double Window_scrollY( const Window *self);

double Window_pageYOffset( const Window *self);

jb_Undefined Window_scroll(Window* self , double x, double y);

jb_Undefined Window_scrollTo(Window* self , double x, double y);

jb_Undefined Window_scrollBy(Window* self , double x, double y);

long Window_screenX( const Window *self);

long Window_screenLeft( const Window *self);

long Window_screenY( const Window *self);

long Window_screenTop( const Window *self);

long Window_outerWidth( const Window *self);

long Window_outerHeight( const Window *self);

double Window_devicePixelRatio( const Window *self);

CSSStyleProperties Window_getComputedStyle(Window* self , const Element* elt);

CSSStyleProperties Window_getComputedStyle(Window* self , const Element* elt, const jb_CSSOMString* pseudoElt);

jb_Promise Window_getDigitalGoodsService(Window* self , const jb_DOMString* serviceProvider);

DocumentPictureInPicture Window_documentPictureInPicture( const Window *self);

jb_Any Window_event( const Window *self);

Fence Window_fence( const Window *self);

jb_Promise Window_showOpenFilePicker(Window* self );

jb_Promise Window_showOpenFilePicker(Window* self , const OpenFilePickerOptions* options);

jb_Promise Window_showSaveFilePicker(Window* self );

jb_Promise Window_showSaveFilePicker(Window* self , const SaveFilePickerOptions* options);

jb_Promise Window_showDirectoryPicker(Window* self );

jb_Promise Window_showDirectoryPicker(Window* self , const DirectoryPickerOptions* options);

jb_Undefined Window_captureEvents(Window* self );

jb_Undefined Window_releaseEvents(Window* self );

External Window_external( const Window *self);

jb_Promise Window_queryLocalFonts(Window* self );

jb_Promise Window_queryLocalFonts(Window* self , const QueryOptions* options);

jb_Any Window_onappinstalled( const Window *self);

void Window_set_onappinstalled(Window* self, const jb_Any* value);

jb_Any Window_onbeforeinstallprompt( const Window *self);

void Window_set_onbeforeinstallprompt(Window* self, const jb_Any* value);

jb_Any Window_ondeviceorientation( const Window *self);

void Window_set_ondeviceorientation(Window* self, const jb_Any* value);

jb_Any Window_ondeviceorientationabsolute( const Window *self);

void Window_set_ondeviceorientationabsolute(Window* self, const jb_Any* value);

jb_Any Window_ondevicemotion( const Window *self);

void Window_set_ondevicemotion(Window* self, const jb_Any* value);

PortalHost Window_portalHost( const Window *self);

unsigned long Window_requestIdleCallback(Window* self , const jb_Function* callback);

unsigned long Window_requestIdleCallback(Window* self , const jb_Function* callback, const IdleRequestOptions* options);

jb_Undefined Window_cancelIdleCallback(Window* self , unsigned long handle);

Selection Window_getSelection(Window* self );

SharedStorage Window_sharedStorage( const Window *self);

SpeechSynthesis Window_speechSynthesis( const Window *self);

LaunchQueue Window_launchQueue( const Window *self);

jb_Promise Window_getScreenDetails(Window* self );

jb_Any Window_onbeforexrselect( const Window *self);

void Window_set_onbeforexrselect(Window* self, const jb_Any* value);

jb_Any Window_onportalactivate( const Window *self);

void Window_set_onportalactivate(Window* self, const jb_Any* value);

Crypto Window_crypto( const Window *self);

unsigned long Window_requestAnimationFrame(Window* self , const jb_Function* callback);

jb_Undefined Window_cancelAnimationFrame(Window* self , unsigned long handle);

Storage Window_sessionStorage( const Window *self);

Storage Window_localStorage( const Window *self);
