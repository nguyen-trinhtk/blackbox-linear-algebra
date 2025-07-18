/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define whether to compile in DEBUG mode */
/* #undef DEBUG */

/* Define that architecture uses big endian storage */
/* #undef HAVE_BIG_ENDIAN */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if FLINT is installed */
/* #undef HAVE_FLINT */

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define if FPLLL is installed */
/* #undef HAVE_FPLLL */

/* ps2pdf available as external program */
/* #undef HAVE_GHOSTSCRIPT */

/* gnuplot available as external program */
/* #undef HAVE_GNUPLOT */

/* Define if IML is installed */
/* #undef HAVE_IML */

/* Define that compiler allows int128_t types */
#define HAVE_INT128 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if LAPACK is available */
/* #undef HAVE_LAPACK */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define that architecture uses little endian storage */
#define HAVE_LITTLE_ENDIAN 1

/* Define if MAPLE is installed */
/* #undef HAVE_MAPLE */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if MPFR is installed */
/* #undef HAVE_MPFR */

/* Define if MPI is available */
/* #undef HAVE_MPI */

/* Define if NTL is installed */
/* #undef HAVE_NTL */

/* Define if OpenCL is installed */
/* #undef HAVE_OCL */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if SACLIB is installed */
/* #undef HAVE_SACLIB */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if tinyxml2 is installed */
/* #undef HAVE_TINYXML2 */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* define is the version of Maple have access function to gmp data */
/* #undef MAPLE_GMP_ACCESS */

/* Name of package */
#define PACKAGE "linbox"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "linbox-use@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "LinBox"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LinBox 1.7.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "linbox"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.linalg.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.7.0"

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `__int64_t', as computed by sizeof. */
#define SIZEOF___INT64_T 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.7.0"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
