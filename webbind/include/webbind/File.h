#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Blob.h"
#include "enums.h"


typedef struct {
  Blob inner;
} File;


DECLARE_EMLITE_TYPE(File, Blob);

File File_new(const jb_Sequence* fileBits, const jb_USVString* fileName);

File File_new(const jb_Sequence* fileBits, const jb_USVString* fileName, const jb_Any* options);

jb_DOMString File_name( const File *self);

long long File_lastModified( const File *self);

jb_USVString File_webkitRelativePath( const File *self);
