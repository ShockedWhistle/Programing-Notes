#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void resizeCrop() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgResize, imgCrop;

	//cout << img.size() << endl;

	//resize(img, imgResize, Size(640,480)); // Changes aspect ratio
	resize(img, imgResize, Size(), .5, .5); // Scales

	Rect roi(200, 40, 300, 360); // Defines where the rectangle starts and then ho wbig it will be
	imgCrop = img(roi); // Will display from point 100, 100 300 accross and 250 down

	imshow("Image", img);
	imshow("Resize", imgResize);
	imshow("Resize", imgCrop);

	waitKey(0);
	
}