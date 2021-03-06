* -*-Fortran-*-

***********************************************************************
*     file params_coli.h                                              *
*     global input parameters for library COLI                        *
*---------------------------------------------------------------------*
*     02.05.08  Ansgar Denner     last changed  02.05.08              *
***********************************************************************

      real*8     pi,pi2,pi2_6
      real*8     impacc
      real*8     calacc

      integer maxtype,maxcalc,maxcall,maxfct,maxx

      complex*16 cd0,cd1

* Pi
      parameter (pi=3.141592653589793238462643383279502884197d0)
      parameter (pi2=9.869604401089358618834490999876151135314d0)
      parameter (pi2_6=1.644934066848226d0)
      parameter (impacc=1d-15)
      parameter (calacc=5d-16)

* complex zero
      parameter (cd0=(0d0,0d0), cd1=(1d0,0d0))

      parameter(maxtype=5,maxcalc=580,maxcall=3500,maxfct=86,maxx=15)
c     parameter(maxtype=5,maxcalc=5,maxcall=35,maxfct=86,maxx=15)
 

