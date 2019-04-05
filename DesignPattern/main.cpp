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

/*
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
*/

#include <iostream>
#include "CommandPattern/RemoteControl.h"
#include "CommandPattern/light.h"
#include "CommandPattern/GarageDoor.h"
#include "CommandPattern/Stereo.h"


int main(int argc, char **argv)
{
	light clight;
	lightOnCommand clighton(clight);
	GarageDoor cgarageDoor;
	GarageDoorOpenCommand cGarageDoorOpen(cgarageDoor);

	SimpleRemoteControl remote(&clighton);

	remote.setCommand(&clighton);
	remote.buttonWasPressed();
	remote.setCommand(&cGarageDoorOpen);
	remote.buttonWasPressed();

	cout << "Remote Control test" << endl;

	RemoteControl cRemoteControl;
	light clivingRoomLight("Living Room");
	light ckitChenLight("kitchen");
	CStereo CStereo;

	lightOnCommand livingRoomLightOn(clivingRoomLight);
	lightOffCommand livingRoomLightOff(clivingRoomLight);

	lightOnCommand kitchenLightOn(ckitChenLight);
	lightOffCommand kitchenLightOff(ckitChenLight);

	GarageDoorCloseCommand cGarageDoorClose(cgarageDoor);

	CStereoOnWithCDCommand cstereoOnWithCD(CStereo);
	CStereoOffCommand cstereooff(CStereo);

	cRemoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
	cRemoteControl.setCommand(1, &kitchenLightOn, &kitchenLightOff);
	cRemoteControl.setCommand(2, &cGarageDoorOpen, &cGarageDoorClose);
	cRemoteControl.setCommand(3, &cstereoOnWithCD, &cstereooff);

	cRemoteControl.onButtonWasPushed(0);
	cRemoteControl.offButtonWasPushed(0);
	cRemoteControl.undoButtonWasPushed();
	cout << endl;
	cRemoteControl.onButtonWasPushed(1);
	cRemoteControl.offButtonWasPushed(1);
	cRemoteControl.undoButtonWasPushed();
	cout << endl;
	cRemoteControl.onButtonWasPushed(2);
	cRemoteControl.offButtonWasPushed(2);
	cRemoteControl.undoButtonWasPushed();
	cout << endl;
	cRemoteControl.onButtonWasPushed(3);
	cRemoteControl.offButtonWasPushed(3);
	cRemoteControl.undoButtonWasPushed();
	cout << endl;
}

