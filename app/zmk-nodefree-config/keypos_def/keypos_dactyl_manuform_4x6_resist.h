/*
 RESIST KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬─────────────────────────────╮ ╭─────────────────────────┬──────────────────────────╮
 │      0   1   2   3   4     │      5   6   7   8   9      │ │     LN4 LN3 LN2 LN1 LN0 │  RN0 RN1 RN2 RN3 RN4     │
 │  30 10  11  12  13  14     │     15  16  17  18  19  39  │ │ LT5 LT4 LT3 LT2 LT1 LT0 │  RT0 RT1 RT2 RT3 RT4 RT5 │
 │     20  21  22  23  24     │     25  26  27  28  29      │ │     LM4 LM3 LM2 LM1 LM0 │  RM0 RM1 RM2 RM3 RM4     │
 │         31  32             │             37  38          │ │         LB1 LB0         │          RB0 RB1         │
 ╰───────────────┬────────────┼────────────┬────────────────╯ ╰──────────┬──────────────┼──────────────┬───────────╯
                 │ 40  33  34 │ 35  36  41 │                             │  LH2 LH1 LH0 │  RH0 RH1 RH3 │
                 ╰────────────┴────────────╯                             ╰──────────────┴──────────────╯
*/




#pragma once

// left-num row
#define LN0 4
#define LN1 3
#define LN2 2
#define LN3 1
#define LN4 0

// right-num row
#define RN0 5
#define RN1 6
#define RN2 7
#define RN3 8
#define RN4 9

// left-top row
#define LT0 14
#define LT1 13
#define LT2 12
#define LT3 11
#define LT4 10
#define LT5 30

// right-top row
#define RT0 15
#define RT1 16
#define RT2 17
#define RT3 18
#define RT4 19
#define RT5 39

// left-middle row
#define LM0 24
#define LM1 23
#define LM2 22
#define LM3 21
#define LM4 20

// right-middle row
#define RM0 25
#define RM1 26
#define RM2 27
#define RM3 28
#define RM4 29

// left-bottom row
#define LB0 32
#define LB1 31

// right-bottom row
#define RB0 37
#define RB1 38

// left thumb keys
#define LH0 34
#define LH1 33
#define LH2 40

// right thumb keys
#define RH0 35
#define RH1 36
#define RH2 41

