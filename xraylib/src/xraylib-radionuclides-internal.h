/*
Copyright (c) 2014-2018, Tom Schoonjans
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * The names of the contributors may not be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY Tom Schoonjans ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Tom Schoonjans BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * This file was automatically generated by nuclides.pl
 * Modify at your own risk...
 */

#include "xraylib.h"
#include "xraylib-error-private.h"

static const int nNuclideDataList = 10;
static int __NuclideDataList_XrayLines_0[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE};
static double __NuclideDataList_XrayIntensities_0[] = {0.00037, 0.00025, 0.00028, 0.0025, 0.0019, 0.00011, 0.00017, 6.9e-08, 0.085, 0.169, 0.0101, 0.0198, 8.9e-06};
static double __NuclideDataList_GammaEnergies_0[] = {125.95};
static double __NuclideDataList_GammaIntensities_0[] = {1.28e-09};
static int __NuclideDataList_XrayLines_1[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE};
static double __NuclideDataList_XrayIntensities_1[] = {0.00068, 0.00046, 0.00062, 0.0056, 0.0042, 0.00022, 0.00034, 1.69e-07, 0.164, 0.326, 0.0199, 0.0388, 2.06e-05};
static double __NuclideDataList_GammaEnergies_1[] = {14.41300, 122.0614, 136.4743, 230.29, 339.54, 352.36, 366.75, 569.92, 692.03, 706.40};
static double __NuclideDataList_GammaIntensities_1[] = {0.0916, 0.856, 0.1068, 4e-06, 0.000139, 0.000132, 1.3e-05, 0.00017, 0.00157, 0.000253};
static int __NuclideDataList_XrayLines_2[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, LB6_LINE, LB2_LINE, LG1_LINE, LG2_LINE, LG3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_2[] = {0.0018, 0.00097, 0.005, 0.045, 0.026, 0.0014, 0.0022, 0.0003, 0.0058, 0.0028, 0.00027, 0.00045, 1.22e-05, 0.295, 0.557, 0.0476, 0.092, 0.00067, 0.023, 0.00487};
static double __NuclideDataList_GammaEnergies_2[] = {88.04};
static double __NuclideDataList_GammaIntensities_2[] = {0.0361};
static int __NuclideDataList_XrayLines_3[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, LB6_LINE, LB2_LINE, LG1_LINE, LG2_LINE, LG3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_3[] = {0.0023, 0.00112, 0.0063, 0.056, 0.035, 0.0042, 0.007, 0.00043, 0.0101, 0.0045, 0.00103, 0.0016, 3.24e-05, 0.406, 0.757, 0.0683, 0.132, 0.00121, 0.0381, 0.0058};
static double __NuclideDataList_GammaEnergies_3[] = {35.4919};
static double __NuclideDataList_GammaIntensities_3[] = {0.0668};
static int __NuclideDataList_XrayLines_4[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, LB6_LINE, LB2_LINE, LG1_LINE, LG2_LINE, LG3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_4[] = {0.000143, 6.4e-05, 0.0004, 0.0036, 0.00226, 0.00023, 0.00039, 3e-05, 0.00074, 0.00033, 6.5e-05, 9.3e-05, 2.63e-06, 0.0204, 0.0376, 0.00352, 0.0068, 7.9e-05, 0.00215, 0.000481};
static double __NuclideDataList_GammaEnergies_4[] = {283.53, 661.657};
static double __NuclideDataList_GammaIntensities_4[] = {5.8e-06, 0.851};
static int __NuclideDataList_XrayLines_5[] = {LL_LINE, LH_LINE, LA2_LINE, LA1_LINE, LB1_LINE, LB4_LINE, LB3_LINE, LB6_LINE, LB2_LINE, LG1_LINE, LG2_LINE, LG3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_5[] = {0.0024, 0.0011, 0.0066, 0.06, 0.038, 0.0056, 0.0093, 0.00048, 0.0119, 0.0054, 0.0015, 0.0022, 4.01e-05, 0.349, 0.645, 0.0599, 0.116, 0.00123, 0.0358, 0.0074};
static double __NuclideDataList_GammaEnergies_5[] = {53.161, 79.6139, 80.9971, 160.613, 223.234, 276.398, 302.853, 356.017, 383.851};
static double __NuclideDataList_GammaIntensities_5[] = {0.02199, 0.0262, 0.3406, 0.00645, 0.0045, 0.07164, 0.1833, 0.6205, 0.0894};
static int __NuclideDataList_XrayLines_6[] = {LL_LINE, LA2_LINE, LH_LINE, LA1_LINE, LB4_LINE, LB1_LINE, LB3_LINE, LB6_LINE, LB2_LINE, LG1_LINE, LG2_LINE, LG3_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_6[] = {0.0037, 0.0097, 0.00134, 0.088, 0.0055, 0.056, 0.0092, 0.00084, 0.0185, 0.0094, 0.0017, 0.0024, 9.5e-05, 0.352, 0.635, 0.0625, 0.121, 0.00184, 0.04, 0.0159};
static double __NuclideDataList_GammaEnergies_6[] = {14.06383, 21.2, 54.1934, 68.2557, 69.67300, 75.42213, 83.36717, 89.48595, 96.8830, 97.43100, 103.18012, 118.1123, 166.5556, 172.3043, 172.85307};
static double __NuclideDataList_GammaIntensities_6[] = {0.00018, 0.00022, 8.4e-05, 0.000162, 0.02419, 0.000783, 0.00196, 0.00069, 2e-05, 0.29, 0.2111, 1.2e-06, 3e-06, 2e-06, 0.00036};
static int __NuclideDataList_XrayLines_7[] = {LL_LINE, LA2_LINE, LA1_LINE, LH_LINE, LB6_LINE, LB2_LINE, LB4_LINE, LB5_LINE, LB1_LINE, LB3_LINE, LG1_LINE, LG2_LINE, LG3_LINE, LG6_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_7[] = {0.0026, 0.0042, 0.0379, 0.00103, 0.00072, 0.01, 0.00024, 0.00211, 0.039, 0.00022, 0.0094, 0.0001, 9.4e-05, 0.002, 2.62e-09, 7.55e-07, 1.22e-06, 1.5e-07, 2.85e-07, 1.06e-08, 1.1e-07, 3.95e-08};
static double __NuclideDataList_GammaEnergies_7[] = {43.498, 99.853, 152.720, 200.97, 235.9, 258.23, 299.1, 705.9, 708.3, 742.81, 766.38, 783.4, 786.27, 804.4, 805.80, 808.20, 851.70, 880.5, 883.24, 904.37, 926.72, 941.94, 1001.03, 1041.7, 1085.4};
static double __NuclideDataList_GammaIntensities_7[] = {0.000395, 7.35e-05, 9.37e-06, 3.9e-08, 1e-10, 8.5e-10, 4.8e-10, 5.3e-10, 4.1e-09, 5.2e-08, 2.2e-07, 2.4e-10, 3.25e-08, 1.2e-09, 6e-10, 8e-09, 1.25e-08, 1.6e-09, 7.7e-09, 6.5e-10, 5.8e-09, 4.7e-09, 9.9e-09, 2.2e-09, 9.2e-10};
static int __NuclideDataList_XrayLines_8[] = {LL_LINE, LA2_LINE, LA1_LINE, LH_LINE, LB6_LINE, LB2_LINE, LB4_LINE, LB5_LINE, LB1_LINE, LB3_LINE, LG1_LINE, LG2_LINE, LG3_LINE, LG6_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_8[] = {0.0066, 0.0107, 0.096, 0.00153, 0.00184, 0.025, 0.015, 0.0065, 0.057, 0.0137, 0.0139, 0.0065, 0.0059, 0.0029, 2.8e-07, 8e-05, 0.00012, 1.5e-05, 2.8e-05, 1.1e-06, 1.1e-05, 4e-06};
static double __NuclideDataList_GammaEnergies_8[] = {26.3448, 32.183, 33.1964, 42.73, 43.423, 51.01, 55.56, 57.85, 59.5412, 64.83, 67.45, 69.76, 98.97, 102.98, 106.42, 109.70, 120.36, 123.01, 125.30, 146.55, 150.04, 154.27, 159.26, 161.54, 164.61, 165.81, 169.56, 175.07, 190.40, 191.96, 197.0, 201.70, 204.06, 208.00, 221.46, 232.81, 234.40, 246.73, 249.00, 260.80, 264.89, 267.54, 270.63, 275.77, 278.04, 291.30, 292.77, 304.21, 309.1, 322.52, 332.36, 335.38, 337.7, 340.56, 358.25, 368.59, 370.94, 376.65, 383.81, 389.0, 390.62, 398.64, 401, 406.35, 415.88, 419.33, 426.47, 429.94, 442.81, 446.43, 452.6, 454.66, 459.68, 463.22, 468.12, 485.91, 487.3, 512.5, 514.0, 522.06, 529.17, 545.4, 563.05, 573.94, 582.6, 586.59, 590.28, 597.48, 619.01, 627.18, 632.93, 641.47, 653.02, 662.40, 666.5, 669.83, 676.03, 680.10, 688.72, 693.62, 696.60, 709.45, 722.01, 729.72, 731.5, 737.34, 742.9, 755.90, 759.38, 763.9, 767.00, 770.57, 772.4, 777.2, 780.7, 782.2, 786.00, 789.17, 794.92, 801.94, 806.3, 812.01, 819.0, 822.6, 828.5, 835.6, 841.5, 847.4, 851.6, 854.7, 860.7, 862.7, 870.7, 887.3, 898.4, 902.5, 912.4, 921.5, 928.8, 945.7, 955.7, 1014.7};
static double __NuclideDataList_GammaIntensities_8[] = {0.024, 0.000174, 0.00126, 5.5e-05, 0.00073, 2.6e-07, 0.000181, 5.2e-05, 0.359, 1.45e-06, 4.2e-06, 2.9e-05, 0.000203, 0.000195, 1.5e-07, 4.9e-08, 4.5e-08, 1e-05, 4.08e-05, 4.61e-06, 7.4e-07, 5e-09, 1.4e-08, 1.5e-08, 6.67e-07, 2.32e-07, 1.73e-06, 1.82e-07, 2.2e-08, 2.16e-07, 4.9e-09, 8e-09, 2.9e-08, 7.91e-06, 4.24e-07, 4.6e-08, 7e-09, 2.42e-08, 5e-09, 1.21e-08, 9e-08, 2.63e-07, 6.4e-09, 6.6e-08, 4.4e-09, 3.1e-08, 1.42e-07, 1.01e-08, 1.4e-08, 1.52e-06, 1.49e-06, 4.96e-06, 4.29e-08, 4.3e-08, 1.2e-08, 2.17e-06, 5.23e-07, 1.38e-06, 2.82e-07, 4.9e-09, 5.9e-08, 2e-08, 4.9e-09, 1.45e-08, 3.1e-08, 2.87e-07, 2.46e-07, 1.15e-08, 3.5e-08, 4.9e-09, 2.4e-08, 9.7e-08, 3.6e-08, 1e-08, 2.88e-08, 1e-08, 4.4e-09, 1.15e-08, 2.6e-08, 9e-09, 4.6e-09, 7e-09, 7e-09, 1.25e-08, 2.3e-09, 1.31e-08, 2.86e-08, 7.4e-08, 5.94e-07, 5.6e-09, 1.26e-08, 7.1e-08, 3.77e-07, 3.64e-06, 4.9e-09, 3.8e-09, 6.4e-09, 3.13e-08, 3.25e-07, 3.68e-08, 5.34e-08, 6.41e-08, 1.96e-06, 1.33e-08, 4.7e-09, 8e-08, 3.5e-09, 7.6e-08, 1.67e-08, 2e-09, 5e-08, 4.74e-08, 2.66e-08, 6.1e-10, 2.5e-09, 1.5e-09, 6e-09, 3.9e-09, 9e-09, 1.36e-08, 3.1e-09, 6.1e-09, 4e-09, 2.2e-09, 2.4e-09, 2.1e-09, 4e-10, 2.7e-09, 3.8e-09, 2e-09, 8.2e-10, 5.3e-09, 4.6e-09, 2.2e-09, 7.2e-10, 3e-09, 2.5e-09, 1.9e-09, 5.5e-10, 5.6e-10, 5.8e-09, 6.4e-10};
static int __NuclideDataList_XrayLines_9[] = {LL_LINE, LA2_LINE, LA1_LINE, LH_LINE, LB6_LINE, LB2_LINE, LB4_LINE, LB5_LINE, LB1_LINE, LB3_LINE, LG1_LINE, LG2_LINE, LG3_LINE, LG6_LINE, KA3_LINE, KA2_LINE, KA1_LINE, KB3_LINE, KB1_LINE, KB5_LINE, KB2_LINE, KB4_LINE};
static double __NuclideDataList_XrayIntensities_9[] = {0.0022, 0.0035, 0.031, 0.00081, 0.0006, 0.0082, 0.00023, 0.00183, 0.03, 0.0002, 0.0073, 0.0001, 8.9e-05, 0.00154, 3e-09, 7.5e-07, 1.2e-06, 1.42e-07, 2.8e-07, 1.08e-08, 1.09e-07, 4e-08};
static double __NuclideDataList_GammaEnergies_9[] = {42.824, 98.860, 152.63, 251.47, 263.37, 289.21, 302.98, 340.70, 507.2, 554.60, 597.40, 606.10, 758.61, 817.89, 857.48, 895.3, 900.37};
static double __NuclideDataList_GammaIntensities_9[] = {0.00024, 1.62e-05, 9.8e-06, 9.8e-08, 5.4e-07, 4.7e-09, 1.67e-07, 1.7e-08, 7.8e-08, 7.9e-07, 4.9e-07, 7.3e-08, 1.27e-07, 6.4e-07, 5.4e-08, 1.7e-08, 1.2e-08};
static const struct radioNuclideData nuclideDataList[] = {
{"55Fe" ,26, 55, 29, 25, 13, __NuclideDataList_XrayLines_0, __NuclideDataList_XrayIntensities_0, 1, __NuclideDataList_GammaEnergies_0, __NuclideDataList_GammaIntensities_0},
{"57Co" ,27, 57, 30, 26, 13, __NuclideDataList_XrayLines_1, __NuclideDataList_XrayIntensities_1, 10, __NuclideDataList_GammaEnergies_1, __NuclideDataList_GammaIntensities_1},
{"109Cd" ,48, 109, 61, 47, 20, __NuclideDataList_XrayLines_2, __NuclideDataList_XrayIntensities_2, 1, __NuclideDataList_GammaEnergies_2, __NuclideDataList_GammaIntensities_2},
{"125I" ,53, 125, 72, 52, 20, __NuclideDataList_XrayLines_3, __NuclideDataList_XrayIntensities_3, 1, __NuclideDataList_GammaEnergies_3, __NuclideDataList_GammaIntensities_3},
{"137Cs" ,55, 137, 82, 56, 20, __NuclideDataList_XrayLines_4, __NuclideDataList_XrayIntensities_4, 2, __NuclideDataList_GammaEnergies_4, __NuclideDataList_GammaIntensities_4},
{"133Ba" ,56, 133, 77, 55, 20, __NuclideDataList_XrayLines_5, __NuclideDataList_XrayIntensities_5, 9, __NuclideDataList_GammaEnergies_5, __NuclideDataList_GammaIntensities_5},
{"153Gd" ,64, 153, 89, 63, 20, __NuclideDataList_XrayLines_6, __NuclideDataList_XrayIntensities_6, 15, __NuclideDataList_GammaEnergies_6, __NuclideDataList_GammaIntensities_6},
{"238Pu" ,94, 238, 144, 92, 22, __NuclideDataList_XrayLines_7, __NuclideDataList_XrayIntensities_7, 25, __NuclideDataList_GammaEnergies_7, __NuclideDataList_GammaIntensities_7},
{"241Am" ,95, 241, 146, 93, 22, __NuclideDataList_XrayLines_8, __NuclideDataList_XrayIntensities_8, 142, __NuclideDataList_GammaEnergies_8, __NuclideDataList_GammaIntensities_8},
{"244Cm" ,96, 244, 148, 94, 22, __NuclideDataList_XrayLines_9, __NuclideDataList_XrayIntensities_9, 17, __NuclideDataList_GammaEnergies_9, __NuclideDataList_GammaIntensities_9}
};