#pragma once
#include <iostream>

class OnlineShopping
{
public:
	// 选择商品
	virtual void selectProduct() = 0;
	// 添加到购物车
	virtual void addToCart() = 0;
	// 付钱
	virtual void account() = 0;
	// 整个购买方法
	void shopping();
};