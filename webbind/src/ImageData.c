#include <webbind/ImageData.h>

#include <webbind/ImageDataSettings.h>

DEFINE_EMLITE_TYPE(ImageData, em_Val);


ImageData ImageData_new0(jb_Any * data, unsigned long sw) {
        em_Val vv = em_Val_new(em_Val_global("ImageData") , em_Val_from(data), em_Val_from(sw));
        return ImageData_from_val(&vv);
      }


ImageData ImageData_new1(jb_Any * data, unsigned long sw, unsigned long sh) {
        em_Val vv = em_Val_new(em_Val_global("ImageData") , em_Val_from(data), em_Val_from(sw), em_Val_from(sh));
        return ImageData_from_val(&vv);
      }


ImageData ImageData_new2(jb_Any * data, unsigned long sw, unsigned long sh, ImageDataSettings * settings) {
        em_Val vv = em_Val_new(em_Val_global("ImageData") , em_Val_from(data), em_Val_from(sw), em_Val_from(sh), em_Val_from(settings));
        return ImageData_from_val(&vv);
      }


unsigned long ImageData_width(const ImageData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


unsigned long ImageData_height(const ImageData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


jb_Any ImageData_data(const ImageData *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


ImageDataPixelFormat ImageData_pixelFormat(const ImageData *self) {
    return em_Val_as(ImageDataPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pixelFormat")));
}


PredefinedColorSpace ImageData_colorSpace(const ImageData *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}

