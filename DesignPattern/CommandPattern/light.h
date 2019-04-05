/*
 * light.h
 *
 *  Created on: 2019Äê4ÔÂ5ÈÕ
 *      Author: barry
 */

#ifndef COMMANDPATTERN_LIGHT_H_
#define COMMANDPATTERN_LIGHT_H_

#include <iostream>
#include <string>
#include "Command.h"

using namespace std;

class light
{
public:
	light()
	{
		m_Position = "";
	}

	light(const string &position)
	{
		m_Position = position;
	}

	void on()
	{
		cout << m_Position << " light is on" << endl;
	}

	void off()
	{
		cout << m_Position << " light is off" << endl;
	}

private:
	string m_Position;
};


class lightOnCommand : public Command
{
public:
	virtual ~lightOnCommand() {}

	lightOnCommand(const light &clight)
	{
		m_light = clight;
	}

	virtual void execute() override
	{
		m_light.on();
	}

	virtual void undo() override
	{
		m_light.off();
	}
private:
	light m_light;
};

class lightOffCommand : public Command
{
public:
	lightOffCommand(light clight)
	{
		m_light = clight;
	}

	virtual void execute() override
	{
		m_light.off();
	}

	virtual void undo() override
	{
		m_light.on();
	}
private:
	light m_light;
};


#endif /* COMMANDPATTERN_LIGHT_H_ */
