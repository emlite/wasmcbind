#include <webbind/DocumentTimeline.h>

#include <webbind/DocumentTimelineOptions.h>

DEFINE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);


DocumentTimeline DocumentTimeline_new0() {
        em_Val vv = em_Val_new(em_Val_global("DocumentTimeline") );
        return DocumentTimeline_from_val(&vv);
      }


DocumentTimeline DocumentTimeline_new1(DocumentTimelineOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("DocumentTimeline") , em_Val_from(options));
        return DocumentTimeline_from_val(&vv);
      }

