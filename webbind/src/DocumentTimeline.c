#include <webbind/DocumentTimeline.h>


DEFINE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);


DocumentTimeline DocumentTimeline_new() : AnimationTimeline(em_Val_global("DocumentTimeline").new_()) {
        return DocumentTimeline(em_Val_new(em_Val_global("DocumentTimeline", ));
      }


DocumentTimeline DocumentTimeline_new(const jb_Any* options) : AnimationTimeline(em_Val_global("DocumentTimeline").new_(em_Val_from(options))) {
        return DocumentTimeline(em_Val_new(em_Val_global("DocumentTimeline", em_Val_from(options)));
      }

