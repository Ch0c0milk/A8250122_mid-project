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

		if (item != 0) {		//確認手牌存在再繼續執行以下的分數判斷
			if (item % 13 >= 10 || item % 13 == 0)		//將10、J、Q、K都當作10分
				point = 10;
			else if (item % 13 == 1)		//A當作11分
				point = 11;
			else
				point = item % 13;		//剩下的依照牌面數字計算
		}

		totalPoint += point;		//加總
	}

	if (totalPoint > 21) {		//爆牌時若手牌中有A，將A判斷成1分

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