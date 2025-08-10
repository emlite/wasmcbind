#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct IntrinsicSizes IntrinsicSizes;
typedef struct LayoutFragment LayoutFragment;
typedef struct LayoutConstraintsOptions LayoutConstraintsOptions;
typedef struct ChildBreakToken ChildBreakToken;

DECLARE_EMLITE_TYPE(LayoutChild, em_Val);

StylePropertyMapReadOnly LayoutChild_styleMap(const LayoutChild *self);

jb_Promise LayoutChild_intrinsicSizes(LayoutChild* self );

jb_Promise LayoutChild_layoutNextFragment(LayoutChild* self , LayoutConstraintsOptions * constraints, ChildBreakToken * breakToken);

#ifdef __cplusplus
}
#endif
