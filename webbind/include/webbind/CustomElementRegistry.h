#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ElementDefinitionOptions ElementDefinitionOptions;
typedef struct Node Node;


typedef struct {
  em_Val inner;
} ElementDefinitionOptions;


DECLARE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);

jb_DOMString ElementDefinitionOptions_extends( const ElementDefinitionOptions *self);

void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} CustomElementRegistry;


DECLARE_EMLITE_TYPE(CustomElementRegistry, em_Val);

CustomElementRegistry CustomElementRegistry_new();

jb_Undefined CustomElementRegistry_define(CustomElementRegistry* self , const jb_DOMString* name, const jb_Function* constructor);

jb_Undefined CustomElementRegistry_define(CustomElementRegistry* self , const jb_DOMString* name, const jb_Function* constructor, const ElementDefinitionOptions* options);

jb_Any CustomElementRegistry_get(CustomElementRegistry* self , const jb_DOMString* name);

jb_DOMString CustomElementRegistry_getName(CustomElementRegistry* self , const jb_Function* constructor);

jb_Promise CustomElementRegistry_whenDefined(CustomElementRegistry* self , const jb_DOMString* name);

jb_Undefined CustomElementRegistry_upgrade(CustomElementRegistry* self , const Node* root);

jb_Undefined CustomElementRegistry_initialize(CustomElementRegistry* self , const Node* root);
