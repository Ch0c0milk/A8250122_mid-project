#include"Farmer.h"

Farmer::Farmer() {
	srand(time(0));
	pokerF[5] = {};
	poker[5] = {};
	total = 0;
	totalPoint = 0;
	page = 0;


	for (int j = 0; j < 2; j++) {		//�C���}�l�A���o�����a��i�P
		int randomCard = rand() % 52 + 1;
		setPokerF(page, randomCard);
		page++;
	}
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
	char choose;
	if (getTotalPonit() == 21)		//�p�G2�i��P�M=21�A����Ĺ�o����
		cout << "BlackJack!!!!�AĹ�F!!!!!" << endl;
	else {
		cout << "�٭n�A�ɵP��? �n>>>��Jy;���n>>>��Jn" << endl;
		cin >> choose;

		while (choose == 121 && page < 5 && getTotalPonit() <= 21) {		//y��ASCII�X��121

			int randomCard = rand() % 52 + 1;		//��@�i�P
			setPokerF(page, randomCard);		//��쪺�P�����a
			calculateTotalPoint();		//�p���`�I��
			page++;	//�p�ƾ��[�@
			cin >> choose;		//�A����J�M�w

		}
	
}




