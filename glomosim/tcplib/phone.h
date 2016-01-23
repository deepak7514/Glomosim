/*
 * GloMoSim is COPYRIGHTED software.  Release 2.02 of GloMoSim is available 
 * at no cost to educational users only.
 *
 * Commercial use of this software requires a separate license.  No cost,
 * evaluation licenses are available for such purposes; please contact
 * info@scalable-networks.com
 *
 * By obtaining copies of this and any other files that comprise GloMoSim2.02,
 * you, the Licensee, agree to abide by the following conditions and
 * understandings with respect to the copyrighted software:
 *
 * 1.Permission to use, copy, and modify this software and its documentation
 *   for education and non-commercial research purposes only is hereby granted
 *   to Licensee, provided that the copyright notice, the original author's
 *   names and unit identification, and this permission notice appear on all
 *   such copies, and that no charge be made for such copies. Any entity
 *   desiring permission to use this software for any commercial or
 *   non-educational research purposes should contact: 
 *
 *   Professor Rajive Bagrodia 
 *   University of California, Los Angeles 
 *   Department of Computer Science 
 *   Box 951596 
 *   3532 Boelter Hall 
 *   Los Angeles, CA 90095-1596 
 *   rajive@cs.ucla.edu
 *
 * 2.NO REPRESENTATIONS ARE MADE ABOUT THE SUITABILITY OF THE SOFTWARE FOR ANY
 *   PURPOSE. IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR IMPLIED WARRANTY.
 *
 * 3.Neither the software developers, the Parallel Computing Lab, UCLA, or any
 *   affiliate of the UC system shall be liable for any damages suffered by
 *   Licensee from the use of this software.
 */

// Use the latest version of Parsec if this line causes a compiler error.
/*
 * $Id: phone.h,v 1.3 1999/09/05 05:21:08 jmartin Exp $
 *
 * Ported from TCPLIB. Header file of phone.c.
 */

/*
 * Copyright (c) 1991 University of Southern California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of Southern California. The name of the University 
 * may not be used to endorse or promote products derived from this 
 * software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
*/

static struct entry talkspurt[] = {
  { 10.000000, 0.000000 },
  { 11.250000, 0.008000 },
  { 12.500000, 0.017000 },
  { 13.750000, 0.024000 },
  { 15.000000, 0.026000 },
  { 16.250000, 0.033000 },
  { 17.500000, 0.041000 },
  { 18.750000, 0.049000 },
  { 20.000000, 0.051000 },
  { 22.500000, 0.055000 },
  { 25.000000, 0.060000 },
  { 27.500000, 0.065000 },
  { 30.000000, 0.070000 },
  { 32.500000, 0.073000 },
  { 35.000000, 0.075000 },
  { 37.500000, 0.079000 },
  { 40.000000, 0.083000 },
  { 45.000000, 0.087000 },
  { 50.000000, 0.091000 },
  { 55.000000, 0.095000 },
  { 60.000000, 0.099000 },
  { 65.000000, 0.101000 },
  { 70.000000, 0.104000 },
  { 75.000000, 0.109000 },
  { 80.000000, 0.114000 },
  { 85.000000, 0.119000 },
  { 90.000000, 0.123000 },
  { 95.000000, 0.124000 },
  { 100.000000, 0.125000 },
  { 112.500000, 0.131000 },
  { 125.000000, 0.138000 },
  { 137.500000, 0.144000 },
  { 150.000000, 0.151000 },
  { 162.500000, 0.164000 },
  { 175.000000, 0.174000 },
  { 187.500000, 0.190000 },
  { 200.000000, 0.201000 },
  { 225.000000, 0.217000 },
  { 250.000000, 0.237000 },
  { 275.000000, 0.250000 },
  { 300.000000, 0.273000 },
  { 325.000000, 0.287000 },
  { 350.000000, 0.308000 },
  { 375.000000, 0.325000 },
  { 400.000000, 0.341000 },
  { 450.000000, 0.366000 },
  { 500.000000, 0.391000 },
  { 550.000000, 0.416000 },
  { 600.000000, 0.445000 },
  { 650.000000, 0.462000 },
  { 700.000000, 0.471000 },
  { 750.000000, 0.495000 },
  { 800.000000, 0.502000 },
  { 850.000000, 0.520000 },
  { 900.000000, 0.530000 },
  { 950.000000, 0.550000 },
  { 1000.000000, 0.563000 },
  { 1125.000000, 0.587000 },
  { 1250.000000, 0.608000 },
  { 1375.000000, 0.626000 },
  { 1500.000000, 0.658000 },
  { 1625.000000, 0.683000 },
  { 1750.000000, 0.708000 },
  { 1875.000000, 0.728000 },
  { 2000.000000, 0.762000 },
  { 2250.000000, 0.782000 },
  { 2500.000000, 0.824000 },
  { 2750.000000, 0.848000 },
  { 3000.000000, 0.862000 },
  { 3250.000000, 0.883000 },
  { 3500.000000, 0.900000 },
  { 3750.000000, 0.916000 },
  { 4000.000000, 0.930000 },
  { 4500.000000, 0.951000 },
  { 5000.000000, 0.966000 },
  { 5500.000000, 0.978000 },
  { 6000.000000, 0.982000 },
  { 6500.000000, 0.986000 },
  { 7000.000000, 0.990000 },
  { 7500.000000, 0.998000 },
  { 9500.000000, 0.999000 },
  { 10000.000000, 1.000000 },
};

static struct entry pause[] = {
  { 200.000000, 0.013000 },
  { 225.000000, 0.050000 },
  { 250.000000, 0.087000 },
  { 275.000000, 0.125000 },
  { 300.000000, 0.155000 },
  { 325.000000, 0.191000 },
  { 350.000000, 0.225000 },
  { 375.000000, 0.262000 },
  { 400.000000, 0.287000 },
  { 450.000000, 0.325000 },
  { 500.000000, 0.363000 },
  { 550.000000, 0.400000 },
  { 600.000000, 0.438000 },
  { 650.000000, 0.462000 },
  { 700.000000, 0.478000 },
  { 750.000000, 0.512000 },
  { 800.000000, 0.537000 },
  { 850.000000, 0.550000 },
  { 900.000000, 0.575000 },
  { 950.000000, 0.591000 },
  { 1000.000000, 0.611000 },
  { 1125.000000, 0.633000 },
  { 1250.000000, 0.658000 },
  { 1375.000000, 0.675000 },
  { 1500.000000, 0.700000 },
  { 1625.000000, 0.718000 },
  { 1750.000000, 0.737000 },
  { 1875.000000, 0.758000 },
  { 2000.000000, 0.775000 },
  { 2250.000000, 0.791000 },
  { 2500.000000, 0.813000 },
  { 2750.000000, 0.825000 },
  { 3000.000000, 0.841000 },
  { 3250.000000, 0.858000 },
  { 3500.000000, 0.874000 },
  { 3750.000000, 0.883000 },
  { 4000.000000, 0.900000 },
  { 4500.000000, 0.913000 },
  { 5000.000000, 0.925000 },
  { 5500.000000, 0.934000 },
  { 6000.000000, 0.941000 },
  { 6500.000000, 0.950000 },
  { 7000.000000, 0.958000 },
  { 7500.000000, 0.962000 },
  { 8000.000000, 0.966000 },
  { 8500.000000, 0.974000 },
  { 9000.000000, 0.975000 },
  { 9500.000000, 0.977000 },
  { 10000.000000, 0.983000 },
  { 11250.000000, 0.987000 },
  { 12500.000000, 0.989000 },
  { 13750.000000, 0.991000 },
  { 15000.000000, 0.997000 },
  { 16250.000000, 0.998000 },
  { 18750.000000, 0.999000 },
  { 20000.000000, 1.000000 },
};

static struct histmap phone_histmap[] = {
  { "talkspurt", 82 },
  { "pause", 56 },
};

