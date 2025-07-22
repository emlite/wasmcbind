#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct ResizeObserverSize ResizeObserverSize;


typedef struct {
  em_Val inner;
} ResizeObserverEntry;


DECLARE_EMLITE_TYPE(ResizeObserverEntry, em_Val);

Element ResizeObserverEntry_target( const ResizeObserverEntry *self);

DOMRectReadOnly ResizeObserverEntry_contentRect( const ResizeObserverEntry *self);

jb_FrozenArray ResizeObserverEntry_borderBoxSize( const ResizeObserverEntry *self);

jb_FrozenArray ResizeObserverEntry_contentBoxSize( const ResizeObserverEntry *self);

jb_FrozenArray ResizeObserverEntry_devicePixelContentBoxSize( const ResizeObserverEntry *self);
