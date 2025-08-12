#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct PointerEvent PointerEvent;
typedef struct InkTrailStyle InkTrailStyle;


/**
 * @brief Interface DelegatedInkTrailPresenter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DelegatedInkTrailPresenter)
 */
DECLARE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);

/**
 * @brief Gets the `presentationArea` property. 
*/
Element DelegatedInkTrailPresenter_presentationArea(const DelegatedInkTrailPresenter *self);

/**
 * @brief Calls the `updateInkTrailStartPoint` method. 
*/
jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , PointerEvent * event, InkTrailStyle * style);

#ifdef __cplusplus
}
#endif
