#include "webbind/Document.h"
#include <jsbind/jsbind.h>
#include <webbind/webbind.h>

// using jsbind::Console;
// using jsbind::Function;

int main() {
    // Console con;
    Window win = window();
    Document document = Window_document(&win);
    em_Val body_val = em_Val_from_string("body");
    HTMLBodyElement body = Document_getElementsByTagName(&document, &jb_DOMString_from_val(&body_val));
    // auto bodies   = document.getElementsByTagName("body");
    // if (bodies.length() == 0) {
    //     con.log("I Ain't got Nobody!");
    //     return -1;
    // }
    // auto body   = bodies.item(0);
    // auto button = document.createElement("BUTTON")
    //                   .as<HTMLButtonElement>();
    // button.textContent("Click me");
    // button.addEventListener(
    //     "click",
    //     Function::Fn<void(PointerEvent)>([=](auto e) {
    //         con.log(e.clientX());
    //     })
    // );
    // body.appendChild(button);
    // auto style = button.style();
    // style.setProperty("color", "red");
    // style.setProperty("background-color", "#aaf");
    // style.setProperty("border", "solid");
}