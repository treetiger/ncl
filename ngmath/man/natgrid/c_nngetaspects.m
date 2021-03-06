.\"
.\"     $Id: c_nngetaspects.m,v 1.6 2008-07-27 03:35:40 haley Exp $
.\"
.TH c_nngetaspects 3NCARG "March 1997-1998" UNIX "NCAR GRAPHICS"
.na
.nh
.SH NAME
c_nngetaspects - retrieve the aspect at a specified coordinate.
.SH FUNCTION PROTOTYPE
void c_nngetaspects(int, int, float *, int *);
.SH SYNOPSIS
c_nngetaspects (row, column, aspect, ier);
.SH DESCRIPTION 
.IP row 12
A subscript indexing the first dimensioned variable in 
the 2D grid array returned from the most recent call to c_natgrids. 
.IP column 12
A subscript indexing the second dimensioned variable in the 2D 
grid array returned from the most recent call to c_natgrids.
.IP aspect 12
*aspect is the aspect at the grid point z[i,j], where z is the 
output grid in the most recent call to c_natgrids. 
.IP ier 12
An error value. If *ier is 0, then
no errors were detected. If *ier is non-zero, then refer to the man
page for natgrid_errors for details.
.SH USAGE
This routine allows you to retrieve the current value of
Natgrid parameters.  For a complete list of parameters available
in this utility, see the natgrid_params man page.
.SH ACCESS
To use c_nngetaspects, load the NCAR Graphics library ngmath.
.SH SEE ALSO
natgrid,
natgrid_params,
c_nngetslopes.
.sp
Complete documentation for Natgrid is available at URL
.br
http://ngwww.ucar.edu/ngdoc/ng/ngmath/natgrid/nnhome.html
.SH COPYRIGHT
Copyright (C) 2000
.br
University Corporation for Atmospheric Research
.br

The use of this Software is governed by a License Agreement.
