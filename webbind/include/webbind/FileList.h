#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct File File;


typedef struct {
  em_Val inner;
} FileList;


DECLARE_EMLITE_TYPE(FileList, em_Val);

File FileList_item(FileList* self , unsigned long index);

unsigned long FileList_length( const FileList *self);
