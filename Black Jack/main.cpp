#include"Farmer.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	char choose=121;
	Farmer farmer1;
	string Poker[53] = {" ",A,2,3,4,5,6,7,8,9,10.J,Q,K,A,2,3,4,5,6,7,8,9,10.J,Q,K ,A,2,3,4,5,6,7,8,9,10.J,Q,K ,A,2,3,4,5,6,7,8,9,10.J,Q,K };

	cout << "*************21�I�C��******************" << endl;

	while (choose == 121 && page < 5 && getTotalPonit() <= 21) {		//y��ASCII�X��121
		farmer1.PokerA();//�o�@�i�P

		cout << "�A��W���P��:";
		for (int i = 0; i < 5; i++)
			cout << Poker[farmer1.getPokerF(i)] << " ";

		cout << "�ɵP>>>��Jy ; ���ɵP>>>��Jn" << endl;
		cin >> choose;		//�A����J�M�w
	}
}