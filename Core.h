#pragma once

#include <iostream>
#include "Controller.h"
#include "CustomTaskExample.h";

class Core
{
public:


	void Run()
	{
		controller = std::make_unique<CController>(CController());
		currentTask = std::make_unique<CCustomTaskExample>(*controller);
		currentTask->Execute();
	}

private:
	std::unique_ptr<ITask> currentTask;
	std::unique_ptr<CController> controller;

};