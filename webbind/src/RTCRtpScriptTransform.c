#include <webbind/RTCRtpScriptTransform.h>
#include <webbind/Worker.h>


DEFINE_EMLITE_TYPE(RTCRtpScriptTransform, em_Val);


RTCRtpScriptTransform RTCRtpScriptTransform_new0(Worker * worker) {
        em_Val vv = em_Val_new(em_Val_global("RTCRtpScriptTransform") , em_Val_from(worker));
        return RTCRtpScriptTransform_from_val(&vv);
      }


RTCRtpScriptTransform RTCRtpScriptTransform_new1(Worker * worker, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("RTCRtpScriptTransform") , em_Val_from(worker), em_Val_from(options));
        return RTCRtpScriptTransform_from_val(&vv);
      }


RTCRtpScriptTransform RTCRtpScriptTransform_new2(Worker * worker, jb_Any * options, jb_Sequence * transfer) {
        em_Val vv = em_Val_new(em_Val_global("RTCRtpScriptTransform") , em_Val_from(worker), em_Val_from(options), em_Val_from(transfer));
        return RTCRtpScriptTransform_from_val(&vv);
      }

