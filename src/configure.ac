dnl | File: configure.in
dnl |
dnl | (c) Bjoern Rennhak, 2009
dnl |
dnl | Process this file with autoconf to produce a configure script.
dnl |



dnl --------------------------------
dnl Initialization macros.
dnl --------------------------------

AC_PREREQ(2.59)
AC_INIT([manoi], [1.0], [bjoern@rennhak.de])

dnl -----------------------------------------------
dnl Package name and version number (user defined)
dnl -----------------------------------------------

AM_INIT_AUTOMAKE([1.9 foreign])


dnl -----------------------------------------------
dnl Checks for programs.
dnl -----------------------------------------------

AC_PROG_CC
AC_PROG_CXX
dnl AM_PROG_LIBTOOL
dnl AM_SANITY_CHECK


dnl -----------------------------------------------
dnl Checks for libraries.
dnl -----------------------------------------------

dnl AC_LANG_C
AC_LANG_CPLUSPLUS


dnl -----------------------------------------------
dnl Custom switches
dnl -----------------------------------------------
dnl PKG_CHECK_MODULES(DEPS, examplelib-1.0 >= 0.3.0)
dnl AC_SUBST(DEPS_CFLAGS)
dnl AC_SUBST(DEPS_LIBS)



dnl AC_ARG_ENABLE([cgraph],
dnl [   --enable-cgraph     Turn on CGraph Calltree's of each File.],
dnl [case "${enableval}" in
dnl        yes) cgraph=true ;;
dnl        no)  cgraph=false ;;
dnl        *) AC_MSG_ERROR([bad value ${enableval} for --enable-cgraph]) ;;
dnl      esac],[cgraph=false])
dnl 
dnl AM_CONDITIONAL([CGRAPH], [test x$cgraph = xtrue])
dnl 

AC_ARG_ENABLE([standalone],
[   --enable-standalone     Include a Main.],
[case "${enableval}" in
       yes) standalone=true ;;
       no)  standalone=false ;;
       *) AC_MSG_ERROR([bad value ${enableval} for --enable-standalone]) ;;
     esac],[standalone=false])

AM_CONDITIONAL([STANDALONE], [test x$standalone = xtrue])



dnl -----------------------------------------------
dnl Generates Makefiles.
dnl -----------------------------------------------

dnl | Call Shave ( http://damien.lespiau.name/blog/2009/02/18/shave-making-the-autotools-output-sane/ )
dnl SHAVE_INIT

dnl | Configure Config files to generate and output them
AC_CONFIG_FILES([
   Makefile
])
dnl   ../base/shave/shave/shave
dnl   ../base/shave/shave/shave-libtool
dnl])
AC_OUTPUT

