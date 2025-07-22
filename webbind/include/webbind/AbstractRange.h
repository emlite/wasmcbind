#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;


DECLARE_EMLITE_TYPE(AbstractRange, em_Val);

Node AbstractRange_startContainer( const AbstractRange *self);

unsigned long AbstractRange_startOffset( const AbstractRange *self);

Node AbstractRange_endContainer( const AbstractRange *self);

unsigned long AbstractRange_endOffset( const AbstractRange *self);

bool AbstractRange_collapsed( const AbstractRange *self);
