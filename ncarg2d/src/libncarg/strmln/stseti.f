C
C       $Id: stseti.f,v 1.7 2008-07-27 00:17:28 haley Exp $
C                                                                      
C                Copyright (C)  2000
C        University Corporation for Atmospheric Research
C                All Rights Reserved
C
C The use of this Software is governed by a License Agreement.
C
C
C-----------------------------------------------------------------------
C
      SUBROUTINE STSETI (CNM,IVL)
C
      CHARACTER*(*) CNM
C
C This subroutine is called to give a specified integer value to a
C specified parameter.
C
C CNM is the name of the parameter whose value is to be set.
C
C IVL is an integer variable containing the new value of the parameter.
C
C The real work is done by STSETR
C
C ---------------------------------------------------------------------
C
C Float the integer value and pass it on to STSETR.
C
      RVL=REAL(IVL)
      CALL STSETR (CNM,RVL)
C
C Done.
C
      RETURN
C
      END
