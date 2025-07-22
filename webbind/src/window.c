#include <webbind/Window.h>
#include <webbind/window.h>
#include <emlite/emlite.h>

Window window() {
    return Window_from_val(emlite_Val_global("window"));
}