#include"Farmer.h"

srand(time(0));

Farmer::Farmer() {

	pokerF[5] = {};
	poker[5] = {};
	total = 0;
	totalPoint = 0;
	page = 0;//�p��

	//for (int j = 0; j < 2; j++) {		//�C���}�l�A���o�����a��i�P
		int randomCard = rand() % 52 + 1;
		setPokerF(page, randomCard);
		page++;
	//}********�]����bug�ҥH��l�Ƶo�@���N�n********
	calculateTotalPoint();
}

void Farmer::calculateTotalPoint() {

	int point=0;

	for (int const &item : pokerF ) {

		if (item != 0) {		//�T�{��P�s�b�A�~�����H�U�����ƧP�_
			if (item % 13 >= 10 || item % 13 == 0)		//�N10�BJ�BQ�BK����@10��
				point = 10;
			else if (item % 13 == 1)		//A��@11��
				point = 11;
			else
				point = item % 13;		//�ѤU���̷ӵP���Ʀr�p��
		}

		totalPoint += point;		//�[�`
	}

	if (totalPoint > 21) {		//�z�P�ɭY��P����A�A�NA�P�_��1��

		for (int const &item : pokerF) {
			if (item == 1 || item == 14 || item == 27 || item == 40)
				totalPoint -= 10;
		}
	}
}

int Farmer::getTotalPonit() {
	return totalPoint;
}

void Farmer::setPokerF(int pokerFIndex, int pokerIndex) {
	pokerF[pokerFIndex] = pokerIndex;
}

void Farmer::PokerA()
{
	if (getTotalPonit() == 21)		//�p�G2�i��P�M=21�A����Ĺ�o����
		cout << "BlackJack!!!!�AĹ�F!!!!!" << endl;
	else if (getTotalPonit() < 21) {
		int randomCard = rand() % 52 + 1;		//��@�i�P
		setPokerF(page, randomCard);		//��쪺�P�����a
		calculateTotalPoint();		//�p���`�I��
		page++;	//�p�ƾ��[�@
	}
	else {
		cout << "�A�z�F�A����" << endl;
		cout << endl;

		for (int i = 0, i < 5; i++) {//�M�Ū��a��W���P
			setPokerF(i, 0);
		}

	}
	
	int getPokerF(index) {
		return getPokerF(index);
	}