/*
 * coffee.h
 *
 *  Created on: 2019Äê3ÔÂ31ÈÕ
 *      Author: barry
 */

#ifndef TEMPLATEMETHODPATTERN_COFFEE_H_
#define TEMPLATEMETHODPATTERN_COFFEE_H_

#include "CaffeineBeverageBase.h"
#include <string>
using namespace std;

class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
	virtual void brew() override
	{
		cout << "Dripping Coffee through filter" << endl;
	}

	virtual void addCondiments() override
	{
		cout << "Adding Sugar and Milk" << endl;
	}

	virtual bool customerWantsCondiments() override
	{
		string sanswer;
		cout << "Would you like milk and sugar with your coffee (y/n)?" << endl;
		cin >> sanswer;
		if (std::string::npos != sanswer.find('y'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


#endif /* TEMPLATEMETHODPATTERN_COFFEE_H_ */
