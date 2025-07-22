#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IDBKeyRange IDBKeyRange;


typedef struct {
  em_Val inner;
} IDBKeyRange;


DECLARE_EMLITE_TYPE(IDBKeyRange, em_Val);

jb_Any IDBKeyRange_lower( const IDBKeyRange *self);

jb_Any IDBKeyRange_upper( const IDBKeyRange *self);

bool IDBKeyRange_lowerOpen( const IDBKeyRange *self);

bool IDBKeyRange_upperOpen( const IDBKeyRange *self);

IDBKeyRange IDBKeyRange_only(IDBKeyRange* self , const jb_Any* value);

IDBKeyRange IDBKeyRange_lowerBound(IDBKeyRange* self , const jb_Any* lower);

IDBKeyRange IDBKeyRange_lowerBound(IDBKeyRange* self , const jb_Any* lower, bool open);

IDBKeyRange IDBKeyRange_upperBound(IDBKeyRange* self , const jb_Any* upper);

IDBKeyRange IDBKeyRange_upperBound(IDBKeyRange* self , const jb_Any* upper, bool open);

IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper);

IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper, bool lowerOpen);

IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper, bool lowerOpen, bool upperOpen);

bool IDBKeyRange_includes(IDBKeyRange* self , const jb_Any* key);
