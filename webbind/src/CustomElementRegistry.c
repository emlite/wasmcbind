#include <webbind/CustomElementRegistry.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);


jb_DOMString ElementDefinitionOptions_extends(const ElementDefinitionOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extends")));
}


void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extends"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CustomElementRegistry, em_Val);


CustomElementRegistry CustomElementRegistry_new() {
        em_Val vv = em_Val_new(em_Val_global("CustomElementRegistry") );
        return CustomElementRegistry_from_val(&vv);
      }


jb_Undefined CustomElementRegistry_define0(CustomElementRegistry* self , jb_DOMString * name, jb_Function * constructor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "define", em_Val_from(name), em_Val_from(constructor)));
}


jb_Undefined CustomElementRegistry_define1(CustomElementRegistry* self , jb_DOMString * name, jb_Function * constructor, ElementDefinitionOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "define", em_Val_from(name), em_Val_from(constructor), em_Val_from(options)));
}


jb_Any CustomElementRegistry_get(CustomElementRegistry* self , jb_DOMString * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_DOMString CustomElementRegistry_getName(CustomElementRegistry* self , jb_Function * constructor) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getName", em_Val_from(constructor)));
}


jb_Promise CustomElementRegistry_whenDefined(CustomElementRegistry* self , jb_DOMString * name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "whenDefined", em_Val_from(name)));
}


jb_Undefined CustomElementRegistry_upgrade(CustomElementRegistry* self , Node * root) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "upgrade", em_Val_from(root)));
}


jb_Undefined CustomElementRegistry_initialize(CustomElementRegistry* self , Node * root) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initialize", em_Val_from(root)));
}

