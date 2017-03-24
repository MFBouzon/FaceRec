#pragma once


#include <opencv2\opencv.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <cv.h>
#include <highgui.h>
#include <iostream>
#include <string>



using namespace std;
using namespace cv;

class singleDevice
{

public:

	//Singleton Patterns
	//--------------------------------------------------------------------
	static bool single;
	static singleDevice* makeSingletonDevice(int id) {

		if (!single) {

			single = true;
			return new singleDevice(0);
		}
		return nullptr;

	}
	//---------------------------------------------------------------------
	//Encapsulamentos

	char * getWinName();
	string getFileName();
	int getFps();
	int getFcc();
	VideoCapture* getCap();
	VideoWriter getWrite();
	bool getStart();

	void setWinName(char* = "Feed");
	void setFileName(string = "D:/vid.avi");
	void setFps(int =  25);
	void setFcc(int );
	
	//---------------------------------------------------------------------

	~singleDevice();

private:
	//----------------------------------------------------------------------------
	//Variaveis do Device

	char *winName;
	VideoCapture *cap;
	VideoWriter write;
	string fileName;
	int fcc;
	int fps;
	bool start;

	//----------------------------------------------------------------------------------
	singleDevice(int  = 0);
	
};

	