#include <webbind/ChannelMergerNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ChannelMergerNode, AudioNode);


ChannelMergerNode ChannelMergerNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("ChannelMergerNode").new_(em_Val_from(context))) {
        return ChannelMergerNode(em_Val_new(em_Val_global("ChannelMergerNode", em_Val_from(context)));
      }


ChannelMergerNode ChannelMergerNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("ChannelMergerNode").new_(em_Val_from(context), em_Val_from(options))) {
        return ChannelMergerNode(em_Val_new(em_Val_global("ChannelMergerNode", em_Val_from(context), em_Val_from(options)));
      }

