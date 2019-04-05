/*
 * GarageDoor.h
 *
 *  Created on: 2019Äê4ÔÂ5ÈÕ
 *      Author: barry
 */

#ifndef COMMANDPATTERN_GARAGEDOOR_H_
#define COMMANDPATTERN_GARAGEDOOR_H_

#include <iostream>
#include "Command.h"
using namespace std;

class GarageDoor
{
public:
	void Up()
	{
		cout << "GarageDoor id Up" << endl;
	}

	void off()
	{
		cout << "GarageDoor is off" << endl;
	}
};

class GarageDoorCloseCommand: public Command
{
public:
	GarageDoorCloseCommand(const GarageDoor &garageDoor)
	{
		m_GargeDoor = garageDoor;
	}

	virtual ~GarageDoorCloseCommand() {}

	virtual void execute() override
	{
		m_GargeDoor.off();
	}

	virtual void undo() override
	{
		m_GargeDoor.Up();
	}

private:
	GarageDoor m_GargeDoor;
};

class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(const GarageDoor &GarageDoor):m_GarageDoor(GarageDoor){}

	virtual ~GarageDoorOpenCommand() {}

	virtual void execute() override
	{
		m_GarageDoor.Up();
	}

	virtual void undo() override
	{
		m_GarageDoor.off();
	}
public:
	GarageDoor  m_GarageDoor;
};


#endif /* COMMANDPATTERN_GARAGEDOOR_H_ */
