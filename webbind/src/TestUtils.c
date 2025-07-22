#include <webbind/TestUtils.h>


jb_Promise TestUtils_gc() {
    return em_Val_as(jb_Promise, em_Val_global("testutils").call("gc"));
}

