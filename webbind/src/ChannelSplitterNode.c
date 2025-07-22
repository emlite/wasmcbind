#include <webbind/ChannelSplitterNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);


ChannelSplitterNode ChannelSplitterNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("ChannelSplitterNode").new_(em_Val_from(context))) {
        return ChannelSplitterNode(em_Val_new(em_Val_global("ChannelSplitterNode", em_Val_from(context)));
      }


ChannelSplitterNode ChannelSplitterNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("ChannelSplitterNode").new_(em_Val_from(context), em_Val_from(options))) {
        return ChannelSplitterNode(em_Val_new(em_Val_global("ChannelSplitterNode", em_Val_from(context), em_Val_from(options)));
      }

