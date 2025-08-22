#include <webcbind/MLClampOptions.h>

DEFINE_EMLITE_TYPE(MLClampOptions, MLOperatorOptions);


jb_Any MLClampOptions_minValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("minValue")));
}


void MLClampOptions_set_minValue(MLClampOptions* self, jb_Any * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("minValue"), em_Val_from(value));
}


jb_Any MLClampOptions_maxValue(const MLClampOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("maxValue")));
}


void MLClampOptions_set_maxValue(MLClampOptions* self, jb_Any * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("maxValue"), em_Val_from(value));
}


MLClampOptions MLClampOptions_new() {
    em_Val obj = em_Val_object();
    return MLClampOptions_from_val(&obj);
}

