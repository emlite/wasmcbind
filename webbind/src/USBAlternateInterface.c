#include <webbind/USBAlternateInterface.h>
#include <webbind/USBEndpoint.h>
#include <webbind/USBInterface.h>


DEFINE_EMLITE_TYPE(USBAlternateInterface, em_Val);


USBAlternateInterface USBAlternateInterface_new(const USBInterface* deviceInterface, unsigned char alternateSetting) : em_Val(em_Val_global("USBAlternateInterface").new_(em_Val_from(deviceInterface), em_Val_from(alternateSetting))) {
        return USBAlternateInterface(em_Val_new(em_Val_global("USBAlternateInterface", em_Val_from(deviceInterface), em_Val_from(alternateSetting)));
      }


unsigned char USBAlternateInterface_alternateSetting(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "alternateSetting"));
}


unsigned char USBAlternateInterface_interfaceClass(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "interfaceClass"));
}


unsigned char USBAlternateInterface_interfaceSubclass(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "interfaceSubclass"));
}


unsigned char USBAlternateInterface_interfaceProtocol(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "interfaceProtocol"));
}


jb_DOMString USBAlternateInterface_interfaceName(const USBAlternateInterface *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "interfaceName"));
}


jb_FrozenArray USBAlternateInterface_endpoints(const USBAlternateInterface *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "endpoints"));
}

