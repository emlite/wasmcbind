#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;
typedef struct DOMRectInit DOMRectInit;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct DOMPoint DOMPoint;
typedef struct DOMRect DOMRect;


/**
 * @brief Interface DOMQuad
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad)
 */
DECLARE_EMLITE_TYPE(DOMQuad, em_Val);

/**
 * @brief Creates a new `DOMQuad` object. 
*/
DOMQuad DOMQuad_new0();

/**
 * @brief Creates a new `DOMQuad` object. 
*/
DOMQuad DOMQuad_new1(DOMPointInit * p1);

/**
 * @brief Creates a new `DOMQuad` object. 
*/
DOMQuad DOMQuad_new2(DOMPointInit * p1, DOMPointInit * p2);

/**
 * @brief Creates a new `DOMQuad` object. 
*/
DOMQuad DOMQuad_new3(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3);

/**
 * @brief Creates a new `DOMQuad` object. 
*/
DOMQuad DOMQuad_new4(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3, DOMPointInit * p4);

/**
 * @brief Calls the `fromRect` method. 
*/
DOMQuad DOMQuad_fromRect0(DOMQuad* self );

/**
 * @brief Calls the `fromRect` method. 
*/
DOMQuad DOMQuad_fromRect1(DOMQuad* self , DOMRectInit * other);

/**
 * @brief Calls the `fromQuad` method. 
*/
DOMQuad DOMQuad_fromQuad0(DOMQuad* self );

/**
 * @brief Calls the `fromQuad` method. 
*/
DOMQuad DOMQuad_fromQuad1(DOMQuad* self , DOMQuadInit * other);

/**
 * @brief Gets the `p1` property. 
*/
DOMPoint DOMQuad_p1(const DOMQuad *self);

/**
 * @brief Gets the `p2` property. 
*/
DOMPoint DOMQuad_p2(const DOMQuad *self);

/**
 * @brief Gets the `p3` property. 
*/
DOMPoint DOMQuad_p3(const DOMQuad *self);

/**
 * @brief Gets the `p4` property. 
*/
DOMPoint DOMQuad_p4(const DOMQuad *self);

/**
 * @brief Calls the `getBounds` method. 
*/
DOMRect DOMQuad_getBounds(DOMQuad* self );

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object DOMQuad_toJSON(DOMQuad* self );

#ifdef __cplusplus
}
#endif
