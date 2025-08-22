#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct IntrinsicSizes IntrinsicSizes;
typedef struct LayoutFragment LayoutFragment;
typedef struct LayoutConstraintsOptions LayoutConstraintsOptions;
typedef struct ChildBreakToken ChildBreakToken;


/**
 * @brief Interface LayoutChild
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutChild)
 */
DECLARE_EMLITE_TYPE(LayoutChild, em_Val);

/**
 * @brief Gets the `styleMap` property. 
*/
StylePropertyMapReadOnly LayoutChild_styleMap(const LayoutChild *self);

/**
 * @brief Calls the `intrinsicSizes` method. 
*/
jb_Promise LayoutChild_intrinsicSizes(LayoutChild* self );

/**
 * @brief Calls the `layoutNextFragment` method. 
*/
jb_Promise LayoutChild_layoutNextFragment(LayoutChild* self , LayoutConstraintsOptions * constraints, ChildBreakToken * breakToken);

#ifdef __cplusplus
}
#endif
