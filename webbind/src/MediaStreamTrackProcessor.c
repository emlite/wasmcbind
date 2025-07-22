#include <webbind/MediaStreamTrackProcessor.h>
#include <webbind/ReadableStream.h>


DEFINE_EMLITE_TYPE(MediaStreamTrackProcessor, em_Val);


MediaStreamTrackProcessor MediaStreamTrackProcessor_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamTrackProcessor") , em_Val_from(init));
        return MediaStreamTrackProcessor_from_val(&vv);
      }


ReadableStream MediaStreamTrackProcessor_readable(const MediaStreamTrackProcessor *self) {
    return em_Val_as(ReadableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}

