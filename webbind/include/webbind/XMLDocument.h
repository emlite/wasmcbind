#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include <webbind/Document.h>
#include "enums.h"


typedef struct {
  Document inner;
} XMLDocument;


DECLARE_EMLITE_TYPE(XMLDocument, Document);
