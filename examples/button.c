#include <jsbind/jsbind.h>
#include <webbind/webbind.h>

Handle button_cb(Handle args, Handle data) {
    jb_Any val = jb_Any_from_handle(args);
    console_log(&val);
    console_log(&ANY("Button clicked!"));
    return em_Val_undefined().h;
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
    EventTarget_addEventListener0(
        (EventTarget *)&button,
        &DOMSTR("click"),
        &FUNC(button_cb, 0)
    );
    CSSStyleProperties style =
        HTMLElement_style((HTMLElement *)&button);
    CSSStyleDeclaration_setProperty0(
        (CSSStyleDeclaration *)&style,
        &CSStr("color"),
        &CSStr("red")
    );
    CSSStyleDeclaration_setProperty0(
        (CSSStyleDeclaration *)&style,
        &CSStr("background-color"),
        &CSStr("#aaf")
    );
    CSSStyleDeclaration_setProperty0(
        (CSSStyleDeclaration *)&style,
        &CSStr("border"),
        &CSStr("2px solid red")
    );
}