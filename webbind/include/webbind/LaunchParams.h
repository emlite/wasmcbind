#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystemHandle FileSystemHandle;


DECLARE_EMLITE_TYPE(LaunchParams, em_Val);

jb_String LaunchParams_targetURL(const LaunchParams *self);

jb_Array LaunchParams_files(const LaunchParams *self);
