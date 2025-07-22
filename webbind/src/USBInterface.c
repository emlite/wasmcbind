#include <webbind/USBInterface.h>
#include <webbind/USBAlternateInterface.h>
#include <webbind/USBConfiguration.h>


DEFINE_EMLITE_TYPE(USBInterface, em_Val);


USBInterface USBInterface_new(USBConfiguration * configuration, unsigned char interfaceNumber) {
        em_Val vv = em_Val_new(em_Val_global("USBInterface") , em_Val_from(configuration), em_Val_from(interfaceNumber));
        return USBInterface_from_val(&vv);
      }


unsigned char USBInterface_interfaceNumber(const USBInterface *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaceNumber")));
}


USBAlternateInterface USBInterface_alternate(const USBInterface *self) {
    return em_Val_as(USBAlternateInterface, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternate")));
}


jb_FrozenArray USBInterface_alternates(const USBInterface *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternates")));
}


bool USBInterface_claimed(const USBInterface *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("claimed")));
}

