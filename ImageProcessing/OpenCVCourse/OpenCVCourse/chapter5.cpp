#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void warpPerspective() {

	string path = "Resources/cards.jpg";
	Mat img = imread(path);
	Mat matrix, imgWarp;
	Mat queen;

	float w = 250, h = 350;

	Point2f src[4] = { {529, 142}, {771, 190}, {405, 395}, {674, 457} };
	Point2f dst[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };

	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix, Point(w, h));

	src[0] = { 60, 320 };
	src[1] = { 340, 276 };
	src[2] = { 86, 638 };
	src[3] = { 406, 576 };

	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, queen, matrix, Point(w, h));

	for (int i = 0; i < 4; i++) {
		circle(img, src[i], 10, Scalar(0, 0, 255), FILLED); // Puts circles where your geting the points from the image to warp
	}

	imshow("Cards", img);
	imshow("Image Warp", imgWarp);
	imshow("Queen", queen);

	waitKey(0);

}