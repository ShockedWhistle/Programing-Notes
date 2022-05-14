#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

vector<vector<int>> myColors{ {},	// Purple 100, 125  175, 255  78, 255
									// Green 50, 125  130, 255  0, 168
									// Grey 90, 115  150, 225  85, 200
								{},
								{} };

void findColor(Mat img) {
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	Scalar lower(hmin, smin, vmin);
	Scalar upper(hmax, smax, vmax);
	inRange(imgHSV, lower, upper, mask);
}


void main() {

	VideoCapture cap(0); 
	Mat img;

	while (true) {
		cap.read(img);
		findColor(img);

		imshow("Image", img);
		waitKey(1);
	}
}
