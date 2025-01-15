/*
 RESIST KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬─────────────────────────────╮ ╭─────────────────────────┬──────────────────────────╮
 │      0   1   2   3   4     │      5   6   7   8   9      │ │     LN4 LN3 LN2 LN1 LN0 │  RN0 RN1 RN2 RN3 RN4     │
 │  10 11  12  13  14  15     │     16  17  18  19  20  21  │ │ LT5 LT4 LT3 LT2 LT1 LT0 │  RT0 RT1 RT2 RT3 RT4 RT5 │
 │     22  23  24  25  26     │     27  28  29  30  31      │ │     LM4 LM3 LM2 LM1 LM0 │  RM0 RM1 RM2 RM3 RM4     │
 │         32  33             │             34  35          │ │         LB1 LB0         │          RB0 RB1         │
 ╰───────────────┬────────────┼────────────┬────────────────╯ ╰──────────┬──────────────┼──────────────┬───────────╯
                 │ 36  37  38 │ 39  40  41 │                             │  LH2 LH1 LH0 │  RH0 RH1 RH3 │
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
#define LT0 15
#define LT1 14
#define LT2 13
#define LT3 12
#define LT4 11
#define LT5 10

// right-top row
#define RT0 16
#define RT1 17
#define RT2 18
#define RT3 19
#define RT4 20
#define RT5 21

// left-middle row
#define LM0 26
#define LM1 25
#define LM2 24
#define LM3 23
#define LM4 22

// right-middle row
#define RM0 27
#define RM1 28
#define RM2 29
#define RM3 30
#define RM4 31

// left-bottom row
#define LB0 33
#define LB1 32

// right-bottom row
#define RB0 34
#define RB1 35

// left thumb keys
#define LH0 38
#define LH1 37
#define LH2 36

// right thumb keys
#define RH0 39
#define RH1 40
#define RH2 41

