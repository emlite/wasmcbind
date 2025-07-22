#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;
typedef struct HTMLElement HTMLElement;
typedef struct HTMLFormElement HTMLFormElement;


typedef struct {
  em_Val inner;
} FormData;


DECLARE_EMLITE_TYPE(FormData, em_Val);

FormData FormData_new();

FormData FormData_new(const HTMLFormElement* form);

FormData FormData_new(const HTMLFormElement* form, const HTMLElement* submitter);

jb_Undefined FormData_append(FormData* self , const jb_USVString* name, const Blob* blobValue);

jb_Undefined FormData_append(FormData* self , const jb_USVString* name, const Blob* blobValue, const jb_USVString* filename);

jb_Undefined FormData_delete_(FormData* self , const jb_USVString* name);

jb_Any FormData_get(FormData* self , const jb_USVString* name);

jb_Sequence FormData_getAll(FormData* self , const jb_USVString* name);

bool FormData_has(FormData* self , const jb_USVString* name);

jb_Undefined FormData_set(FormData* self , const jb_USVString* name, const Blob* blobValue);

jb_Undefined FormData_set(FormData* self , const jb_USVString* name, const Blob* blobValue, const jb_USVString* filename);
