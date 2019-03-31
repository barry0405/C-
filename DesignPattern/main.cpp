/*
 * FacadePattern Main
 * #include "facade.h"

int main()
{
    OnlineShoppingFacade facade;

    // �ύ����
    facade.submitRequest();

    // ���ٶ�����ֱ���������
    while (!facade.checkStatus());

    std::cout << "********** ������ɣ����ٴ�����" << facade.followupNum() << " **********" << std::endl;

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

