#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void shapeText() {

	// Blank Image
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255)); // Defines the image as being 512 by 512 and 8 bit unsighned
	// Scalar is a color value defined in BGR values, 0 to 255

	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED); // Draws a circle on an image the last thing defines thickness or if it should be filled
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED); // Draws a rectangle, x, y, width, height can also be used instead
	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2); // makes a line from point 1 to point 2
	//		image	Text		Start Point		Font				Scale	Color			Thickness
	putText(img, "Text Here", Point(137, 262), FONT_HERSHEY_COMPLEX, .75, Scalar(0, 69, 255), 2);

	imshow("Image", img);

	waitKey(0);

}