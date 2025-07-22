#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XMLHttpRequestEventTarget.h"
#include "enums.h"


typedef struct {
  XMLHttpRequestEventTarget inner;
} XMLHttpRequestUpload;


DECLARE_EMLITE_TYPE(XMLHttpRequestUpload, XMLHttpRequestEventTarget);
