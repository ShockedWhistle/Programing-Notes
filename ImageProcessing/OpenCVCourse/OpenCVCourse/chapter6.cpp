#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Color Detection

void main() {
	string path = "Resources/lambo.png";
	Mat img = imread(path);
	Mat imgHSV, mask;

	cvtColor(img, imgHSV, COLOR_BGR2HSV);
	int hmin = 0, smin = 110, vmin = 153;
	int hmax = 19, smax = 240, vmax = 255;

	// Used to find values for the color mask
	namedWindow("Trackbars", (640, 200));
	createTrackbar("Hue Min", "Trackbars", &hmin, 179);
	createTrackbar("Hue Max", "Trackbars", &hmax, 179);
	createTrackbar("Sat Min", "Trackbars", &smin, 255);
	createTrackbar("Sat Max", "Trackbars", &smax, 255);
	createTrackbar("Val Min", "Trackbars", &vmin, 255);
	createTrackbar("Val Max", "Trackbars", &vmax, 255);

	// Used so the track bars update the image indefinitly
	while (true) {

		Scalar lower(hmin, smin, vmin);
		Scalar upper(hmax, smax, vmax);
		inRange(imgHSV, lower, upper, mask); // Makes a color mask of all the pixels in the lower to upper ramge from the HSV image and puts it in the mask image

		imshow("Image", img);
		imshow("HSV", imgHSV);
		imshow("Mask", mask);

		waitKey(1);
	}
}