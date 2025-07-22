#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

typedef struct Element Element;


typedef struct {
  Node inner;
} CharacterData;


DECLARE_EMLITE_TYPE(CharacterData, Node);

jb_DOMString CharacterData_data( const CharacterData *self);

void CharacterData_set_data(CharacterData* self, const jb_DOMString* value);

unsigned long CharacterData_length( const CharacterData *self);

jb_DOMString CharacterData_substringData(CharacterData* self , unsigned long offset, unsigned long count);

jb_Undefined CharacterData_appendData(CharacterData* self , const jb_DOMString* data);

jb_Undefined CharacterData_insertData(CharacterData* self , unsigned long offset, const jb_DOMString* data);

jb_Undefined CharacterData_deleteData(CharacterData* self , unsigned long offset, unsigned long count);

jb_Undefined CharacterData_replaceData(CharacterData* self , unsigned long offset, unsigned long count, const jb_DOMString* data);

Element CharacterData_previousElementSibling( const CharacterData *self);

Element CharacterData_nextElementSibling( const CharacterData *self);

jb_Undefined CharacterData_before(CharacterData* self , const jb_Any* nodes);

jb_Undefined CharacterData_after(CharacterData* self , const jb_Any* nodes);

jb_Undefined CharacterData_replaceWith(CharacterData* self , const jb_Any* nodes);

jb_Undefined CharacterData_remove(CharacterData* self );
