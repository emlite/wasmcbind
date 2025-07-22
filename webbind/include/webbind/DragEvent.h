#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"

typedef struct DataTransfer DataTransfer;


typedef struct {
  MouseEvent inner;
} DragEvent;


DECLARE_EMLITE_TYPE(DragEvent, MouseEvent);

DragEvent DragEvent_new(const jb_DOMString* type);

DragEvent DragEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

DataTransfer DragEvent_dataTransfer( const DragEvent *self);
