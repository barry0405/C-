/*
 * Stereo.h
 *
 *  Created on: 2019Äê4ÔÂ5ÈÕ
 *      Author: barry
 */

#ifndef COMMANDPATTERN_STEREO_H_
#define COMMANDPATTERN_STEREO_H_

#include <iostream>

using namespace std;

class CStereo
{
public:
	void on()
	{
		cout << "CStereo is on" << endl;
	}

	void off()
	{
		cout << "CStereo is off" << endl;
	}

	void setCd()
	{
		cout << "CStereo Cd is Ok!" << endl;
	}

	void setDvd()
	{
		cout << "CStereo Dvd is Ok!" << endl;
	}

	void setRadio()
	{
		cout << "CStereo Radio is Ok!" << endl;
	}

	void setVolume()
	{
		cout << "CStereo Volume is set ok!" << endl;
	}
};


class CStereoOnWithCDCommand : public Command
{
public:
	CStereoOnWithCDCommand(CStereo stereo)
	{
		m_Stereo = stereo;
	}

	virtual ~CStereoOnWithCDCommand() {}

	virtual void execute() override
	{
		m_Stereo.on();
		m_Stereo.setCd();
		m_Stereo.setVolume();
	}

	virtual void undo() override
	{
		m_Stereo.off();
	}
private:
	CStereo m_Stereo;
};


class CStereoOffCommand:public Command
{
public:
	CStereoOffCommand(CStereo stereo)
	{
		m_Stereo = stereo;
	}

	virtual ~CStereoOffCommand() {}

	virtual void execute() override
	{
		m_Stereo.off();
	}

	virtual void undo() override
	{
		m_Stereo.on();
		m_Stereo.setCd();
		m_Stereo.setVolume();
	}

private:
	CStereo m_Stereo;
};


#endif /* COMMANDPATTERN_STEREO_H_ */
