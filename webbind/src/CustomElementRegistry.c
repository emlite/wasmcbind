#include <webbind/CustomElementRegistry.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);


jb_DOMString ElementDefinitionOptions_extends(const ElementDefinitionOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "extends"));
}


void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "extends", value);
}

DEFINE_EMLITE_TYPE(CustomElementRegistry, em_Val);


CustomElementRegistry CustomElementRegistry_new() : em_Val(em_Val_global("CustomElementRegistry").new_()) {
        return CustomElementRegistry(em_Val_new(em_Val_global("CustomElementRegistry", ));
      }


jb_Undefined CustomElementRegistry_define(CustomElementRegistry* self , const jb_DOMString* name, const jb_Function* constructor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "define", em_Val_from(name), em_Val_from(constructor)));
}


jb_Undefined CustomElementRegistry_define(CustomElementRegistry* self , const jb_DOMString* name, const jb_Function* constructor, const ElementDefinitionOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "define", em_Val_from(name), em_Val_from(constructor), em_Val_from(options)));
}


jb_Any CustomElementRegistry_get(CustomElementRegistry* self , const jb_DOMString* name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_DOMString CustomElementRegistry_getName(CustomElementRegistry* self , const jb_Function* constructor) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getName", em_Val_from(constructor)));
}


jb_Promise CustomElementRegistry_whenDefined(CustomElementRegistry* self , const jb_DOMString* name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "whenDefined", em_Val_from(name)));
}


jb_Undefined CustomElementRegistry_upgrade(CustomElementRegistry* self , const Node* root) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "upgrade", em_Val_from(root)));
}


jb_Undefined CustomElementRegistry_initialize(CustomElementRegistry* self , const Node* root) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(root)));
}

