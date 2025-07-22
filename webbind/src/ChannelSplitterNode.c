#include <webbind/ChannelSplitterNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);


ChannelSplitterNode ChannelSplitterNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("ChannelSplitterNode") , em_Val_from(context));
        return ChannelSplitterNode_from_val(&vv);
      }


ChannelSplitterNode ChannelSplitterNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("ChannelSplitterNode") , em_Val_from(context), em_Val_from(options));
        return ChannelSplitterNode_from_val(&vv);
      }

