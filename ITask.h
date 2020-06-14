#pragma once

class CController;

class ITask
{
public:
	ITask(CController& controller): 
	mController(controller){};
	
	virtual void Execute() const = 0;
	virtual void Close() const = 0;

	CController& mController;
};