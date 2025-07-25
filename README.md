# Wasm-cbind

C bindings to the web API.
(Still a work in progress)

## Example

```c
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
```

## Usage
The easiest is to use CMake's FetchContent:
In your CMakeLists.txt:
```cmake
cmake_minimum_required(VERSION 3.20)
project(projname)

include(FetchContent)

FetchContent_Declare(
    wasm-cbind
    GIT_REPOSITORY https://github.com/emlite/wasm-cbind.git
    GIT_TAG main
    GIT_SHALLOW True
)

# if targeting wasm32-unknown-unknown (freestanding)
set(EMLITE_USE_DLMALLOC ON CACHE BOOL " " FORCE)
FetchContent_MakeAvailable(wasmbind)

add_executable(main src/main.c)
target_link_libraries(main PRIVATE webbind::webbind)
set_target_properties(main PROPERTIES LINKER_LANGUAGE C SUFFIX .wasm LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export=main,--export-table,--import-memory,--export-memory,--strip-all")
```

Please also refer to the [README.browser.md](https://github.com/emlite/emlite-cpp/blob/main/README.browser.md) in the emlite-cpp repo on how to integrate with a web bundler (webpack).

You can then build your project using CMake.
```bash
cmake -Bbin -DCMAKE_TOOLCHAIN_FILE=./cmake/freestanding.cmake && cmake --build bin
```
Note that this repo contains a cmake toolchain files for wasm32-unknown-unknown (freestanding), and for wasi-libc and wasi-sysroot, which you're free to use as well. If you prefer to use emscripten or wasi-sdk, it's advisable to use the cmake toolchain file provided by them directly.

To be able to view the resulting wasm in your browser, you will need the [emlite](https://github.com/emlite/emlite-js) package. You can try it quickly using the unpkg cdn:
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <script type="module">
        import { Emlite } from "https://unpkg.com/emlite";

        window.onload = async () => {
            const emlite = new Emlite();
            const bytes = await emlite.readFile(new URL("./bin/examples/button.wasm", import.meta.url));
            let wasm = await WebAssembly.compile(bytes);
            let inst = await WebAssembly.instantiate(wasm, {
                "env": emlite.env,
            });
            emlite.setExports(inst.exports);
            inst.exports.main();
        };
    </script>
</body>
</html>
```
This grabs emlite via unpkg. It's advisable however to use a bundler for the web, something like webpack for example. Please refer to the emlite readme on how to integrate it in a node-based project. You could also just vendor the emlite.js file in your project if you prefer.
Also note that loading wasm in the browser requires an http server. You can use python's http.server `python3 -m http.server`, or you can use the npm http-server package.