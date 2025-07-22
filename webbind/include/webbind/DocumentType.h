#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"


typedef struct {
  Node inner;
} DocumentType;


DECLARE_EMLITE_TYPE(DocumentType, Node);

jb_DOMString DocumentType_name( const DocumentType *self);

jb_DOMString DocumentType_publicId( const DocumentType *self);

jb_DOMString DocumentType_systemId( const DocumentType *self);

jb_Undefined DocumentType_before(DocumentType* self , const jb_Any* nodes);

jb_Undefined DocumentType_after(DocumentType* self , const jb_Any* nodes);

jb_Undefined DocumentType_replaceWith(DocumentType* self , const jb_Any* nodes);

jb_Undefined DocumentType_remove(DocumentType* self );
