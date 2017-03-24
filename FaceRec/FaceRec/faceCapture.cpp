#include "faceCapture.h"
#include "capture.h"
#include "singleDevice.h"
#include <memory>


using namespace std;
using namespace cv;

faceCapture::faceCapture()
{
}


faceCapture::~faceCapture()
{
}
void faceCapture::startCapture(unique_ptr<singleDevice> myCamera) {

	Mat feed;
	while (myCamera->getStart())
	{
		cout << "teste";
		bool success = myCamera->getCap()->read(feed);
		if (!success) { 
			cout << "Error while processing your video\n"; 
			cin.ignore(); return;
		}
		myCamera->getWrite().write(feed);
		imshow(myCamera->getWinName(), feed);

		switch (waitKey(10))
		{
		case 27:
			return ;
		}
	}

}