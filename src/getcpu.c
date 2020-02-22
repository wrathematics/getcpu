#include <Rinternals.h>

#define _GNU_SOURCE
#include <sched.h>

int sched_getcpu(void);

SEXP R_getcpu()
{
  SEXP ret;
  PROTECT(ret = allocVector(INTSXP, 1));
  
  INTEGER(ret)[0] = sched_getcpu();
  
  UNPROTECT(1);
  return ret;
}
