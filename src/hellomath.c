/**
 * @file hellomath.c
 *
 * @mainpage \c hellomath
 *
 * @author Xin Wu
 * @date 30.12.2019
 * @copyright GNU GPL
 *
 * \c hellomath demonstrates a not-so-simple development template by
 * using GNU Autotools.
 *
 * A not-so-simple development template contains:
 *
 * + Deployment of an external library, e.g. libm, is checked.
 * + \c hellomath has its own static library, e.g. libhm, which will be built.
 * + Doxygen is used for source documentation generation.
 *
 */

#if HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
/* hm */
#include "hm/hm.h"

/**
 * @brief Main entry point for \c hellomath.
 */
int main(void)
{
  float x = 1.0f, y;

  fprintf(stdout, "This is '" PACKAGE_STRING "'\n");
  calcarcsine(x, &y);
  fprintf(stdout, "Hello Math! π ≈ %f\n", 2.0f * y);
  return 0;
}
