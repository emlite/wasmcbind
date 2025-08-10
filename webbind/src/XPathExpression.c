#include <webbind/XPathExpression.h>

#include <webbind/XPathResult.h>
#include <webbind/Node.h>

DEFINE_EMLITE_TYPE(XPathExpression, em_Val);


XPathResult XPathExpression_evaluate0(XPathExpression* self , Node * contextNode) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(contextNode)));
}


XPathResult XPathExpression_evaluate1(XPathExpression* self , Node * contextNode, unsigned short type) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(contextNode), em_Val_from(type)));
}


XPathResult XPathExpression_evaluate2(XPathExpression* self , Node * contextNode, unsigned short type, XPathResult * result) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(contextNode), em_Val_from(type), em_Val_from(result)));
}

