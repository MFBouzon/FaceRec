#pragma once
#include "singleDevice.h"
#include <memory>
class capture

{
public:	
	
	virtual void startCapture(unique_ptr<singleDevice>) = 0;
};

