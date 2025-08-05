#include <jsbind/jsbind.h>
#include <webbind/webbind.h>

jb_Any button_cb(const jb_Array *args, const jb_Any *data) {
    jb_Any ev0    = jb_Array_get(args, 0);
    MouseEvent ev = MouseEvent_from_val(&ev0);
    jb_Console con  = jb_Console_get();
    jb_Console_log(
        &con,
        2,
        ANY("Button clicked at:"),
        ANY(MouseEvent_clientX(&ev))
    );
    return ANY_JB(jb_Undefined_value());
}

int main() {
    emlite_init_handle_table();
    Window win            = window();
    Document document     = Window_document(&win);
    HTMLCollection bodies = Document_getElementsByTagName(
        &document, &JSSTR("body")
    );
    Element body   = HTMLCollection_item(&bodies, 0);
    Element button = Document_createElement0(
        &document, &JSSTR("BUTTON")
    );
    Node_set_textContent(&button, &JSSTR("Click me"));
    Node_appendChild(&body, &button);

    jb_Function btn_cb = jb_Function_from(button_cb, NULL);

    EventTarget_addEventListener0(
        &button, &JSSTR("click"), &btn_cb
    );
    CSSStyleProperties style = HTMLElement_style(&button);
    CSSStyleDeclaration_setProperty0(
        &style, &JSSTR("color"), &JSSTR("red")
    );
    CSSStyleDeclaration_setProperty0(
        &style, &JSSTR("background-color"), &JSSTR("#aaf")
    );
    CSSStyleDeclaration_setProperty0(
        &style, &JSSTR("border"), &JSSTR("2px solid red")
    );
}