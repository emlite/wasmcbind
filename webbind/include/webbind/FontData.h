#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;


typedef struct {
  em_Val inner;
} FontData;


DECLARE_EMLITE_TYPE(FontData, em_Val);

jb_Promise FontData_blob(FontData* self );

jb_USVString FontData_postscriptName( const FontData *self);

jb_USVString FontData_fullName( const FontData *self);

jb_USVString FontData_family( const FontData *self);

jb_USVString FontData_style( const FontData *self);
