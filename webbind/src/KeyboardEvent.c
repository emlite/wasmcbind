#include <webbind/KeyboardEvent.h>

#include <webbind/KeyboardEventInit.h>
#include <webbind/Window.h>

DEFINE_EMLITE_TYPE(KeyboardEvent, UIEvent);


KeyboardEvent KeyboardEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("KeyboardEvent") , em_Val_from(type));
        return KeyboardEvent_from_val(&vv);
      }


KeyboardEvent KeyboardEvent_new1(jb_String * type, KeyboardEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("KeyboardEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return KeyboardEvent_from_val(&vv);
      }


jb_String KeyboardEvent_key(const KeyboardEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("key")));
}


jb_String KeyboardEvent_code(const KeyboardEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("code")));
}


unsigned long KeyboardEvent_location(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("location")));
}


bool KeyboardEvent_ctrlKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("ctrlKey")));
}


bool KeyboardEvent_shiftKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("shiftKey")));
}


bool KeyboardEvent_altKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("altKey")));
}


bool KeyboardEvent_metaKey(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("metaKey")));
}


bool KeyboardEvent_repeat(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("repeat")));
}


bool KeyboardEvent_isComposing(const KeyboardEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("isComposing")));
}


bool KeyboardEvent_getModifierState(KeyboardEvent* self , jb_String * keyArg) {
    return em_Val_as(bool, em_Val_call(UIEvent_as_val(self->inner), "getModifierState", em_Val_from(keyArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent0(KeyboardEvent* self , jb_String * typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent1(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent2(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent3(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent4(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent5(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent6(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent7(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent8(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey), em_Val_from(shiftKey)));
}


jb_Undefined KeyboardEvent_initKeyboardEvent9(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initKeyboardEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(keyArg), em_Val_from(locationArg), em_Val_from(ctrlKey), em_Val_from(altKey), em_Val_from(shiftKey), em_Val_from(metaKey)));
}


unsigned long KeyboardEvent_charCode(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("charCode")));
}


unsigned long KeyboardEvent_keyCode(const KeyboardEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("keyCode")));
}

