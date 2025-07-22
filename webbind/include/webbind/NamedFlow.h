#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct Element Element;
typedef struct Node Node;


DECLARE_EMLITE_TYPE(NamedFlow, EventTarget);

jb_CSSOMString NamedFlow_name( const NamedFlow *self);

bool NamedFlow_overset( const NamedFlow *self);

jb_Sequence NamedFlow_getRegions(NamedFlow* self );

short NamedFlow_firstEmptyRegionIndex( const NamedFlow *self);

jb_Sequence NamedFlow_getContent(NamedFlow* self );

jb_Sequence NamedFlow_getRegionsByContent(NamedFlow* self , Node * node);
