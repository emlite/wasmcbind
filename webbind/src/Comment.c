#include <webbind/Comment.h>


DEFINE_EMLITE_TYPE(Comment, CharacterData);


Comment Comment_new0() {
        em_Val vv = em_Val_new(em_Val_global("Comment") );
        return Comment_from_val(&vv);
      }


Comment Comment_new1(jb_String * data) {
        em_Val vv = em_Val_new(em_Val_global("Comment") , em_Val_from(data));
        return Comment_from_val(&vv);
      }

