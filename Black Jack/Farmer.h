#ifndef FARMER_H
#define FARMER_H
#include"Farmer.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
class Farmer {
public:
	Farmer();
	void calculateTotalPoint();		//�p�⪱�a��W���I��
	int getTotalPonit();
	void setPokerF(int pokerFIndex,int pokerIndex);
	void PokerA();//�P�w�ӭt
private:
	int pokerF[5];		//���a��W���P
	int poker[5];		//���a��P
	int totalPoint;		//�x�s�p��X�����a��P�I��
	int total;		//���a��P�I��
	int page;//��P�i��
};
#endif// !FARMER_H