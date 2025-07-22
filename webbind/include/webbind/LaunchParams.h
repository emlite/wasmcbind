#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystemHandle FileSystemHandle;


typedef struct {
  em_Val inner;
} LaunchParams;


DECLARE_EMLITE_TYPE(LaunchParams, em_Val);

jb_DOMString LaunchParams_targetURL( const LaunchParams *self);

jb_FrozenArray LaunchParams_files( const LaunchParams *self);
