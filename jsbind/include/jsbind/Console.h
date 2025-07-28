#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

typedef struct Console {
    em_Val inner;
} Console;

Console Console_get();

void Console_log(const Console *con, size_t nargs, ...);

void Console_warn(const Console *con, size_t nargs, ...);

void Console_info(const Console *con, size_t nargs, ...);

void Console_clear(const Console *con);