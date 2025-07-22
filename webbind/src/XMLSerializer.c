#include <webbind/XMLSerializer.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(XMLSerializer, em_Val);


XMLSerializer XMLSerializer_new() : em_Val(em_Val_global("XMLSerializer").new_()) {
        return XMLSerializer(em_Val_new(em_Val_global("XMLSerializer", ));
      }


jb_DOMString XMLSerializer_serializeToString(XMLSerializer* self , const Node* root) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "serializeToString", em_Val_from(root)));
}

