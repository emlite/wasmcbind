#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "NodeList.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(RadioNodeList, NodeList);

jb_DOMString RadioNodeList_value(const RadioNodeList *self);

void RadioNodeList_set_value(RadioNodeList* self, jb_DOMString * value);
