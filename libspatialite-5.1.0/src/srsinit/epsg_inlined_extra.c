/*

 helper function for srs_init.c -- populating the SPATIAL_REF_SYS table

 this code was autogenerated by "auto_epsg_ext" on Thu Mar  3 12:51:49 2022

 Author: Sandro Furieri a.furieri@lqt.it

 -----------------------------------------------------------------------------

 Version: MPL 1.1/GPL 2.0/LGPL 2.1

 The contents of this file are subject to the Mozilla Public License Version
 1.1 (the "License"); you may not use this file except in compliance with
 the License. You may obtain a copy of the License at
 http://www.mozilla.org/MPL/

Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
for the specific language governing rights and limitations under the
License.

The Original Code is the SpatiaLite library

The Initial Developer of the Original Code is Alessandro Furieri

Portions created by the Initial Developer are Copyright (C) 2008
the Initial Developer. All Rights Reserved.

Contributor(s):

Alternatively, the contents of this file may be used under the terms of
either the GNU General Public License Version 2 or later (the "GPL"), or
the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
in which case the provisions of the GPL or the LGPL are applicable instead
of those above. If you wish to allow use of your version of this file only
under the terms of either the GPL or the LGPL, and not to allow others to
use your version of this file under the terms of the MPL, indicate your
decision by deleting the provisions above and replace them with the notice
and other provisions required by the GPL or the LGPL. If you do not delete
the provisions above, a recipient may use your version of this file under
the terms of any one of the MPL, the GPL or the LGPL.

*/

#if defined(_WIN32) && !defined(__MINGW32__)
#include "config-msvc.h"
#else
#include "config.h"
#endif

#include <spatialite_private.h>

/* declaring prototypes */
SPATIALITE_PRIVATE void initialize_epsg_00 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_01 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_02 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_03 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_04 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_05 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_06 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_07 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_08 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_09 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_10 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_11 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_12 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_13 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_14 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_15 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_16 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_17 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_18 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_19 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_20 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_21 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_22 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_23 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_24 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_25 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_26 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_27 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_28 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_29 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_30 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_31 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_32 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_33 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_34 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_35 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_36 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_37 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_38 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_39 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_40 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_41 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_42 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_43 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_44 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_45 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_46 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_47 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_48 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_49 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_50 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_51 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_52 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_53 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_54 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_55 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_56 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_57 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_58 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_59 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_60 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_61 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_62 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_63 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_wgs84_00 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_wgs84_01 (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_prussian (
	int filter, struct epsg_defs **first, struct epsg_defs **last);
SPATIALITE_PRIVATE void initialize_epsg_extra (
	int filter, struct epsg_defs **first, struct epsg_defs **last);

SPATIALITE_PRIVATE void
initialize_epsg_extra (int filter, struct epsg_defs **first, struct epsg_defs **last)

{
/* initializing the EPSG defs list [EXTRA] */
    struct epsg_defs *p;
    p = add_epsg_def (filter, first, last, 40000, "gfoss.it", 1,
        "Italy mainland zone 1 GB Roma40");
    add_proj4text (p, 0,
        "+proj=tmerc+lat_0=0 +lon_0=9  +k=0.9996 +x_0=1500000 +y_");
    add_proj4text (p, 1,
        "0=0 +ellps=intl +units=m +towgs84=-104.1,-49.1,-9.9,0.97");
    add_proj4text (p, 2, "1,-2.917,0.714,-11.68 +no_defs");
    add_srs_wkt (p, 0, "");
    p = add_epsg_def (filter, first, last, 40001, "gfoss.it", 2,
        "Italy mainland zone 2 GB Roma40");
    add_proj4text (p, 0,
        "+proj=tmerc +lat_0=0 +lon_0=15 +k=0.9996 +x_0=2520000 +y");
    add_proj4text (p, 1,
        "_0=0 +ellps=intl +units=m +towgs84=-104.1,-49.1,-9.9,0.9");
    add_proj4text (p, 2, "71,-2.917,0.714,-11.68 +no_defs");
    add_srs_wkt (p, 0, "");
    p = add_epsg_def (filter, first, last, 40002, "gfoss.it", 3,
        "Italy Sardinia GB Roma40");
    add_proj4text (p, 0,
        "+proj=tmerc +lat_0=0 +lon_0=9  +k=0.9996 +x_0=1500000 +y");
    add_proj4text (p, 1,
        "_0=0 +ellps=intl +units=m +towgs84=-168.6,-34.0,38.6,-0.");
    add_proj4text (p, 2, "374,-0.679,-1.379,-9.48 +no_defs");
    add_srs_wkt (p, 0, "");
    p = add_epsg_def (filter, first, last, 40003, "gfoss.it", 4,
        "Italy Sicily GB Roma40");
    add_proj4text (p, 0,
        "+proj=tmerc +lat_0=0 +lon_0=9  +k=0.9996 +x_0=1500000 +y");
    add_proj4text (p, 1,
        "_0=0 +ellps=intl +units=m +towgs84=-50.2,-50.4,84.8,-0.6");
    add_proj4text (p, 2, "90,-2.012,0.459,-28.08  +no_defs");
    add_srs_wkt (p, 0, "");
}

SPATIALITE_PRIVATE void
initialize_epsg (int filter, struct epsg_defs **first, struct epsg_defs **last)
{
/* initializing the EPSG defs list */
    struct epsg_defs *p;
 /* initializing the EPSG UNKNOWN def [-1] */
    p = add_epsg_def (filter, first, last, -1, "NONE", -1, "Undefined - Cartesian");
    add_proj4text (p, 0, "");
    add_srs_wkt (p, 0, "");
    p = add_epsg_def (filter, first, last, 0, "NONE", 0, "Undefined - Geographic Long/Lat");
    add_proj4text (p, 0, "");
    add_srs_wkt (p, 0, "");

    if (filter != GAIA_EPSG_WGS84_ONLY)
    {
#ifndef OMIT_EPSG    /* full EPSG initialization enabled */
        initialize_epsg_00 (filter, first, last);
        initialize_epsg_01 (filter, first, last);
        initialize_epsg_02 (filter, first, last);
        initialize_epsg_03 (filter, first, last);
        initialize_epsg_04 (filter, first, last);
        initialize_epsg_05 (filter, first, last);
        initialize_epsg_06 (filter, first, last);
        initialize_epsg_07 (filter, first, last);
        initialize_epsg_08 (filter, first, last);
        initialize_epsg_09 (filter, first, last);
        initialize_epsg_10 (filter, first, last);
        initialize_epsg_11 (filter, first, last);
        initialize_epsg_12 (filter, first, last);
        initialize_epsg_13 (filter, first, last);
        initialize_epsg_14 (filter, first, last);
        initialize_epsg_15 (filter, first, last);
        initialize_epsg_16 (filter, first, last);
        initialize_epsg_17 (filter, first, last);
        initialize_epsg_18 (filter, first, last);
        initialize_epsg_19 (filter, first, last);
        initialize_epsg_20 (filter, first, last);
        initialize_epsg_21 (filter, first, last);
        initialize_epsg_22 (filter, first, last);
        initialize_epsg_23 (filter, first, last);
        initialize_epsg_24 (filter, first, last);
        initialize_epsg_25 (filter, first, last);
        initialize_epsg_26 (filter, first, last);
        initialize_epsg_27 (filter, first, last);
        initialize_epsg_28 (filter, first, last);
        initialize_epsg_29 (filter, first, last);
        initialize_epsg_30 (filter, first, last);
        initialize_epsg_31 (filter, first, last);
        initialize_epsg_32 (filter, first, last);
        initialize_epsg_33 (filter, first, last);
        initialize_epsg_34 (filter, first, last);
        initialize_epsg_35 (filter, first, last);
        initialize_epsg_36 (filter, first, last);
        initialize_epsg_37 (filter, first, last);
        initialize_epsg_38 (filter, first, last);
        initialize_epsg_39 (filter, first, last);
        initialize_epsg_40 (filter, first, last);
        initialize_epsg_41 (filter, first, last);
        initialize_epsg_42 (filter, first, last);
        initialize_epsg_43 (filter, first, last);
        initialize_epsg_44 (filter, first, last);
        initialize_epsg_45 (filter, first, last);
        initialize_epsg_46 (filter, first, last);
        initialize_epsg_47 (filter, first, last);
        initialize_epsg_48 (filter, first, last);
        initialize_epsg_49 (filter, first, last);
        initialize_epsg_50 (filter, first, last);
        initialize_epsg_51 (filter, first, last);
        initialize_epsg_52 (filter, first, last);
        initialize_epsg_53 (filter, first, last);
        initialize_epsg_54 (filter, first, last);
        initialize_epsg_55 (filter, first, last);
        initialize_epsg_56 (filter, first, last);
        initialize_epsg_57 (filter, first, last);
        initialize_epsg_58 (filter, first, last);
        initialize_epsg_59 (filter, first, last);
        initialize_epsg_60 (filter, first, last);
        initialize_epsg_61 (filter, first, last);
        initialize_epsg_62 (filter, first, last);
        initialize_epsg_63 (filter, first, last);
        initialize_epsg_prussian (filter, first, last);
        initialize_epsg_extra (filter, first, last);
#endif /* full EPSG initialization enabled/disabled */
    }
    initialize_epsg_wgs84_00 (filter, first, last);
    initialize_epsg_wgs84_01 (filter, first, last);
}
