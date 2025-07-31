#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

DECLARE_EMLITE_TYPE(jb_Console, em_Val);

jb_Console jb_Console_get();

void jb_Console_log(
    const jb_Console *con, size_t nargs, ...
);

void jb_Console_warn(
    const jb_Console *con, size_t nargs, ...
);

void jb_Console_info(
    const jb_Console *con, size_t nargs, ...
);

void jb_Console_clear(const jb_Console *con);