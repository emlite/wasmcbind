#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"

typedef struct DataTransfer DataTransfer;


DECLARE_EMLITE_TYPE(DragEvent, MouseEvent);

DragEvent DragEvent_new0(jb_DOMString * type);

DragEvent DragEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

DataTransfer DragEvent_dataTransfer( const DragEvent *self);
