#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;


typedef struct {
  em_Val inner;
} FileReaderSync;


DECLARE_EMLITE_TYPE(FileReaderSync, em_Val);

FileReaderSync FileReaderSync_new();

jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , const Blob* blob);

jb_DOMString FileReaderSync_readAsBinaryString(FileReaderSync* self , const Blob* blob);

jb_DOMString FileReaderSync_readAsText(FileReaderSync* self , const Blob* blob);

jb_DOMString FileReaderSync_readAsText(FileReaderSync* self , const Blob* blob, const jb_DOMString* encoding);

jb_DOMString FileReaderSync_readAsDataURL(FileReaderSync* self , const Blob* blob);
