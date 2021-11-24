#include "MyForm.h"
#include "Neyro.h"
#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
using namespace SNSRBeta;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace std;

const int l1_arr = 300;
const int l2_arr = 100;
const int l3_arr = 80;
const int l4_arr = 120;
const int l5_arr = 450;

int l1[l1_arr] = {};
int l2[l2_arr] = {};
int l3[l3_arr] = {};
int l4[l4_arr] = {};
int l5[l5_arr] = {};
int q1; int q2;
int q4; int q3;
int q5;

//****************************************

int l1s[l1_arr] = {};
int l2s[l2_arr] = {};
int l3s[l3_arr] = {};
int l4s[l4_arr] = {};
int l5s[l5_arr] = {};
int qs1; int qs2;
int qs4; int qs3;
int qs5;
//****************************************
int inney1; int outney1;
int inney2; int outney2;
int inney3; int outney3;
int inney4; int outney4;
int inney5; int outney5;
int inney6; int outney6;
int inney7; int outney7;
int inney8; int outney8;
int inney9; int outney9;
int inney10; int outney10;
int inney11; int outney11;
int inney12; int outney12;
int inney13; int outney13;
int inney14; int outney14;
int inney15; int outney15;
int inney16; int outney16;
int inney17; int outney17;
int inney18; int outney18;
int inney19; int outney19;
int inney20; int outney20;
int inney21; int outney21;
int inney22; int outney22;
int inney23; int outney23;
int inney24; int outney24;
int inney25; int outney25;
int inney26; int outney26;
int inney27; int outney27;
int inney28; int outney28;
int inney29; int outney29;
int inney30; int outney30;

//******************************************

double out1;
int team1;
double out2;
int team2;

double chance_team1;
double chance_team2;

string team_name1;
string team_name2;

//******************************************

int ney1_1; int ney1_2; int ney1_3; int ney1_4; int ney1_5;
int ney1_6; int ney1_7; int ney1_8; int ney1_9; int ney1_10;

int ney2_1; int ney2_2; int ney2_3; int ney2_4; int ney2_5;
int ney2_6; int ney2_7; int ney2_8; int ney2_9; int ney2_10;

int ney3_1; int ney3_2; int ney3_3; int ney3_4; int ney3_5;
int ney3_6; int ney3_7; int ney3_8;

int ney4_1; int ney4_2; int ney4_3; int ney4_4; int ney4_5;
int ney4_6; int ney4_7; int ney4_8; int ney4_9; int ney4_10;
int ney4_11; int ney4_12; int ney4_13; int ney4_14; int ney4_15;

//******************************************

void neyrostart() {
	int i = -1;
	ney1_1 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_2 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_3 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_4 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_5 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_6 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_7 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_8 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_9 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i += 30;
	ney1_10 = layer1(inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30, l1s[i + 1], l1s[i + 2], l1s[i + 3], l1s[i + 4], l1s[i + 5], l1s[i + 6], l1s[i + 7], l1s[i + 8], l1s[i + 9], l1s[i + 10], l1s[i + 11], l1s[i + 12], l1s[i + 13], l1s[i + 14], l1s[i + 15], l1s[i + 16], l1s[i + 17], l1s[i + 18], l1s[i + 19], l1s[i + 20], l1s[i + 21], l1s[i + 22], l1s[i + 23], l1s[i + 24], l1s[i + 25], l1s[i + 26], l1s[i + 27], l1s[i + 28], l1s[i + 29], l1s[i + 30], q1);
	i = -1;
	//**********************************************************************

	ney2_1 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_2 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_3 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_4 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_5 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_6 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_7 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_8 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_9 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i += 10;
	ney2_10 = layer2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, l2s[i + 1], l2s[i + 2], l2s[i + 3], l2s[i + 4], l2s[i + 5], l2s[i + 6], l2s[i + 7], l2s[i + 8], l2s[i + 9], l2s[i + 10], q2);
	i = -1;

	//***********************************************************************

	ney3_1 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_2 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;	
	ney3_3 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_4 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_5 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_6 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_7 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i += 10;
	ney3_8 = layer3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ney2_7, ney2_8, ney2_9, ney2_10, l3s[i + 1], l3s[i + 2], l3s[i + 3], l3s[i + 4], l3s[i + 5], l3s[i + 6], l3s[i + 7], l3s[i + 8], l3s[i + 9], l3s[i + 10], q3);
	i = -1;

	//***********************************************************************

	ney4_1 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_2 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_3 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_4 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_5 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_6 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_7 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_8 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_9 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_10 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_11 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_12 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_13 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_14 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i += 8;
	ney4_15 = layer4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, l4s[i + 1], l4s[i + 2], l4s[i + 3], l4s[i + 4], l4s[i + 5], l4s[i + 6], l4s[i + 7], l4s[i + 8], q4);
	i = -1;

	//***********************************************************************
	outney1 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney2 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney3 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney4 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney5 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney6 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney7 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney8 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney9 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney10 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney11 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney12 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney13 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney15 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney16 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney17 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney18 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney19 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney20 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney21 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney22 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney23 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney24 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney25 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney26 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney27 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney28 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney29 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i += 15;
	outney30 = layer5(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, l5s[i + 1], l5s[i + 2], l5s[i + 3], l5s[i + 4], l5s[i + 5], l5s[i + 6], l5s[i + 7], l5s[i + 8], l5s[i + 9], l5s[i + 10], l5s[i + 11], l5s[i + 12], l5s[i + 13], l5s[i + 14], l5s[i + 15], q5);
	i = -1;
}
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

System::Void SNSRBeta::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int t1, t2;
    t1 = Convert::ToInt32(textBox1->Text);
    t2 = Convert::ToInt32(textBox2->Text);
    if (t1 == t2 || t1 < 1 || t1 > 30 || t2 < 1 || t2 > 30) {
        label6->Text = "Введите коректные данные";
		label17->Text = "";
		label18->Text = "";
		label20->Text = "";
		label21->Text = "";
    }
	else {
		label6->Text = "";
		inney1 = (t1 == 1 || t2 == 1) ? 1 : 0;
		inney2 = (t1 == 2 || t2 == 2) ? 1 : 0;
		inney3 = (t1 == 3 || t2 == 3) ? 1 : 0;
		inney4 = (t1 == 4 || t2 == 4) ? 1 : 0;
		inney5 = (t1 == 5 || t2 == 5) ? 1 : 0;
		inney6 = (t1 == 6 || t2 == 6) ? 1 : 0;
		inney7 = (t1 == 7 || t2 == 7) ? 1 : 0;
		inney8 = (t1 == 8 || t2 == 8) ? 1 : 0;
		inney9 = (t1 == 9 || t2 == 9) ? 1 : 0;
		inney10 = (t1 == 10 || t2 == 10) ? 1 : 0;
		inney11 = (t1 == 11 || t2 == 11) ? 1 : 0;
		inney12 = (t1 == 12 || t2 == 12) ? 1 : 0;
		inney13 = (t1 == 13 || t2 == 13) ? 1 : 0;
		inney14 = (t1 == 14 || t2 == 14) ? 1 : 0;
		inney15 = (t1 == 15 || t2 == 15) ? 1 : 0;
		inney16 = (t1 == 16 || t2 == 16) ? 1 : 0;
		inney17 = (t1 == 17 || t2 == 17) ? 1 : 0;
		inney18 = (t1 == 18 || t2 == 18) ? 1 : 0;
		inney19 = (t1 == 19 || t2 == 19) ? 1 : 0;
		inney20 = (t1 == 20 || t2 == 20) ? 1 : 0;
		inney21 = (t1 == 21 || t2 == 21) ? 1 : 0;
		inney22 = (t1 == 22 || t2 == 22) ? 1 : 0;
		inney23 = (t1 == 23 || t2 == 23) ? 1 : 0;
		inney24 = (t1 == 24 || t2 == 24) ? 1 : 0;
		inney25 = (t1 == 25 || t2 == 25) ? 1 : 0;
		inney26 = (t1 == 26 || t2 == 26) ? 1 : 0;
		inney27 = (t1 == 27 || t2 == 27) ? 1 : 0;
		inney28 = (t1 == 28 || t2 == 28) ? 1 : 0;
		inney29 = (t1 == 29 || t2 == 29) ? 1 : 0;
		inney30 = (t1 == 30 || t2 == 30) ? 1 : 0;
		neyrostart();
		team1 = t1;
		team2 = t2;

		switch (t1) {
		case 1: out1 = outney1; break;
		case 2: out1 = outney2; break;
		case 3: out1 = outney3; break;
		case 4: out1 = outney4; break;
		case 5: out1 = outney5; break;
		case 6: out1 = outney6; break;
		case 7: out1 = outney7; break;
		case 8: out1 = outney8; break;
		case 9: out1 = outney9; break;
		case 10: out1 = outney10; break;
		case 11: out1 = outney11; break;
		case 12: out1 = outney12; break;
		case 13: out1 = outney13; break;
		case 14: out1 = outney14; break;
		case 15: out1 = outney15; break;
		case 16: out1 = outney16; break;
		case 17: out1 = outney17; break;
		case 18: out1 = outney18; break;
		case 19: out1 = outney19; break;
		case 20: out1 = outney20; break;
		case 21: out1 = outney21; break;
		case 22: out1 = outney22; break;
		case 23: out1 = outney23; break;
		case 24: out1 = outney24; break;
		case 25: out1 = outney25; break;
		case 26: out1 = outney26; break;
		case 27: out1 = outney27; break;
		case 28: out1 = outney28; break;
		case 29: out1 = outney29; break;
		case 30: out1 = outney30; break;
		}
		switch (t2) {
		case 1: out2 = outney1; break;
		case 2: out2 = outney2; break;
		case 3: out2 = outney3; break;
		case 4: out2 = outney4; break;
		case 5: out2 = outney5; break;
		case 6: out2 = outney6; break;
		case 7: out2 = outney7; break;
		case 8: out2 = outney8; break;
		case 9: out2 = outney9; break;
		case 10: out2 = outney10; break;
		case 11: out2 = outney11; break;
		case 12: out2 = outney12; break;
		case 13: out2 = outney13; break;
		case 14: out2 = outney14; break;
		case 15: out2 = outney15; break;
		case 16: out2 = outney16; break;
		case 17: out2 = outney17; break;
		case 18: out2 = outney18; break;
		case 19: out2 = outney19; break;
		case 20: out2 = outney20; break;
		case 21: out2 = outney21; break;
		case 22: out2 = outney22; break;
		case 23: out2 = outney23; break;
		case 24: out2 = outney24; break;
		case 25: out2 = outney25; break;
		case 26: out2 = outney26; break;
		case 27: out2 = outney27; break;
		case 28: out2 = outney28; break;
		case 29: out2 = outney29; break;
		case 30: out2 = outney30; break;
		}
		out1 = 5;
		out2 = 5;
		/*team_name1 = commands_name(team1);
		team_name2 = commands_name(team2);*/
		label17->Text = Convert::ToString(team1);
		label18->Text = Convert::ToString(team2);
		label20->Text = Convert::ToString(int(out1 / (out1 + out2) * 100));
		label21->Text = Convert::ToString(int(out2 / (out1 + out2) * 100));

		inney1, inney2, inney3, inney4, inney5, inney6, inney7, inney8, inney9, inney10, inney11, inney12, inney13, inney14, inney15, inney16, inney17, inney18, inney19, inney20, inney21, inney22, inney23, inney24, inney25, inney26, inney27, inney28, inney29, inney30 = 0;
	}
}

System::Void SNSRBeta::MyForm::label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Разработчик @hacerio. Особая благодарность @vadimbrovich:)", "");
}

System::Void SNSRBeta::MyForm::label14_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Это список команд, которые есть в программе. Для работы программы введите номера двух команд, которые будут играть","Информация");
}

System::Void SNSRBeta::MyForm::label16_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Для связи напишите в telegram @hacerio. БЕЗ ПОВОДА НЕ ПИСАТЬ!", "Сдесь может быть ваша реклама");
}

System::Void SNSRBeta::MyForm::label3_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Вы можете меня потдержать на Patreon: ","Patreon");
}

System::Void SNSRBeta::MyForm::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	MessageBox::Show("Сайта ещё нет, пока пусть откроется гугл)) Всё же это Pre-release", "Oops");
	System::Diagnostics::Process::Start("http://www.google.com/");
}

System::Void SNSRBeta::MyForm::label5_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Сдесь будет подана информация о победителе турнира по версии Major Analytics. Информация будет автоматически коректироваться через интернет несколько раз", "Информация");
}

System::Void SNSRBeta::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Привет, спасибо что выбрали нас! Это бета версия программы, по этому могут быть баги. Сделано с любовью от @hacerio", "Приветствие");
	label6->Text = "";
	label17->Text = "";
	label18->Text = "";
	label20->Text = "";
	label21->Text = "";
}