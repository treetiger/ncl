CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
C
C   FFTPACK 5.0
C   Copyright (C) 1995-2004, Scientific Computing Division,
C   University Corporation for Atmospheric Research
C   Licensed under the GNU General Public License (GPL)
C
C   Authors:  Paul N. Swarztrauber and Richard A. Valent
C
C   $Id: rfftmi.f,v 1.2 2006-11-21 01:10:19 haley Exp $
C
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC

      SUBROUTINE DRFFTMI(N,WSAVE,LENSAV,IER)
      INTEGER N,LENSAV,IER
      DOUBLE PRECISION WSAVE(LENSAV)
C
      IER = 0
C
      IF (LENSAV.LT.N+INT(LOG(DBLE(N)))+4) THEN
          IER = 2
          CALL DXERFFT('RFFTMI ',3)
      END IF
C
      IF (N.EQ.1) RETURN
C
      CALL DMRFTI1(N,WSAVE(1),WSAVE(N+1))
      RETURN
      END
