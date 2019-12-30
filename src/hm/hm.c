/**
 * @file hm.c
 * @brief Function definition(s) for hm.
 *
 * This source file contains function definition(s) for hm.
 *
 * @author Xin Wu
 * @date 30.12.2019
 * @copyright GNU GPL
 */

#include <math.h>
#include "hm.h"

static inline float df(float x)
/**
 * @brief A dummy function returns its argument parameter.
 *
 * This \e internal function \c df() will not be documented by Dxoygen.
 *
 * @param x The argument parameter.
 *
 * @return The argument parameter \p x.
 */
{
  return x;
}

void calcarcsine(float  x,
                 float *y)
{
  *y = asinf(df(x));
}
