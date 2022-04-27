
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Basic Functions

void Basic() {

	string path = "Resources/test.png";
	Mat img = imread(path); // Mat is a matrix datatype used to handel images
	Mat imgGray;
	Mat imgBlur;
	Mat imgCanny, imgDil, imgErr;


	cvtColor(img, imgGray, COLOR_BGR2GRAY); // Gray scale
	GaussianBlur(img, imgBlur, Size(3,3), 3, 0);
	Canny(imgBlur, imgCanny, 50, 150);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3)); // Creates a kernal to use with dialation use odd numbers
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErr, kernel);

	imshow("Image", img);
	imshow("Image Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erode", imgErr);
	waitKey(0);
}
