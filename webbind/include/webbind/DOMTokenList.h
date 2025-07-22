#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} DOMTokenList;


DECLARE_EMLITE_TYPE(DOMTokenList, em_Val);

unsigned long DOMTokenList_length( const DOMTokenList *self);

jb_DOMString DOMTokenList_item(DOMTokenList* self , unsigned long index);

bool DOMTokenList_contains(DOMTokenList* self , const jb_DOMString* token);

jb_Undefined DOMTokenList_add(DOMTokenList* self , const jb_DOMString* tokens);

jb_Undefined DOMTokenList_remove(DOMTokenList* self , const jb_DOMString* tokens);

bool DOMTokenList_toggle(DOMTokenList* self , const jb_DOMString* token);

bool DOMTokenList_toggle(DOMTokenList* self , const jb_DOMString* token, bool force);

bool DOMTokenList_replace(DOMTokenList* self , const jb_DOMString* token, const jb_DOMString* newToken);

bool DOMTokenList_supports(DOMTokenList* self , const jb_DOMString* token);

jb_DOMString DOMTokenList_value( const DOMTokenList *self);

void DOMTokenList_set_value(DOMTokenList* self, const jb_DOMString* value);
