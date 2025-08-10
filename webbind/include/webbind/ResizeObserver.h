#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct ResizeObserverOptions ResizeObserverOptions;

DECLARE_EMLITE_TYPE(ResizeObserver, em_Val);

ResizeObserver ResizeObserver_new(jb_Function * callback);

jb_Undefined ResizeObserver_observe0(ResizeObserver* self , Element * target);

jb_Undefined ResizeObserver_observe1(ResizeObserver* self , Element * target, ResizeObserverOptions * options);

jb_Undefined ResizeObserver_unobserve(ResizeObserver* self , Element * target);

jb_Undefined ResizeObserver_disconnect(ResizeObserver* self );

#ifdef __cplusplus
}
#endif
