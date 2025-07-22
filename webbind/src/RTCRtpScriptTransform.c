#include <webbind/RTCRtpScriptTransform.h>
#include <webbind/Worker.h>


DEFINE_EMLITE_TYPE(RTCRtpScriptTransform, em_Val);


RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker) : em_Val(em_Val_global("RTCRtpScriptTransform").new_(em_Val_from(worker))) {
        return RTCRtpScriptTransform(em_Val_new(em_Val_global("RTCRtpScriptTransform", em_Val_from(worker)));
      }


RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker, const jb_Any* options) : em_Val(em_Val_global("RTCRtpScriptTransform").new_(em_Val_from(worker), em_Val_from(options))) {
        return RTCRtpScriptTransform(em_Val_new(em_Val_global("RTCRtpScriptTransform", em_Val_from(worker), em_Val_from(options)));
      }


RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker, const jb_Any* options, const jb_Sequence* transfer) : em_Val(em_Val_global("RTCRtpScriptTransform").new_(em_Val_from(worker), em_Val_from(options), em_Val_from(transfer))) {
        return RTCRtpScriptTransform(em_Val_new(em_Val_global("RTCRtpScriptTransform", em_Val_from(worker), em_Val_from(options), em_Val_from(transfer)));
      }

