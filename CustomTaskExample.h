#pragma once
#include "ITask.h"

class CCustomTaskExample : public ITask
{
public:
	CCustomTaskExample(CController& controller) :
	ITask(controller), 
	mController(controller){}

	void Execute() const override {
		mController.Print("owo");
		mController.GetConsoleInput();
	}

	void Close() const override {
	}

private:
	CController& mController;

};
