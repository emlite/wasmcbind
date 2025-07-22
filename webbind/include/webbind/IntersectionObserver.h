#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;
typedef struct IntersectionObserverEntry IntersectionObserverEntry;


typedef struct {
  em_Val inner;
} IntersectionObserver;


DECLARE_EMLITE_TYPE(IntersectionObserver, em_Val);

IntersectionObserver IntersectionObserver_new(const jb_Function* callback);

IntersectionObserver IntersectionObserver_new(const jb_Function* callback, const jb_Any* options);

jb_Any IntersectionObserver_root( const IntersectionObserver *self);

jb_DOMString IntersectionObserver_rootMargin( const IntersectionObserver *self);

jb_DOMString IntersectionObserver_scrollMargin( const IntersectionObserver *self);

jb_FrozenArray IntersectionObserver_thresholds( const IntersectionObserver *self);

long IntersectionObserver_delay( const IntersectionObserver *self);

bool IntersectionObserver_trackVisibility( const IntersectionObserver *self);

jb_Undefined IntersectionObserver_observe(IntersectionObserver* self , const Element* target);

jb_Undefined IntersectionObserver_unobserve(IntersectionObserver* self , const Element* target);

jb_Undefined IntersectionObserver_disconnect(IntersectionObserver* self );

jb_Sequence IntersectionObserver_takeRecords(IntersectionObserver* self );
