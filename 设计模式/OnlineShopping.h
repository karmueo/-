#pragma once
#include <iostream>

class OnlineShopping
{
public:
	// ѡ����Ʒ
	virtual void selectProduct() = 0;
	// ��ӵ����ﳵ
	virtual void addToCart() = 0;
	// ��Ǯ
	virtual void account() = 0;
	// �������򷽷�
	void shopping();
};