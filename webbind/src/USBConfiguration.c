#include <webbind/USBConfiguration.h>
#include <webbind/USBInterface.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBConfiguration, em_Val);


USBConfiguration USBConfiguration_new(USBDevice * device, unsigned char configurationValue) {
        em_Val vv = em_Val_new(em_Val_global("USBConfiguration") , em_Val_from(device), em_Val_from(configurationValue));
        return USBConfiguration_from_val(&vv);
      }


unsigned char USBConfiguration_configurationValue(const USBConfiguration *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("configurationValue")));
}


jb_DOMString USBConfiguration_configurationName(const USBConfiguration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("configurationName")));
}


jb_FrozenArray USBConfiguration_interfaces(const USBConfiguration *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("interfaces")));
}

