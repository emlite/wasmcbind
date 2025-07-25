#pragma once

#include <emlite/emlite.h>
#include "utils.h"
#include "Any.h"

DECLARE_EMLITE_TYPE(jb_Sequence, em_Val);

size_t jb_Sequence_length(jb_Sequence s);
jb_Any jb_Sequence_get(jb_Sequence s, size_t idx);
void jb_Sequence_set(jb_Sequence s, size_t idx, jb_Any v);

