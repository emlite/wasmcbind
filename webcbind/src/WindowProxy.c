#include <webcbind/WindowProxy.h>
#include <webcbind/Window.h>
#include <emlite/emlite.h>

Window window() {
    em_Val vv = em_Val_global("window");
    return Window_from_val(&vv);
}