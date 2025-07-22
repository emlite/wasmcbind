#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;


DECLARE_EMLITE_TYPE(FileReaderSync, em_Val);

FileReaderSync FileReaderSync_new();

jb_ArrayBuffer FileReaderSync_readAsArrayBuffer(FileReaderSync* self , Blob * blob);

jb_DOMString FileReaderSync_readAsBinaryString(FileReaderSync* self , Blob * blob);

jb_DOMString FileReaderSync_readAsText0(FileReaderSync* self , Blob * blob);

jb_DOMString FileReaderSync_readAsText1(FileReaderSync* self , Blob * blob, jb_DOMString * encoding);

jb_DOMString FileReaderSync_readAsDataURL(FileReaderSync* self , Blob * blob);
