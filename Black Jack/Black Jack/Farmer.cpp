#include"Farmer.h"

Farmer::Farmer() {
	pokerF[5] = {};
	poker[5] = {};
	total = 0;
	totalPoint = 0;
}

void Farmer::calculateTotalPoint() {

	int point;

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