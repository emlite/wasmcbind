#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MLOperand;


DECLARE_EMLITE_TYPE(MLOperand, em_Val);

MLOperandDataType MLOperand_dataType( const MLOperand *self);

jb_FrozenArray MLOperand_shape( const MLOperand *self);
