#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WorkerLocation WorkerLocation;
typedef struct WorkerNavigator WorkerNavigator;
typedef struct FontFaceSet FontFaceSet;
typedef struct Crypto Crypto;


/**
 * @brief Interface WorkerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkerGlobalScope)
 */
DECLARE_EMLITE_TYPE(WorkerGlobalScope, EventTarget);

/**
 * @brief Gets the `self` property. 
*/
WorkerGlobalScope WorkerGlobalScope_self(const WorkerGlobalScope *self);

/**
 * @brief Gets the `location` property. 
*/
WorkerLocation WorkerGlobalScope_location(const WorkerGlobalScope *self);

/**
 * @brief Gets the `navigator` property. 
*/
WorkerNavigator WorkerGlobalScope_navigator(const WorkerGlobalScope *self);

/**
 * @brief Calls the `importScripts` method. 
*/
jb_Undefined WorkerGlobalScope_importScripts(WorkerGlobalScope* self , jb_Any * urls);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any WorkerGlobalScope_onerror(const WorkerGlobalScope *self);

/**
 * @brief Sets the `onerror` property. 
*/
void WorkerGlobalScope_set_onerror(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onlanguagechange` property. 
*/
jb_Any WorkerGlobalScope_onlanguagechange(const WorkerGlobalScope *self);

/**
 * @brief Sets the `onlanguagechange` property. 
*/
void WorkerGlobalScope_set_onlanguagechange(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onoffline` property. 
*/
jb_Any WorkerGlobalScope_onoffline(const WorkerGlobalScope *self);

/**
 * @brief Sets the `onoffline` property. 
*/
void WorkerGlobalScope_set_onoffline(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `ononline` property. 
*/
jb_Any WorkerGlobalScope_ononline(const WorkerGlobalScope *self);

/**
 * @brief Sets the `ononline` property. 
*/
void WorkerGlobalScope_set_ononline(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onrejectionhandled` property. 
*/
jb_Any WorkerGlobalScope_onrejectionhandled(const WorkerGlobalScope *self);

/**
 * @brief Sets the `onrejectionhandled` property. 
*/
void WorkerGlobalScope_set_onrejectionhandled(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `onunhandledrejection` property. 
*/
jb_Any WorkerGlobalScope_onunhandledrejection(const WorkerGlobalScope *self);

/**
 * @brief Sets the `onunhandledrejection` property. 
*/
void WorkerGlobalScope_set_onunhandledrejection(WorkerGlobalScope* self, jb_Any * value);

/**
 * @brief Gets the `fonts` property. 
*/
FontFaceSet WorkerGlobalScope_fonts(const WorkerGlobalScope *self);

/**
 * @brief Gets the `crypto` property. 
*/
Crypto WorkerGlobalScope_crypto(const WorkerGlobalScope *self);

#ifdef __cplusplus
}
#endif
