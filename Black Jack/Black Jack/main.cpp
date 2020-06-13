#include"Farmer.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(0));
	
	char choose;
	int i = 0;		//計數器，計算玩家拿了幾次牌
	Farmer farmer1;

	for (int j = 0; j < 2; j++) {		//遊戲開始，先發給玩家兩張牌
		int randomCard = rand() % 52 + 1;
		farmer1.setPokerF(i, randomCard);
		i++;
	}

	farmer1.calculateTotalPoint();
	if (farmer1.getTotalPonit() == 21)		//如果2張手牌和=21，直接贏得比賽
		cout << "BlackJack!!!!你贏了!!!!!" << endl;
	else {
		cout << "還要再補牌嗎? 要>>>輸入y;不要>>>輸入n" << endl;
		cin >> choose;

		while (choose == 121 && i < 5 && farmer1.getTotalPonit() <= 21) {		//y的ASCII碼為121

			int randomCard = rand() % 52 + 1;		//抽一張牌
			farmer1.setPokerF(i, randomCard);		//抽到的牌給玩家
			farmer1.calculateTotalPoint();		//計算總點數
			i++;		//計數器加一
			cin >> choose;		//再次輸入決定

		}
	}

	
}