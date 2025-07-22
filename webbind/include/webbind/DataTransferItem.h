#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct File File;
typedef struct FileSystemEntry FileSystemEntry;
typedef struct FileSystemHandle FileSystemHandle;


typedef struct {
  em_Val inner;
} DataTransferItem;


DECLARE_EMLITE_TYPE(DataTransferItem, em_Val);

jb_DOMString DataTransferItem_kind( const DataTransferItem *self);

jb_DOMString DataTransferItem_type( const DataTransferItem *self);

jb_Undefined DataTransferItem_getAsString(DataTransferItem* self , const jb_Any* callback);

File DataTransferItem_getAsFile(DataTransferItem* self );

FileSystemEntry DataTransferItem_webkitGetAsEntry(DataTransferItem* self );

jb_Promise DataTransferItem_getAsFileSystemHandle(DataTransferItem* self );
