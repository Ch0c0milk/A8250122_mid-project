#ifndef FARMER_H
#define FARMER_H
class Farmer {
public:
	Farmer();
	void calculateTotalPoint();		//�p�⪱�a��W���I��
	int getTotalPonit();
	void setPokerF(int pokerFIndex,int pokerIndex);
private:
	int pokerF[5];		//���a��W���P
	int poker[5];		//���a��P
	int totalPoint;		//�x�s�p��X�����a��P�I��
	int total;		//���a��P�I��
};
#endif// !FARMER_H