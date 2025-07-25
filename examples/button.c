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
    CSSStyleProperties style_props =
        HTMLElement_style((HTMLElement *)&button);
    CSSStyleDeclaration *style = (CSSStyleDeclaration *)&style_props;
    CSSStyleDeclaration_setProperty0(
        style,
        &CSSStr("color"),
        &CSSStr("red")
    );
    CSSStyleDeclaration_setProperty0(
        style,
        &CSSStr("background-color"),
        &CSSStr("#aaf")
    );
    CSSStyleDeclaration_setProperty0(
        style,
        &CSSStr("border"),
        &CSSStr("2px solid red")
    );
}