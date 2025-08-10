#include <webbind/USBAlternateInterface.h>

#include <webbind/USBInterface.h>
#include <webbind/USBEndpoint.h>

DEFINE_EMLITE_TYPE(USBAlternateInterface, em_Val);


USBAlternateInterface USBAlternateInterface_new(USBInterface * deviceInterface, unsigned char alternateSetting) {
        em_Val vv = em_Val_new(em_Val_global("USBAlternateInterface") , em_Val_from(deviceInterface), em_Val_from(alternateSetting));
        return USBAlternateInterface_from_val(&vv);
      }


unsigned char USBAlternateInterface_alternateSetting(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternateSetting")));
}


unsigned char USBAlternateInterface_interfaceClass(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaceClass")));
}


unsigned char USBAlternateInterface_interfaceSubclass(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaceSubclass")));
}


unsigned char USBAlternateInterface_interfaceProtocol(const USBAlternateInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaceProtocol")));
}


jb_String USBAlternateInterface_interfaceName(const USBAlternateInterface *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaceName")));
}


jb_Array USBAlternateInterface_endpoints(const USBAlternateInterface *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endpoints")));
}

