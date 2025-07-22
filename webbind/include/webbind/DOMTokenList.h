#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(DOMTokenList, em_Val);

unsigned long DOMTokenList_length( const DOMTokenList *self);

jb_DOMString DOMTokenList_item(DOMTokenList* self , unsigned long index);

bool DOMTokenList_contains(DOMTokenList* self , jb_DOMString * token);

jb_Undefined DOMTokenList_add(DOMTokenList* self , jb_DOMString * tokens);

jb_Undefined DOMTokenList_remove(DOMTokenList* self , jb_DOMString * tokens);

bool DOMTokenList_toggle0(DOMTokenList* self , jb_DOMString * token);

bool DOMTokenList_toggle1(DOMTokenList* self , jb_DOMString * token, bool force);

bool DOMTokenList_replace(DOMTokenList* self , jb_DOMString * token, jb_DOMString * newToken);

bool DOMTokenList_supports(DOMTokenList* self , jb_DOMString * token);

jb_DOMString DOMTokenList_value( const DOMTokenList *self);

void DOMTokenList_set_value(DOMTokenList* self, jb_DOMString * value);
