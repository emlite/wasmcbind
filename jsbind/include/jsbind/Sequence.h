#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

DECLARE_EMLITE_TYPE(jb_Sequence, em_Val);

size_t jb_Sequence_length(const jb_Sequence *s);
jb_Any jb_Sequence_get(jb_Sequence *s, size_t idx);
void jb_Sequence_set(
    const jb_Sequence *s, size_t idx, const jb_Any *v
);
