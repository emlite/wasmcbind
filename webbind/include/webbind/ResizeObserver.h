#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;
typedef struct ResizeObserverOptions ResizeObserverOptions;


typedef struct {
  em_Val inner;
} ResizeObserverOptions;


DECLARE_EMLITE_TYPE(ResizeObserverOptions, em_Val);

ResizeObserverBoxOptions ResizeObserverOptions_box( const ResizeObserverOptions *self);

void ResizeObserverOptions_set_box(ResizeObserverOptions* self, const ResizeObserverBoxOptions* value);
typedef struct {
  em_Val inner;
} ResizeObserver;


DECLARE_EMLITE_TYPE(ResizeObserver, em_Val);

ResizeObserver ResizeObserver_new(const jb_Function* callback);

jb_Undefined ResizeObserver_observe(ResizeObserver* self , const Element* target);

jb_Undefined ResizeObserver_observe(ResizeObserver* self , const Element* target, const ResizeObserverOptions* options);

jb_Undefined ResizeObserver_unobserve(ResizeObserver* self , const Element* target);

jb_Undefined ResizeObserver_disconnect(ResizeObserver* self );
