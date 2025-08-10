#include <webbind/MouseEvent.h>

#include <webbind/MouseEventInit.h>
#include <webbind/EventTarget.h>
#include <webbind/Window.h>

DEFINE_EMLITE_TYPE(MouseEvent, UIEvent);


MouseEvent MouseEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("MouseEvent") , em_Val_from(type));
        return MouseEvent_from_val(&vv);
      }


MouseEvent MouseEvent_new1(jb_String * type, MouseEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MouseEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MouseEvent_from_val(&vv);
      }


long MouseEvent_screenX(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("screenX")));
}


long MouseEvent_screenY(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("screenY")));
}


long MouseEvent_clientX(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("clientX")));
}


long MouseEvent_clientY(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("clientY")));
}


long MouseEvent_layerX(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("layerX")));
}


long MouseEvent_layerY(const MouseEvent *self) {
    return em_Val_as(long, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("layerY")));
}


bool MouseEvent_ctrlKey(const MouseEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("ctrlKey")));
}


bool MouseEvent_shiftKey(const MouseEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("shiftKey")));
}


bool MouseEvent_altKey(const MouseEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("altKey")));
}


bool MouseEvent_metaKey(const MouseEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("metaKey")));
}


short MouseEvent_button(const MouseEvent *self) {
    return em_Val_as(short, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("button")));
}


unsigned short MouseEvent_buttons(const MouseEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("buttons")));
}


EventTarget MouseEvent_relatedTarget(const MouseEvent *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("relatedTarget")));
}


bool MouseEvent_getModifierState(MouseEvent* self , jb_String * keyArg) {
    return em_Val_as(bool, em_Val_call(UIEvent_as_val(self->inner), "getModifierState", em_Val_from(keyArg)));
}


double MouseEvent_pageX(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("pageX")));
}


double MouseEvent_pageY(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("pageY")));
}


double MouseEvent_x(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("x")));
}


double MouseEvent_y(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("y")));
}


double MouseEvent_offsetX(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("offsetX")));
}


double MouseEvent_offsetY(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("offsetY")));
}


double MouseEvent_movementX(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("movementX")));
}


double MouseEvent_movementY(const MouseEvent *self) {
    return em_Val_as(double, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("movementY")));
}


jb_Undefined MouseEvent_initMouseEvent0(MouseEvent* self , jb_String * typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg)));
}


jb_Undefined MouseEvent_initMouseEvent1(MouseEvent* self , jb_String * typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined MouseEvent_initMouseEvent2(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined MouseEvent_initMouseEvent3(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined MouseEvent_initMouseEvent4(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg)));
}


jb_Undefined MouseEvent_initMouseEvent5(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg)));
}


jb_Undefined MouseEvent_initMouseEvent6(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg)));
}


jb_Undefined MouseEvent_initMouseEvent7(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg)));
}


jb_Undefined MouseEvent_initMouseEvent8(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg)));
}


jb_Undefined MouseEvent_initMouseEvent9(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg)));
}


jb_Undefined MouseEvent_initMouseEvent10(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg), em_Val_from(altKeyArg)));
}


jb_Undefined MouseEvent_initMouseEvent11(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg), em_Val_from(altKeyArg), em_Val_from(shiftKeyArg)));
}


jb_Undefined MouseEvent_initMouseEvent12(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg), em_Val_from(altKeyArg), em_Val_from(shiftKeyArg), em_Val_from(metaKeyArg)));
}


jb_Undefined MouseEvent_initMouseEvent13(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg), em_Val_from(altKeyArg), em_Val_from(shiftKeyArg), em_Val_from(metaKeyArg), em_Val_from(buttonArg)));
}


jb_Undefined MouseEvent_initMouseEvent14(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, EventTarget * relatedTargetArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initMouseEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg), em_Val_from(screenXArg), em_Val_from(screenYArg), em_Val_from(clientXArg), em_Val_from(clientYArg), em_Val_from(ctrlKeyArg), em_Val_from(altKeyArg), em_Val_from(shiftKeyArg), em_Val_from(metaKeyArg), em_Val_from(buttonArg), em_Val_from(relatedTargetArg)));
}

