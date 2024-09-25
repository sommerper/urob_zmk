/*
 RESIST KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬─────────────────────────────╮ ╭─────────────────────────┬──────────────────────────╮
 │      0   1   2   3   4     │      5   6   7   8   9      │ │     LN4 LN3 LN2 LN1 LN0 │  RN0 RN1 RN2 RN3 RN4     │
 │     10  11  12  13  14     │     15  16  17  18  19      │ │     LT4 LT3 LT2 LT1 LT0 │  RT0 RT1 RT2 RT3 RT4     │
 │  20 21  22  23  24  25     │     26  27  28  29  30  31  │ │ LM5 LM4 LM3 LM2 LM1 LM0 │  RM0 RM1 RM2 RM3 RM4 RM5 │
 │     32  33  34  35  36     │     37  38  39  40  41      │ │     LB4 LB3 LB2 LB1 LB0 │  RB0 RB1 RB2 RB3 RB4     │
 │         42  43             │             44  45          │ │         LQ1 LQ0         │          RQ0 RQ1         │
 ╰───────────────┬────────────┼────────────┬────────────────╯ ╰──────────┬──────────────┼──────────────┬───────────╯
 │         46  47  48         │         49  50  51          │ │     LH4 LH3 LH2         │         RH2 RH3 RH4      │
 │           52  53           │           54  55            │ │         LH1 LH0         │          RH0 RH1         │
 ╰────────────────────────────┴─────────────────────────────╯ ╰─────────────────────────┼──────────────────────────╯
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

// right-top row
#define RT0 15
#define RT1 16
#define RT2 17
#define RT3 18
#define RT4 19

// left-middle row
#define LM0 25
#define LM1 24
#define LM2 23
#define LM3 22
#define LM4 21
#define LM5 20

// right-middle row
#define RM0 26
#define RM1 27
#define RM2 28
#define RM3 29
#define RM4 30
#define RM5 31

// left-bottom row
#define LB0 36
#define LB1 35
#define LB2 34
#define LB3 33
#define LB4 32

// right-bottom row
#define RB0 37
#define RB1 38
#define RB2 39
#define RB3 40
#define RB4 41

// left-q row
#define LQ0 43
#define LQ1 42

// right-q row
#define RQ0 44
#define RQ1 45

// left thumb keys top
#define LH2 48
#define LH3 47
#define LH4 46

// right thumb keys top
#define RH2 49
#define RH3 50
#define RH4 51

// left thumb keys bottom
#define LH0 53
#define LH1 52

// right thumb keys bottom
#define RH0 54
#define RH1 55

