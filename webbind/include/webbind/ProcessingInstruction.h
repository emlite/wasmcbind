#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CharacterData.h"
#include "enums.h"

typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(ProcessingInstruction, CharacterData);

jb_DOMString ProcessingInstruction_target(const ProcessingInstruction *self);

CSSStyleSheet ProcessingInstruction_sheet(const ProcessingInstruction *self);
