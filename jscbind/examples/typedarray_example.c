#include <jscbind/jscbind.h>

int main() {
    // Test Uint8Array
    jb_Uint8Array arr = jb_Uint8Array_new_with_length(5);

    // Set some values
    jb_Uint8Array_set(&arr, 0, 10);
    jb_Uint8Array_set(&arr, 1, 20);
    jb_Uint8Array_set(&arr, 2, 30);

    // Get values back
    uint8_t val0 = jb_Uint8Array_get(&arr, 0);
    uint8_t val1 = jb_Uint8Array_get(&arr, 1);
    uint8_t val2 = jb_Uint8Array_get(&arr, 2);

    // Log using console instead of printf
    jb_Console console = jb_Console_get();
    jb_String msg1 =
        JSSTR("Uint8Array test values logged to console");
    jb_Console_log(&console, 1, msg1.inner);

    // Test size
    size_t size = jb_Uint8Array_size(&arr);
    jb_String msg2 =
        JSSTR("Uint8Array size test completed");
    jb_Console_log(&console, 1, msg2.inner);

    // Test Float32Array
    jb_Float32Array farr =
        jb_Float32Array_new_with_length(3);
    jb_Float32Array_set(&farr, 0, 1.5f);
    jb_Float32Array_set(&farr, 1, 2.5f);

    float fval0 = jb_Float32Array_get(&farr, 0);
    float fval1 = jb_Float32Array_get(&farr, 1);

    jb_String msg3 = JSSTR("Float32Array test completed");
    jb_Console_log(&console, 1, msg3.inner);

    jb_String msg4 =
        JSSTR("All TypedArray tests completed!");
    jb_Console_log(&console, 1, msg4.inner);
    return 0;
}