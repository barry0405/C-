#include "facade.h"

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
