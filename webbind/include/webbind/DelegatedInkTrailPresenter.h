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

DECLARE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);

Element DelegatedInkTrailPresenter_presentationArea(const DelegatedInkTrailPresenter *self);

jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , PointerEvent * event, InkTrailStyle * style);

#ifdef __cplusplus
}
#endif
