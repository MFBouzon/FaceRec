// opencv.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "singleDevice.h"
#include <opencv2\opencv.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <cv.h>
#include <highgui.h>
#include <iostream>
#include "faceCapture.h"
#include "capture.h"
#include <memory>


string str[] = dictory.getfiles(@"C:\admin\DBA", "rafael"*, source.alldirectory);
//----------------------------------------------------
bool singleDevice::single = 0;
//----------------------------------------------------

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	cout << "Versao do opencv: " << CV_MAJOR_VERSION << "." << CV_MINOR_VERSION << endl << endl;

	unique_ptr<singleDevice>  myCamera(singleDevice::makeSingletonDevice(0));

	unique_ptr<capture> validaFace(new	faceCapture());
	unique_ptr<capture> smartFace(new	faceCapture());
	unique_ptr<capture> (new	faceCapture());

	vector<unique_ptr <capture> > vec();


	while (exits){

		switch :
		case vec[0]
		{
		default:
			break;
		}
	}

	mySession->startCapture(std::move(myCamera));


	return 0;
}

