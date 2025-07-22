#include <webbind/KeyboardEvent.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(KeyboardEvent, UIEvent);


KeyboardEvent KeyboardEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("KeyboardEvent").new_(em_Val_from(type))) {
        return KeyboardEvent(em_Val_new(em_Val_global("KeyboardEvent", em_Val_from(type)));
      }


KeyboardEvent KeyboardEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("KeyboardEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return KeyboardEvent(em_Val_new(em_Val_global("KeyboardEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString KeyboardEvent_key(const KeyboardEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(UIEvent_as_val(self->inner), "key"));
}


jb_DOMString KeyboardEvent_code(const KeyboardEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(UIEvent_as_val(self->inner), "code"));
}


unsigned long KeyboardEvent_location(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), "location"));
}


bool KeyboardEvent_ctrlKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "ctrlKey"));
}


bool KeyboardEvent_shiftKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "shiftKey"));
}


bool KeyboardEvent_altKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "altKey"));
}


bool KeyboardEvent_metaKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "metaKey"));
}


bool KeyboardEvent_repeat(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "repeat"));
}


bool KeyboardEvent_isComposing(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "isComposing"));
}


bool KeyboardEvent_getModifierState(KeyboardEvent* self , const jb_DOMString* keyArg) {
    return em_Val_as(bool, em_Val_call(UIEvent_as_val(self->inner), "getModifierState", em_Val_from(keyArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey), em_Val_from(shiftKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey), em_Val_from(shiftKey), em_Val_from(metaKey)));
}


unsigned long KeyboardEvent_charCode(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), "charCode"));
}


unsigned long KeyboardEvent_keyCode(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), "keyCode"));
}

