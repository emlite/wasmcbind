#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct SourceBuffer SourceBuffer;


DECLARE_EMLITE_TYPE(SourceBufferList, EventTarget);

unsigned long SourceBufferList_length( const SourceBufferList *self);

jb_Any SourceBufferList_onaddsourcebuffer( const SourceBufferList *self);

void SourceBufferList_set_onaddsourcebuffer(SourceBufferList* self, jb_Any * value);

jb_Any SourceBufferList_onremovesourcebuffer( const SourceBufferList *self);

void SourceBufferList_set_onremovesourcebuffer(SourceBufferList* self, jb_Any * value);
