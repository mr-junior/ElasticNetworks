#pragma once

#include <network.h>
#include <vector>

const network::node_positions_type& node_positions =
{
  {-3.137324414184,  -12.109642999101, -17.041595796478},
  {-4.398176668972,  -9.382328162968,  -19.593386833401},
  {-7.034851679247,  -8.376549183132,  -17.622990706364},
  {-9.383614402657,  -5.873304130530,  -17.125493190707},
  {-9.899700062370,  -2.078368230205,  -18.001240999244},
  {-6.692353208011,   0.458873133766,  -18.221442317399},
  {-3.563377164624,   0.936555736171,  -16.137492976708},
  {-0.897412641221,  -2.122826581323,  -15.708563174400},
  {-0.417851597737,  -5.888390954671,  -14.155200125699},
  {-1.185180421840,  -9.500037977539,  -15.382997876457},
  {-2.793509790947,  -8.456649785090,  -11.819269721450},
  {-6.591740010792,  -8.795187380837,  -10.243681939236},
  {-5.193269522462,  -5.711934837321,  -11.294312851656},
  {-5.815424076768,  -2.100132044187,  -10.880312170383},
  {-3.042072078068,   0.574456072631,  -11.485758549272},
  {-0.180043935278,  -2.359638207188,  -10.607022194492},
  { 0.034066822039,  -3.830978004768,  -7.231786367227},
  { 0.153089149514,  -7.618267519979,  -6.268763144247},
  {-3.219289285870,  -8.973716713648,  -6.895304359570},
  {-6.737661378292,  -7.572848677469,  -6.070285089810},
  {-7.551506624717,  -4.558574939327,  -7.841191403368},
  {-5.383461042235,  -3.332105030833,  -4.637207662909},
  {-3.594389615342,  -0.637133626608,  -7.303609471154},
  {-1.779868169004,  -1.302076615361,  -4.104069490120},
  {-0.164339817330,  -4.968230773689,  -3.840560309865},
  {-2.847829758437,  -5.762869063599,  -1.043848098208},
  {-6.146650578728,  -7.459355719082,   0.723403187001},
  {-8.559497605191,  -5.675505031852,   3.191775155016},
  {-7.696253437243,  -4.400613881456,   0.084928044018},
  {-7.738804044036,  -0.365494057597,  -0.165637817662},
  {-5.191053656809,  -2.181408299101,   2.477216850721},
  {-2.603099265663,  -1.255263991808,   0.414183429381},
  { 1.034694378279,   0.223399497211,   0.166983864285},
  { 4.015129481064,   0.723826379251,   1.917057454784},
  { 7.226029729305,   3.055219721390,   2.385651117619},
  { 7.358942019867,   6.927343183610,   1.906683516929},
  { 4.871003678787,   9.178686475634,   1.351369231012},
  { 1.063055891258,   8.282040770791,   1.608084924428},
  { 1.068529167926,   5.319997447749,  -0.256483513257},
  { 1.360903222874,   2.607310795313,   2.902465806898},
  { 0.874584632288,   0.591507373020,   5.665745494323},
  { 3.982013593050,   2.182627701960,   6.783401487853},
  { 7.798932478318,   2.969038213106,   5.914497275966},
  { 7.185210590644,   5.450461813569,   8.845023261603},
  { 10.219618227353,  5.885343282597,   6.863969306026},
  { 7.113512223394,   7.020404232547,   5.802979661785},
  { 3.407963703494,   6.261634989057,   5.667441150991},
  { 1.195317685712,   4.430106866540,   7.695230475790},
  { 1.067827913971,   1.894604225145,   10.063585824074},
  { 4.200720510905,   3.737623899724,   10.998014605296},
  { 5.263066279862,   0.407791868705,   10.341972150622},
  { 7.310663714420,   0.955225600390,   13.766104724690},
  { 7.700051707888,   4.415880246574,   14.268973170604},
  { 7.582667143684,   7.804920007029,   15.000303575963},
  { 4.641467511622,   7.035392486324,   12.427673020405},
  { 3.218148105467,   4.203151549999,   14.617345796435},
  { 3.435337588206,   1.233274084903,   16.546754198940},
  { 4.048205977859,  -0.870838584736,   19.525170951194},
  { 4.139076829070,   1.066747674687,   22.459772888659},
  { 6.191186754240,   3.658806453593,   21.503141983777},
  { 2.831838261729,   5.193851238789,   20.161598391076},
  {-0.891389924945,   6.086318487555,   19.796915342879},
  {-1.064546550609,   2.731135228623,   18.160838379556},
  {-0.540893688783,  -1.040231676405,   17.386283924273}
};

const std::vector<std::pair<std::size_t, std::size_t>> links =
{
  {0, 1}, {0, 2}, {0, 8}, {0, 9}, {0, 10},
  {1, 2}, {1, 3}, {1, 8}, {1, 9}, {1, 10},
  {2, 3}, {2, 4}, {2, 8}, {2, 9}, {2, 10}, {2, 11}, {2, 12},
  {3, 4}, {3, 5}, {3, 11}, {3, 12},
  {4, 5}, {4, 6},
  {5, 6}, {5, 7}, {5, 13}, {5, 14},
  {6, 7}, {6, 8}, {6, 13}, {6, 14}, {6, 15},
  {7, 8}, {7, 9}, {7, 10}, {7, 12}, {7, 13}, {7, 14}, {7, 15},
  {8, 9}, {8, 10}, {8, 11}, {8, 12}, {8, 13}, {8, 14}, {8, 15}, {8, 16},
  {9, 10}, {9, 11}, {9, 12},
  {10, 11}, {10, 12}, {10, 13}, {10, 15}, {10, 16}, {10, 17}, {10, 18}, {10, 19}, {10, 20},
  {11, 12}, {11, 13}, {11, 17}, {11, 18}, {11, 19}, {11, 20}, {11, 21},
  {12, 13}, {12, 14}, {12, 15}, {12, 16}, {12, 17}, {12, 18}, {12, 19}, {12, 20}, {12, 21}, {12, 22},
  {13, 14}, {13, 15}, {13, 16}, {13, 19}, {13, 20}, {13, 21}, {13, 22}, {13, 23},
  {14, 15}, {14, 16}, {14, 20}, {14, 22}, {14, 23}, 
  {15, 16}, {15, 17}, {15, 21}, {15, 22}, {15, 23}, {15, 24},
  {16, 17}, {16, 18}, {16, 19}, {16, 20}, {16, 21}, {16, 22}, {16, 23}, {16, 24}, {16, 25},
  {17, 18}, {17, 19}, {17, 21}, {17, 22}, {17, 23}, {17, 24}, {17, 25},
  {18, 19}, {18, 20}, {18, 21}, {18, 24}, {18, 25},
  {19, 20}, {19, 21}, {19, 22}, {19, 24}, {19, 25}, {19, 26}, {19, 28},
  {20, 21}, {20, 22}, {20, 23}, {20, 28},
  {21, 22}, {21, 23}, {21, 24}, {21, 25}, {21, 26}, {21, 28}, {21, 29}, {21, 30}, {21, 31},
  {22, 23}, {22, 24}, {22, 31},
  {23, 24}, {23, 25}, {23, 28}, {23, 29}, {23, 30}, {23, 31}, {23, 32},
  {24, 25}, {24, 26}, {24, 31}, {24, 32},
  {25, 26}, {25, 27}, {25, 28}, {25, 29}, {25, 30}, {25, 31}, {25, 32},
  {26, 27}, {26, 28}, {26, 29}, {26, 30}, {26, 31},
  {27, 28}, {27, 29}, {27, 30}, {27, 31},
  {28, 29}, {28, 30}, {28, 31},
  {29, 30}, {29, 31},
  {30, 31}, {30, 32}, {30, 40},
  {31, 32}, {31, 33}, {31, 38}, {31, 39}, {31, 40},
  {32, 33}, {32, 34}, {32, 38}, {32, 39}, {32, 40}, {32, 41},
  {33, 34}, {33, 35}, {33, 38}, {33, 39}, {33, 40}, {33, 41}, {33, 42}, {33, 46}, {33, 47},
  {34, 35}, {34, 36}, {34, 38}, {34, 39}, {34, 40}, {34, 41}, {34, 42}, {34, 43}, {34, 44}, {34, 45}, {34, 46},
  {35, 36}, {35, 37}, {35, 38}, {35, 39}, {35, 41}, {35, 42}, {35, 43}, {35, 44}, {35, 45}, {35, 46},
  {36, 37}, {36, 38}, {36, 39}, {36, 45}, {36, 46},
  {37, 38}, {37, 39}, {37, 45}, {37, 46}, {37, 47},
  {38, 39}, {38, 40}, {38, 46},
  {39, 40}, {39, 41}, {39, 42}, {39, 45}, {39, 46}, {39, 47}, {39, 48},
  {40, 41}, {40, 42}, {40, 46}, {40, 47}, {40, 48}, {40, 49}, {40, 50},
  {41, 42}, {41, 43}, {41, 44}, {41, 45}, {41, 46}, {41, 47}, {41, 48}, {41, 49}, {41, 50}, {41, 51}, {41, 54},
  {42, 43}, {42, 44}, {42, 45}, {42, 46}, {42, 47}, {42, 48}, {42, 49}, {42, 50},
  {43, 44}, {43, 45}, {43, 46}, {43, 47}, {43, 48}, {43, 49}, {43, 50}, {43, 51}, {43, 52}, {43, 53}, {43, 54}, {43, 55},
  {44, 45}, {44, 46}, {44, 49}, {44, 52}, {44, 54},
  {45, 46}, {45, 47}, {45, 49}, {45, 54},
  {46, 47}, {46, 48}, {46, 49}, {46, 50}, {46, 54},
  {47, 48}, {47, 49}, {47, 50}, {47, 54}, {47, 55},
  {48, 49}, {48, 50}, {48, 51}, {48, 54}, {48, 55}, {48, 56},
  {49, 50}, {49, 51}, {49, 52}, {49, 53}, {49, 54}, {49, 55}, {49, 56},
  {50, 51}, {50, 52}, {50, 54}, {50, 55}, {50, 56},
  {51, 52}, {51, 53}, {51, 54}, {51, 55}, {51, 56}, {51, 57},
  {52, 53}, {52, 54}, {52, 55}, {52, 56}, {52, 59}, {52, 60},
  {53, 54}, {53, 55}, {53, 56}, {53, 59}, {53, 60},
  {54, 55}, {54, 56},
  {55, 56}, {55, 57}, {55, 59}, {55, 60}, {55, 61}, {55, 62}, {55, 63},
  {56, 57}, {56, 58}, {56, 59}, {56, 60}, {56, 61}, {56, 62}, {56, 63},
  {57, 58}, {57, 59}, {57, 60}, {57, 62}, {57, 63},
  {58, 59}, {58, 60}, {58, 61}, {58, 62}, {58, 63},
  {59, 60}, {59, 61},
  {60, 61}, {60, 62}, {60, 63},
  {61, 62}, {61, 63},
  {62, 63}
};

