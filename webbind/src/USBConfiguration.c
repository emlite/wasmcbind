#include <webbind/USBConfiguration.h>
#include <webbind/USBInterface.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBConfiguration, em_Val);


USBConfiguration USBConfiguration_new(const USBDevice* device, unsigned char configurationValue) : em_Val(em_Val_global("USBConfiguration").new_(em_Val_from(device), em_Val_from(configurationValue))) {
        return USBConfiguration(em_Val_new(em_Val_global("USBConfiguration", em_Val_from(device), em_Val_from(configurationValue)));
      }


unsigned char USBConfiguration_configurationValue(const USBConfiguration *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "configurationValue"));
}


jb_DOMString USBConfiguration_configurationName(const USBConfiguration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "configurationName"));
}


jb_FrozenArray USBConfiguration_interfaces(const USBConfiguration *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "interfaces"));
}

