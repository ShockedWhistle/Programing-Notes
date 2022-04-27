
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Impoting images

void image() {
	string path = "Resources/test.png";
	Mat img = imread(path); // Mat is a matrix datatype used to handel images
	imshow("Image", img);
	waitKey(0);
}

// Impoting video

void main() {
	string path = "Resources/test.png";
	Mat img = imread(path); // Mat is a matrix datatype used to handel images
	imshow("Image", img);
	waitKey(0);
}

