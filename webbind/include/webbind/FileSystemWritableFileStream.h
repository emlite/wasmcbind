#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStream.h"
#include "enums.h"


typedef struct {
  WritableStream inner;
} FileSystemWritableFileStream;


DECLARE_EMLITE_TYPE(FileSystemWritableFileStream, WritableStream);

jb_Promise FileSystemWritableFileStream_write(FileSystemWritableFileStream* self , const jb_Any* data);

jb_Promise FileSystemWritableFileStream_seek(FileSystemWritableFileStream* self , long long position);

jb_Promise FileSystemWritableFileStream_truncate(FileSystemWritableFileStream* self , long long size);
