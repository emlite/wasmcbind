#include <webcbind/VideoFrameMetadata.h>

DEFINE_EMLITE_TYPE(VideoFrameMetadata, em_Val);


VideoFrameMetadata VideoFrameMetadata_new() {
    em_Val obj = em_Val_object();
    return VideoFrameMetadata_from_val(&obj);
}

