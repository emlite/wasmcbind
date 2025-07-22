#include <webbind/ImageData.h>
#include <webbind/CanvasRenderingContext2D.h>


DEFINE_EMLITE_TYPE(ImageData, em_Val);


ImageData ImageData_new(const jb_Any* data, unsigned long sw) : em_Val(em_Val_global("ImageData").new_(em_Val_from(data), em_Val_from(sw))) {
        return ImageData(em_Val_new(em_Val_global("ImageData", em_Val_from(data), em_Val_from(sw)));
      }


ImageData ImageData_new(const jb_Any* data, unsigned long sw, unsigned long sh) : em_Val(em_Val_global("ImageData").new_(em_Val_from(data), em_Val_from(sw), em_Val_from(sh))) {
        return ImageData(em_Val_new(em_Val_global("ImageData", em_Val_from(data), em_Val_from(sw), em_Val_from(sh)));
      }


ImageData ImageData_new(const jb_Any* data, unsigned long sw, unsigned long sh, const ImageDataSettings* settings) : em_Val(em_Val_global("ImageData").new_(em_Val_from(data), em_Val_from(sw), em_Val_from(sh), em_Val_from(settings))) {
        return ImageData(em_Val_new(em_Val_global("ImageData", em_Val_from(data), em_Val_from(sw), em_Val_from(sh), em_Val_from(settings)));
      }


unsigned long ImageData_width(const ImageData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "width"));
}


unsigned long ImageData_height(const ImageData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "height"));
}


jb_Any ImageData_data(const ImageData *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "data"));
}


ImageDataPixelFormat ImageData_pixelFormat(const ImageData *self) {
    return em_Val_as(ImageDataPixelFormat, em_Val_get(em_Val_as_val(self->inner), "pixelFormat"));
}


PredefinedColorSpace ImageData_colorSpace(const ImageData *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}

