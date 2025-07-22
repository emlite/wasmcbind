#include <webbind/Window.h>
#include <webbind/window.h>
#include <emlite/emlite.h>

Window wb_window() {
    return Window_from_val(emlite_Val_global("window"));
}