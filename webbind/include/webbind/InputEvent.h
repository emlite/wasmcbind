#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct DataTransfer DataTransfer;
typedef struct StaticRange StaticRange;


typedef struct {
  UIEvent inner;
} InputEvent;


DECLARE_EMLITE_TYPE(InputEvent, UIEvent);

InputEvent InputEvent_new(const jb_DOMString* type);

InputEvent InputEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_USVString InputEvent_data( const InputEvent *self);

bool InputEvent_isComposing( const InputEvent *self);

jb_DOMString InputEvent_inputType( const InputEvent *self);

DataTransfer InputEvent_dataTransfer( const InputEvent *self);

jb_Sequence InputEvent_getTargetRanges(InputEvent* self );
