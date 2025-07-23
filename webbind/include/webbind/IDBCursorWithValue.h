#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "IDBCursor.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(IDBCursorWithValue, IDBCursor);

jb_Any IDBCursorWithValue_value(const IDBCursorWithValue *self);
