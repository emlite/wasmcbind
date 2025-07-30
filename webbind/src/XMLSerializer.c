#include <webbind/XMLSerializer.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(XMLSerializer, em_Val);


XMLSerializer XMLSerializer_new() {
        em_Val vv = em_Val_new(em_Val_global("XMLSerializer") );
        return XMLSerializer_from_val(&vv);
      }


jb_String XMLSerializer_serializeToString(XMLSerializer* self , Node * root) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "serializeToString", em_Val_from(root)));
}

