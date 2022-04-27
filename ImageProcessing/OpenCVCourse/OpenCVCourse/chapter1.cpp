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

void video() {
	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true) {
		cap.read(img);

		imshow("Image", img);
		waitKey(20);
	}
}

// Webcam

void webcam() {

	VideoCapture cap(0); // The number is the camera id to use
	Mat img;

	while (true) {
		cap.read(img);

		imshow("Image", img);
		waitKey(1);
	}
}
