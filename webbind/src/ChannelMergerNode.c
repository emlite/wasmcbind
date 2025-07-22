#include <webbind/ChannelMergerNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ChannelMergerNode, AudioNode);


ChannelMergerNode ChannelMergerNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("ChannelMergerNode") , em_Val_from(context));
        return ChannelMergerNode_from_val(&vv);
      }


ChannelMergerNode ChannelMergerNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("ChannelMergerNode") , em_Val_from(context), em_Val_from(options));
        return ChannelMergerNode_from_val(&vv);
      }

