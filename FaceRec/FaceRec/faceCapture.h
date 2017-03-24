#pragma once
#include "capture.h"
#include <cv.h>
#include <highgui.h>
#include "singleDevice.h"



class faceCapture : public capture
{

public:

	faceCapture();

	~faceCapture();

	void startCapture(unique_ptr<singleDevice>);
};

