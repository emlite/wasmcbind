#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} TransformStreamDefaultController;


DECLARE_EMLITE_TYPE(TransformStreamDefaultController, em_Val);

double TransformStreamDefaultController_desiredSize( const TransformStreamDefaultController *self);

jb_Undefined TransformStreamDefaultController_enqueue(TransformStreamDefaultController* self );

jb_Undefined TransformStreamDefaultController_enqueue(TransformStreamDefaultController* self , const jb_Any* chunk);

jb_Undefined TransformStreamDefaultController_error(TransformStreamDefaultController* self );

jb_Undefined TransformStreamDefaultController_error(TransformStreamDefaultController* self , const jb_Any* reason);

jb_Undefined TransformStreamDefaultController_terminate(TransformStreamDefaultController* self );
