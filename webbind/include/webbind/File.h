#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Blob.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(File, Blob);

File File_new0(jb_Sequence * fileBits, jb_USVString * fileName);

File File_new1(jb_Sequence * fileBits, jb_USVString * fileName, jb_Any * options);

jb_DOMString File_name(const File *self);

long long File_lastModified(const File *self);

jb_USVString File_webkitRelativePath(const File *self);
