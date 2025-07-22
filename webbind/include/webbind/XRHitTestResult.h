#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRPose XRPose;
typedef struct XRSpace XRSpace;
typedef struct XRAnchor XRAnchor;


typedef struct {
  em_Val inner;
} XRHitTestResult;


DECLARE_EMLITE_TYPE(XRHitTestResult, em_Val);

XRPose XRHitTestResult_getPose(XRHitTestResult* self , const XRSpace* baseSpace);

jb_Promise XRHitTestResult_createAnchor(XRHitTestResult* self );
