
#define COMMON_CATHODE


#define segment_A 7
#define segment_B 5
#define segment_C 3
#define segment_D 1
#define segment_E 0
#define segment_F 6
#define segment_G 4
#define segment_DP 2


#ifdef COMMON_CATHODE
extern const char numbers[10] = {
/*0*/ (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*1*/ (1 << segment_C) | (1 << segment_B),
/*2*/ (1 << segment_D) | (1 << segment_E) | (1 << segment_G) | (1 << segment_B) | (1 << segment_A),
/*3*/ (1 << segment_G) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*4*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_C) | (1 << segment_B),
/*5*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A),
/*6*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A),
/*7*/ (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*8*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*9*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)

#define DecimalPoint (1<<segment_DP)
#define ClearDisplay 0
#else
extern const char numbers[10] = {
/*0*/ ~((1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*1*/ ~((1 << segment_C) | (1 << segment_B)),
/*2*/ ~((1 << segment_D) | (1 << segment_E) | (1 << segment_G) | (1 << segment_B) | (1 << segment_A)),
/*3*/ ~((1 << segment_G) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*4*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_C) | (1 << segment_B)),
/*5*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A)),
/*6*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A)),
/*7*/ ~((1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*8*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*9*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A))

#define DecimalPoint ~(1<<segment_DP)
#define ClearDisplay 255
#endif
};
