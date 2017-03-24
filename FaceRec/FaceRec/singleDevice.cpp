#include "singleDevice.h"
#include "singleDevice.h"



singleDevice::singleDevice(int id)
{
	start = false;

	cap = new VideoCapture(id);

	VideoWriter write;

	if (!cap->isOpened()) { 
		cout << "Error while opening your webcam\n"; 
		cin.ignore(); 
		return; 
	}

	setWinName();
	setFileName();
	setFps();

	int fcc = CV_FOURCC('D', 'I', 'V', '3');

	cv::Size fsize(cap->get(CV_CAP_PROP_FRAME_WIDTH), cap->get(CV_CAP_PROP_FRAME_HEIGHT));

	write = VideoWriter(fileName, fcc, fps, fsize);

	if (!write.isOpened()) { 
		cout << "Error while saving your video\n";
		cin.ignore(); 
		return;
	}

	start = true;

}


singleDevice::~singleDevice()
{
	delete winName;
	delete cap;
}


//-----------------------------------------------------------------------------------------
//Encapsulamentos 
//Sets

char* singleDevice::getWinName() {
	return winName;
}

string singleDevice::getFileName() {
	return fileName;
}

int singleDevice::getFps() {
	return fps;
}

int singleDevice::getFcc() {
	return fcc;
}

VideoCapture* singleDevice::getCap() {
	return cap;
}

VideoWriter singleDevice::getWrite() {
	return write;
}
bool singleDevice::getStart() {
	return start;
}

//-----------------------------------------------------------------------------------------------
//Gets

void  singleDevice::setWinName(char* winName) {
	this->winName = winName;
}

void singleDevice::setFileName(string fileName) {
	this->fileName = fileName;
}

void singleDevice::setFps(int fps) {
	this->fps = fps;
}

void singleDevice::setFcc(int fcc) {
	this->fcc = fcc;
}

//-----------------------------------------------------------------------------------------------

