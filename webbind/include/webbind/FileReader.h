#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct Blob Blob;
typedef struct DOMException DOMException;


typedef struct {
  EventTarget inner;
} FileReader;


DECLARE_EMLITE_TYPE(FileReader, EventTarget);

FileReader FileReader_new();

jb_Undefined FileReader_readAsArrayBuffer(FileReader* self , const Blob* blob);

jb_Undefined FileReader_readAsBinaryString(FileReader* self , const Blob* blob);

jb_Undefined FileReader_readAsText(FileReader* self , const Blob* blob);

jb_Undefined FileReader_readAsText(FileReader* self , const Blob* blob, const jb_DOMString* encoding);

jb_Undefined FileReader_readAsDataURL(FileReader* self , const Blob* blob);

jb_Undefined FileReader_abort(FileReader* self );

unsigned short FileReader_readyState( const FileReader *self);

jb_Any FileReader_result( const FileReader *self);

DOMException FileReader_error( const FileReader *self);

jb_Any FileReader_onloadstart( const FileReader *self);

void FileReader_set_onloadstart(FileReader* self, const jb_Any* value);

jb_Any FileReader_onprogress( const FileReader *self);

void FileReader_set_onprogress(FileReader* self, const jb_Any* value);

jb_Any FileReader_onload( const FileReader *self);

void FileReader_set_onload(FileReader* self, const jb_Any* value);

jb_Any FileReader_onabort( const FileReader *self);

void FileReader_set_onabort(FileReader* self, const jb_Any* value);

jb_Any FileReader_onerror( const FileReader *self);

void FileReader_set_onerror(FileReader* self, const jb_Any* value);

jb_Any FileReader_onloadend( const FileReader *self);

void FileReader_set_onloadend(FileReader* self, const jb_Any* value);
