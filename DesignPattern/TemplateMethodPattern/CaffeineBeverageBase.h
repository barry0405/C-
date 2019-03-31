/*
 * CaffeineBeverageBase.h
 *
 *  Created on: 2019��3��31��
 *      Author: barry
 */

#ifndef TEMPLATEMETHODPATTERN_CAFFEINEBEVERAGEBASE_H_
#define TEMPLATEMETHODPATTERN_CAFFEINEBEVERAGEBASE_H_

#include <iostream>

using namespace std;

class CaffeineBeverageWithHook
{
public:
	/*ģ�巽��*/
	virtual void prepareRecipe() final
	{
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments())
		{
			addCondiments();
		}
	}

	virtual ~CaffeineBeverageWithHook()
	{

	}

	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	void boilWater()
	{
		cout << "Boiling water" << endl;
	}

	void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}

	virtual bool customerWantsCondiments()
	{
		return true;
	}
};


#endif /* TEMPLATEMETHODPATTERN_CAFFEINEBEVERAGEBASE_H_ */
