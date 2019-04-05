/*
 * RemoteControl.h
 *
 *  Created on: 2019Äê4ÔÂ5ÈÕ
 *      Author: barry
 */

#ifndef COMMANDPATTERN_REMOTECONTROL_H_
#define COMMANDPATTERN_REMOTECONTROL_H_

#include "Command.h"

#define REMOTE_CONTROL_MAX_SLOT 7

class SimpleRemoteControl
{
public:
	SimpleRemoteControl(Command *slot)
	{
		m_slot = slot;
	}
	void setCommand(Command *slot)
	{
		m_slot = slot;
	}

	 void buttonWasPressed()
	 {
		 m_slot->execute();
	 }

public:
	Command *m_slot;
};

class RemoteControl
{
public:
	RemoteControl()
	{
		for (int i = 0; i < REMOTE_CONTROL_MAX_SLOT; i++)
		{
			m_onCommands[i] = NULL;
			m_offCommands[i] = NULL;
		}
		m_undoCommand = NULL;
	}

	void setCommand(int slot, Command *onCommand, Command *offCommand)
	{
		m_onCommands[slot] = onCommand;
		m_offCommands[slot] = offCommand;
	}

	void onButtonWasPushed(int slot)
	{
		m_onCommands[slot]->execute();
		m_undoCommand = m_onCommands[slot];
	}

	void offButtonWasPushed(int slot)
	{
		m_offCommands[slot]->execute();
		m_undoCommand = m_offCommands[slot];
	}

	void undoButtonWasPushed()
	{
		m_undoCommand->undo();
	}
public:
	Command *m_onCommands[REMOTE_CONTROL_MAX_SLOT];
	Command *m_offCommands[REMOTE_CONTROL_MAX_SLOT];
	Command *m_undoCommand;
};
#endif /* COMMANDPATTERN_REMOTECONTROL_H_ */
