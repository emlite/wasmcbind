#pragma once

#include "Any.h"
#include "Function.h"
#include "utils.h"
#include <emlite/emlite.h>

jb_Any Reflect_apply(
    const jb_Function *target,
    const jb_Any *thisArg,
    const jb_Array *argumentsList
);

jb_Any Reflect_construct(
    const jb_Function *target,
    const jb_Array *args,
    const jb_Any *newTarget
);

bool Reflect_defineProperty(
    const jb_Any *target, const jb_Any *key, const jb_Any *attributes
);

bool Reflect_deleteProperty(
    const jb_Any *target, const jb_Any *key
);

jb_Any Reflect_get(
    const jb_Any *target,
    const jb_Any *key,
    const jb_Any *receiver
);

jb_Any Reflect_getOwnPropertyDescriptor(
    const jb_Any *target, const jb_Any *key
);

jb_Any Reflect_getPrototypeOf(const jb_Any *target);

bool Reflect_has(const jb_Any *target, const jb_Any *key);

bool Reflect_isExtensible(const jb_Any *target);

jb_Array ownKeys(const jb_Any *target);

bool Reflect_preventExtensions(const jb_Any *target);

bool Reflect_set(
    const jb_Any *target,
    const jb_Any *key,
    const jb_Any *value,
    const jb_Any *receiver
);

bool Reflect_setPrototypeOf(
    const jb_Any *target, const jb_Any *proto
);
