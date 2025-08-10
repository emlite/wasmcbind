#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IDBCursor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBCursorWithValue, IDBCursor);

jb_Any IDBCursorWithValue_value(const IDBCursorWithValue *self);

#ifdef __cplusplus
}
#endif
