#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(MLOperand, em_Val);

MLOperandDataType MLOperand_dataType(const MLOperand *self);

jb_Array MLOperand_shape(const MLOperand *self);
