#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DataTransferItem DataTransferItem;
typedef struct File File;


typedef struct {
  em_Val inner;
} DataTransferItemList;


DECLARE_EMLITE_TYPE(DataTransferItemList, em_Val);

unsigned long DataTransferItemList_length( const DataTransferItemList *self);

DataTransferItem DataTransferItemList_add(DataTransferItemList* self , const File* data);

jb_Undefined DataTransferItemList_remove(DataTransferItemList* self , unsigned long index);

jb_Undefined DataTransferItemList_clear(DataTransferItemList* self );
