#include"Farmer.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(0));
	
	char choose;
	int i = 0;		//�p�ƾ��A�p�⪱�a���F�X���P
	Farmer farmer1;

	for (int j = 0; j < 2; j++) {		//�C���}�l�A���o�����a��i�P
		int randomCard = rand() % 52 + 1;
		farmer1.setPokerF(i, randomCard);
		i++;
	}

	farmer1.calculateTotalPoint();
	if (farmer1.getTotalPonit() == 21)		//�p�G2�i��P�M=21�A����Ĺ�o����
		cout << "BlackJack!!!!�AĹ�F!!!!!" << endl;
	else {
		cout << "�٭n�A�ɵP��? �n>>>��Jy;���n>>>��Jn" << endl;
		cin >> choose;

		while (choose == 121 && i < 5 && farmer1.getTotalPonit() <= 21) {		//y��ASCII�X��121

			int randomCard = rand() % 52 + 1;		//��@�i�P
			farmer1.setPokerF(i, randomCard);		//��쪺�P�����a
			farmer1.calculateTotalPoint();		//�p���`�I��
			i++;		//�p�ƾ��[�@
			cin >> choose;		//�A����J�M�w

		}
	}

	
}