#include <webbind/USBEndpoint.h>
#include <webbind/USBAlternateInterface.h>


DEFINE_EMLITE_TYPE(USBEndpoint, em_Val);


USBEndpoint USBEndpoint_new(USBAlternateInterface * alternate, unsigned char endpointNumber, USBDirection * direction) {
        em_Val vv = em_Val_new(em_Val_global("USBEndpoint") , em_Val_from(alternate), em_Val_from(endpointNumber), em_Val_from(direction));
        return USBEndpoint_from_val(&vv);
      }


unsigned char USBEndpoint_endpointNumber(const USBEndpoint *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endpointNumber")));
}


USBDirection USBEndpoint_direction(const USBEndpoint *self) {
    return em_Val_as(USBDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


USBEndpointType USBEndpoint_type(const USBEndpoint *self) {
    return em_Val_as(USBEndpointType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


unsigned long USBEndpoint_packetSize(const USBEndpoint *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetSize")));
}

