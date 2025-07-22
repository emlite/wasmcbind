#include <webbind/Comment.h>


DEFINE_EMLITE_TYPE(Comment, CharacterData);


Comment Comment_new() : CharacterData(em_Val_global("Comment").new_()) {
        return Comment(em_Val_new(em_Val_global("Comment", ));
      }


Comment Comment_new(const jb_DOMString* data) : CharacterData(em_Val_global("Comment").new_(em_Val_from(data))) {
        return Comment(em_Val_new(em_Val_global("Comment", em_Val_from(data)));
      }

