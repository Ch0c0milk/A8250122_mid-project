#include<iostream>
#include<ctime>
using namespace std;
class Pokers
{

public:
	Pokers();           //�غc�禡�A��P��l��
	void initPoker();  //�~�P,�b�C���C���}�l�e�i��
	string getPokerF();  //�Φr�ꪺ�Φ���^���a���P
	string getPokerL();  //�Φr�ꪺ�Φ���^���a���P
	int getSumF();       //��^���a�P���I�ơA�ΥH�P�_�O�_�W�L21�I
	int getSumL();       //��^���a�P���I��
	void farmerAsk();           //���a�n�P
	void landlordAsk();         //���a�n�P
	void inputBet();            //���a��J��`
	void newGame();            //�}�l�s�C��
	void landlordProcess();        //�b���a���n�P�ɶi��B�z
private:
	int poker[53];     //���J
	int pokerValue[53]; //���J�N���ƭ�
	string pokerName[53]; //���J�P�W��
	int money;   //���a����  
	int bet;     //���a����`
	int pokerF[5];   //���a�⤤���P    
	int pokerL[5];   //���a�⤤���P
	int pokerNumF;   //���a�⤤���P��
	int pokerNumL;   //���a�⤤���P��

};


Pokers::Pokers()
{

}
void Pokers::initPoker()
{

}

string Pokers::getPokerF()
{
	return string();
}

string Pokers::getPokerL()
{
	return string();
}

int Pokers::getSumF()
{
	return 0;
}

int Pokers::getSumL()
{
	return 0;
}

void Pokers::farmerAsk()
{
}

void Pokers::landlordAsk()
{
}

void Pokers::inputBet()
{
}

void Pokers::newGame()
{
}

void Pokers::landlordProcess()
{
}
