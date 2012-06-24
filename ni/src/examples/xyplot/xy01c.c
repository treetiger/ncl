/*
**      $Id: xy01c.c,v 1.17 2010-03-15 22:49:25 haley Exp $
*/
/***********************************************************************
*                                                                      *
*                Copyright (C)  1995                                   *
*        University Corporation for Atmospheric Research               *
*                All Rights Reserved                                   *
*                                                                      *
***********************************************************************/
/*
**  File:       xy01c.c
**
**  Author:     Mary Haley
**          National Center for Atmospheric Research
**          PO 3000, Boulder, Colorado
**
**  Date:       Fri Jan 27 08:24:42 MST 1995
**
** Description:    This program shows how to create an XyPlot object
**                 using all the default resources except for the data
**                 resource; since there's no "default data", we need
**                 to create some.  A resource file is included with
**                 this example, but only to show what all the XyPlot
**                 resources are and what their defaults are set to.
**                 The whole resource file is commented out.
**                 The "CoordArrays" object is used to set up the data.
**
*/

#include <stdio.h>
#include <math.h>
#include <ncarg/hlu/hlu.h>
#include <ncarg/hlu/ResList.h>
#include <ncarg/hlu/App.h>
#include <ncarg/hlu/NcgmWorkstation.h>
#include <ncarg/hlu/PSWorkstation.h>
#include <ncarg/hlu/PDFWorkstation.h>
#include <ncarg/hlu/CairoWorkstation.h>
#include <ncarg/hlu/XyPlot.h>
#include <ncarg/hlu/CoordArrays.h>

/*
 * Define the number of points in the curve.
 */
#define NPTS  500
#define PI100 .031415926535898

main()
{
    int     appid,xworkid,plotid,dataid;
    int     rlist;
    int     i;
    float   ydra[NPTS], theta;
    char const *wks_type = "x11";
/*
 * Initialize some data for the XY plot.
 */
    for( i = 0; i < NPTS; i++ ) {
        theta = PI100*(float)(i);
        ydra[i] = 500.+.9*(float)(i)*sin(theta);
    }
/*
 * Initialize the HLU library and set up resource template.
 */
    NhlInitialize();
    rlist = NhlRLCreate(NhlSETRL);
/*
 * Create Application object.  The Application object name is used to
 * determine the name of the resource file, which is "xy01.res" in
 * this case.
 */
    NhlRLClear(rlist);
    NhlRLSetString(rlist,NhlNappDefaultParent,"True");
    NhlRLSetString(rlist,NhlNappUsrDir,"./");
    NhlCreate(&appid,"xy01",NhlappClass,NhlDEFAULT_APP,rlist);

    if (!strcmp(wks_type,"ncgm") || !strcmp(wks_type,"NCGM")) {
/*
 * Create a meta file object.
 */
        NhlRLClear(rlist);
        NhlRLSetString(rlist,NhlNwkMetaName,"./xy01c.ncgm");
        NhlCreate(&xworkid,"xy01Work",NhlncgmWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }
    if (!strcmp(wks_type,"x11") || !strcmp(wks_type,"X11")) {
/*
 * Create an X11 Workstation.
 */
        NhlRLClear(rlist);
        NhlRLSetInteger(rlist,NhlNwkPause,True);
        NhlCreate(&xworkid,"xy01Work",NhlcairoWindowWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }       
    if (!strcmp(wks_type,"oldps") || !strcmp(wks_type,"OLDPS")) {
/*
 * Create an older-style PostScript workstation.
 */
        NhlRLClear(rlist);
        NhlRLSetString(rlist,NhlNwkPSFileName,"xy01c.ps");
        NhlCreate(&xworkid,"xy01Work",NhlpsWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }       
    if (!strcmp(wks_type,"oldpdf") || !strcmp(wks_type,"OLDPDF")) {
/*
 * Create an older-style PDF workstation.
 */
        NhlRLClear(rlist);
        NhlRLSetString(rlist,NhlNwkPDFFileName,"xy01c.pdf");
        NhlCreate(&xworkid,"xy01Work",NhlpdfWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }       
    if (!strcmp(wks_type,"ps") || !strcmp(wks_type,"PS") ||
        !strcmp(wks_type,"pdf") || !strcmp(wks_type,"PDF")) {
/*
 * Create a PS or PDF CairoWorkstation object.
 */
        NhlRLClear(rlist);
        NhlRLSetString(rlist,NhlNwkFileName,"xy01c");
        NhlRLSetString(rlist,NhlNwkFormat,(char*)wks_type);
        NhlCreate(&xworkid,"xy01Work",NhlcairoDocumentWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }       
    if (!strcmp(wks_type,"png") || !strcmp(wks_type,"PNG")) {
/*
 * Create a PNG cairoImageWorkstation object.
 */
        NhlRLClear(rlist);
        NhlRLSetString(rlist,NhlNwkFileName,"xy01c");
        NhlRLSetString(rlist,NhlNwkFormat,(char*)wks_type);
        NhlCreate(&xworkid,"xy01Work",NhlcairoImageWorkstationClass,
                  NhlDEFAULT_APP,rlist);
    }       
/*
 * Define the data object.  Since only the Y values are specified here,
 * each Y value will be paired with its integer array index.  The id
 * for this object will later be used as the value for the XyPlot data
 * resource, "xyCoordData".
 */
    NhlRLClear(rlist);
    NhlRLSetFloatArray(rlist,NhlNcaYArray,ydra,NhlNumber(ydra));
    NhlCreate(&dataid,"xyData",NhlcoordArraysClass,NhlDEFAULT_APP,
              rlist);
/*
 * Create the XyPlot object which is created as a child of the
 * workstation object.
 */
    NhlRLClear(rlist);
    NhlRLSetInteger(rlist,NhlNxyCoordData,dataid);
    NhlCreate(&plotid,"xyPlot",NhlxyPlotClass,xworkid,rlist);
/*
 * Draw the plot.
 */
    NhlDraw(plotid);
    NhlFrame(xworkid);
/*
 * NhlDestroy destroys the given id and all of its children
 * so destroying "xworkid" will also destroy "plotid".
 */
    NhlRLDestroy(rlist);
    NhlDestroy(xworkid);
    NhlDestroy(appid);
/*
 * Restores state.
 */
    NhlClose();

    exit(0);
}
