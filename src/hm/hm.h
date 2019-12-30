/**
 * @file hm.h
 * @brief Function prototype(s) for hm.
 *
 * This header file contains function prototype(s) for hm.
 *
 * @author Xin Wu
 * @date 30.12.2019
 * @copyright GNU GPL
 */

#ifndef HM_H
#define HM_H

void calcarcsine(float  x,
                 float *y);
/**<
 * @brief Calculate arcsine of \p x and store it in \p y.
 *
 * \c calcarcsine() calculates arcsine of \p x by using \c asinf() in \c libm
 * and stores the result in \p y.
 *
 * @param x The input value.
 * @param y The result of \c asinf(x).
 *
 * @return \c void.
 */

#endif
