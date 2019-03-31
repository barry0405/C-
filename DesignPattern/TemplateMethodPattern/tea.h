/*
 * tea.h
 *
 *  Created on: 2019Äê3ÔÂ31ÈÕ
 *      Author: barry
 */

#ifndef TEMPLATEMETHODPATTERN_TEA_H_
#define TEMPLATEMETHODPATTERN_TEA_H_

#include "CaffeineBeverageBase.h"

class TeaWithHook : public CaffeineBeverageWithHook
{
public:
	virtual void brew() override
	{
		cout << "Steeping the tea" << endl;
	}

	virtual void addCondiments() override
	{
		cout << "Adding Lemon" << endl;
	}

	virtual bool customerWantsCondiments() override
	{
		string sanswer;
		cout << "Would you like lemon with your tea (y/n)?" << endl;
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



#endif /* TEMPLATEMETHODPATTERN_TEA_H_ */
