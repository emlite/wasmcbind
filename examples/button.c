#include <jsbind/jsbind.h>
#include <webbind/webbind.h>

jb_Any button_cb(jb_Array args, jb_Any *data) {
    jb_Any ev0 = jb_Array_get(args, 0);
    MouseEvent ev = MouseEvent_from_val(&ev0);
    console_log(&ANY("Button clicked at:"));
    console_log(&ANY(MouseEvent_clientX(&ev)));
    return ANY_JB(jb_Undefined_value());
}

int main() {
    Window win            = window();
    Document document     = Window_document(&win);
    HTMLCollection bodies = Document_getElementsByTagName(
        &document, &DOMSTR("body")
    );
    Element body   = HTMLCollection_item(&bodies, 0);
    Element button = Document_createElement0(
        &document, &DOMSTR("BUTTON")
    );
    Node_set_textContent(
        (Node *)&button, &DOMSTR("Click me")
    );
    Node_appendChild((Node *)&body, (Node *)&button);

    jb_Function btn_cb = jb_Function_from(button_cb, NULL);

    EventTarget_addEventListener0(
        (EventTarget *)&button, &DOMSTR("click"), &btn_cb
    );
    CSSStyleProperties style_props =
        HTMLElement_style((HTMLElement *)&button);
    CSSStyleDeclaration *style =
        (CSSStyleDeclaration *)&style_props;
    CSSStyleDeclaration_setProperty0(
        style, &CSSStr("color"), &CSSStr("red")
    );
    CSSStyleDeclaration_setProperty0(
        style, &CSSStr("background-color"), &CSSStr("#aaf")
    );
    CSSStyleDeclaration_setProperty0(
        style, &CSSStr("border"), &CSSStr("2px solid red")
    );
}