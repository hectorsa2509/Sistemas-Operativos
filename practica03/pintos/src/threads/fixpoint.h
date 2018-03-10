#ifndef THREADS_FIX_POINT_H
#define THREADS_FIX_POINT_H

#include <stdint.h>

#define FRACT_BITS 14 // NÃºmero de bits reservados para la parte decimal
#define F_CONST 16384 // Equivale a 2**14

/* Convierte un entero en un nÃºmero equivalente en representaciÃ³n de punto fijo 17.14 */
#define FIXPOINT(p, q)   (((p)<<FRACT_BITS) / (q))
/* Convierte un nÃºmero en representaciÃ³n de punto fijo 17.14 a un entero truncando su parte decimal */
#define FIXPOINT_TO_INT(x)      ((x) / F_CONST)
/* Multiplica dos nÃºmeros en representaciÃ³n de punto fijo 17.14 */
#define FIXPOINT_PRODUCT(x, y)        ((((int64_t) x) * (y)) / F_CONST)
/* Divide dos nÃºmeros en representaciÃ³n de punto fijo 17.14*/
#define FIXPOINT_DIVISION(x, y)         ( ( ((int64_t) x) * F_CONST ) / (y) )

#endif