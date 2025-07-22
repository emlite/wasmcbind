#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

typedef struct CSSTransformComponent CSSTransformComponent;
typedef struct DOMMatrix DOMMatrix;


typedef struct {
  CSSStyleValue inner;
} CSSTransformValue;


DECLARE_EMLITE_TYPE(CSSTransformValue, CSSStyleValue);

CSSTransformValue CSSTransformValue_new(const jb_Sequence* transforms);

unsigned long CSSTransformValue_length( const CSSTransformValue *self);

bool CSSTransformValue_is2D( const CSSTransformValue *self);

DOMMatrix CSSTransformValue_toMatrix(CSSTransformValue* self );
