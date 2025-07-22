#include <webbind/VideoFrame.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoFrameMetadata, em_Val);

DEFINE_EMLITE_TYPE(VideoFrameCopyToOptions, em_Val);


DOMRectInit VideoFrameCopyToOptions_rect(const VideoFrameCopyToOptions *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rect")));
}


void VideoFrameCopyToOptions_set_rect(VideoFrameCopyToOptions* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rect"), em_Val_from(value));
}


jb_Sequence VideoFrameCopyToOptions_layout(const VideoFrameCopyToOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void VideoFrameCopyToOptions_set_layout(VideoFrameCopyToOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


VideoPixelFormat VideoFrameCopyToOptions_format(const VideoFrameCopyToOptions *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void VideoFrameCopyToOptions_set_format(VideoFrameCopyToOptions* self, VideoPixelFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


PredefinedColorSpace VideoFrameCopyToOptions_colorSpace(const VideoFrameCopyToOptions *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void VideoFrameCopyToOptions_set_colorSpace(VideoFrameCopyToOptions* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PlaneLayout, em_Val);


unsigned long PlaneLayout_offset(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void PlaneLayout_set_offset(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


unsigned long PlaneLayout_stride(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stride")));
}


void PlaneLayout_set_stride(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stride"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(VideoFrame, em_Val);


VideoFrame VideoFrame_new(jb_Any * data, jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("VideoFrame") , em_Val_from(data), em_Val_from(init));
        return VideoFrame_from_val(&vv);
      }


VideoPixelFormat VideoFrame_format(const VideoFrame *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


unsigned long VideoFrame_codedWidth(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedWidth")));
}


unsigned long VideoFrame_codedHeight(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedHeight")));
}


DOMRectReadOnly VideoFrame_codedRect(const VideoFrame *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedRect")));
}


DOMRectReadOnly VideoFrame_visibleRect(const VideoFrame *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibleRect")));
}


double VideoFrame_rotation(const VideoFrame *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotation")));
}


bool VideoFrame_flip(const VideoFrame *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flip")));
}


unsigned long VideoFrame_displayWidth(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayWidth")));
}


unsigned long VideoFrame_displayHeight(const VideoFrame *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayHeight")));
}


long long VideoFrame_duration(const VideoFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


long long VideoFrame_timestamp(const VideoFrame *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


VideoColorSpace VideoFrame_colorSpace(const VideoFrame *self) {
    return em_Val_as(VideoColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


VideoFrameMetadata VideoFrame_metadata(VideoFrame* self ) {
    return em_Val_as(VideoFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "metadata"));
}


unsigned long VideoFrame_allocationSize0(VideoFrame* self ) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize"));
}


unsigned long VideoFrame_allocationSize1(VideoFrame* self , VideoFrameCopyToOptions * options) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize", em_Val_from(options)));
}


jb_Promise VideoFrame_copyTo0(VideoFrame* self , jb_Any * destination) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination)));
}


jb_Promise VideoFrame_copyTo1(VideoFrame* self , jb_Any * destination, VideoFrameCopyToOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination), em_Val_from(options)));
}


VideoFrame VideoFrame_clone(VideoFrame* self ) {
    return em_Val_as(VideoFrame, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined VideoFrame_close(VideoFrame* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

