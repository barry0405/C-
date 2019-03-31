/*
 * FacadePattern Main
 * #include "facade.h"

int main()
{
    OnlineShoppingFacade facade;

    // 提交订单
    facade.submitRequest();

    // 跟踪订单，直到订单完成
    while (!facade.checkStatus());

    std::cout << "********** 订单完成，跟踪次数：" << facade.followupNum() << " **********" << std::endl;

    getchar();

    return 0;
}
*/

#include <iostream>
#include <string>

#include "TemplateMethodPattern/coffee.h"
#include "TemplateMethodPattern/tea.h"

using namespace std;

int main(int argc, char **argv)
{
	TeaWithHook cteaHook;
	CoffeeWithHook ccoffeeHook;

	cout << "Making tea..." << endl;
	cteaHook.prepareRecipe();

	cout << endl;

	cout << "Making coffee..." << endl;
	ccoffeeHook.prepareRecipe();
}

