#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLCollection.h"
#include "enums.h"


typedef struct {
  HTMLCollection inner;
} HTMLFormControlsCollection;


DECLARE_EMLITE_TYPE(HTMLFormControlsCollection, HTMLCollection);

jb_Any HTMLFormControlsCollection_namedItem(HTMLFormControlsCollection* self , const jb_DOMString* name);
