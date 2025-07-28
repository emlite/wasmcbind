#include <jsbind/Console.h>


Console Console_get() {
    return (Console){.inner = em_Val_from_handle(EMLITE_CONSOLE) };
}

void Console_log(const Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "log", nargs, ap);
    va_end(ap);
}

void Console_warn(const Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "warn", nargs, ap);
    va_end(ap);
}

void Console_info(const Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "info", nargs, ap);
    va_end(ap);
}

void Console_clear(const Console *con) {
    em_Val_call(con->inner, "clear");
}