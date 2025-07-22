#include <webbind/VideoFrame.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoFrameMetadata, em_Val);

DEFINE_EMLITE_TYPE(VideoFrameCopyToOptions, em_Val);


DOMRectInit VideoFrameCopyToOptions_rect(const VideoFrameCopyToOptions *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), "rect"));
}


void VideoFrameCopyToOptions_set_rect(VideoFrameCopyToOptions* self, const DOMRectInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "rect", value);
}


jb_Sequence VideoFrameCopyToOptions_layout(const VideoFrameCopyToOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void VideoFrameCopyToOptions_set_layout(VideoFrameCopyToOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


VideoPixelFormat VideoFrameCopyToOptions_format(const VideoFrameCopyToOptions *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void VideoFrameCopyToOptions_set_format(VideoFrameCopyToOptions* self, const VideoPixelFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


PredefinedColorSpace VideoFrameCopyToOptions_colorSpace(const VideoFrameCopyToOptions *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void VideoFrameCopyToOptions_set_colorSpace(VideoFrameCopyToOptions* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}

DEFINE_EMLITE_TYPE(PlaneLayout, em_Val);


unsigned long PlaneLayout_offset(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "offset"));
}


void PlaneLayout_set_offset(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "offset", value);
}


unsigned long PlaneLayout_stride(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "stride"));
}


void PlaneLayout_set_stride(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "stride", value);
}

DEFINE_EMLITE_TYPE(VideoFrame, em_Val);


VideoFrame VideoFrame_new(const jb_Any* data, const jb_Any* init) : em_Val(em_Val_global("VideoFrame").new_(em_Val_from(data), em_Val_from(init))) {
        return VideoFrame(em_Val_new(em_Val_global("VideoFrame", em_Val_from(data), em_Val_from(init)));
      }


VideoPixelFormat VideoFrame_format(const VideoFrame *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


unsigned long VideoFrame_codedWidth(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "codedWidth"));
}


unsigned long VideoFrame_codedHeight(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "codedHeight"));
}


DOMRectReadOnly VideoFrame_codedRect(const VideoFrame *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "codedRect"));
}


DOMRectReadOnly VideoFrame_visibleRect(const VideoFrame *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "visibleRect"));
}


double VideoFrame_rotation(const VideoFrame *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "rotation"));
}


bool VideoFrame_flip(const VideoFrame *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "flip"));
}


unsigned long VideoFrame_displayWidth(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayWidth"));
}


unsigned long VideoFrame_displayHeight(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayHeight"));
}


long long VideoFrame_duration(const VideoFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


long long VideoFrame_timestamp(const VideoFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


VideoColorSpace VideoFrame_colorSpace(const VideoFrame *self) {
    return em_Val_as(VideoColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


VideoFrameMetadata VideoFrame_metadata(VideoFrame* self ) {
    return em_Val_as(VideoFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "metadata"));
}


unsigned long VideoFrame_allocationSize(VideoFrame* self ) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize"));
}


unsigned long VideoFrame_allocationSize(VideoFrame* self , const VideoFrameCopyToOptions* options) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize", em_Val_from(options)));
}


jb_Promise VideoFrame_copyTo(VideoFrame* self , const jb_Any* destination) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination)));
}


jb_Promise VideoFrame_copyTo(VideoFrame* self , const jb_Any* destination, const VideoFrameCopyToOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination), em_Val_from(options)));
}


VideoFrame VideoFrame_clone(VideoFrame* self ) {
    return em_Val_as(VideoFrame, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined VideoFrame_close(VideoFrame* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

