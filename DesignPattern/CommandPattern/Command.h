/*
 * Command.h
 *
 *  Created on: 2019��4��5��
 *      Author: barry
 */

#ifndef COMMANDPATTERN_COMMAND_H_
#define COMMANDPATTERN_COMMAND_H_


class Command
{
public:
	virtual ~Command() {}

	virtual void execute() = 0;

	virtual void undo() = 0;
};

class CNoCommand : public Command
{
public:
	virtual ~CNoCommand() {}

	virtual void execute() override
	{
		return;
	}
};

#endif /* COMMANDPATTERN_COMMAND_H_ */
