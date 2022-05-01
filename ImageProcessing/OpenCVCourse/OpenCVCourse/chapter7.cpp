#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void getContors(Mat imgIn, Mat draw) {
	vector<vector<Point>> contors;
	vector<Vec4i> hierarchy;

	findContours(imgIn, contors, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	//drawContours(draw, contors, -1, Scalar(255, 0, 255), 2);

	for (int i = 0; i < contors.size(); i++) { // Cycles through an gets the area inside the contors per shape
		int area = contourArea(contors[i]);
		cout << area << endl;

		vector<vector<Point>> conPoly(contors.size());
		vector<Rect> boundRect(contors.size());
		string objectType;

		if (area > 1000) {
			float peri = arcLength(contors[i], true); // gives perimiter of contors per shape
			approxPolyDP(contors[i], conPoly[i], 0.02 * peri, true); // Findes the corrners
			drawContours(draw, conPoly, i, Scalar(255, 0, 255), 2);
			cout << conPoly[i].size() << endl;
			boundRect[i] = boundingRect(conPoly[i]); // Findes the bounding rectangle
			rectangle(draw, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5); // Displayes the bounding rectangle
			
			int objCor = (int)conPoly[i].size();

			if (objCor == 3) { objectType = "Triangle"; }
			if (objCor == 4) {
				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
				if (aspRatio > .95 && aspRatio < 1.05) {
					objectType = "Square";
				}
				else {
					objectType = "Rectangle";
				}
			}
			if (objCor > 4) { objectType = "Circle"; }

			putText(draw, objectType, boundRect[i].tl(), FONT_HERSHEY_PLAIN, 1, Scalar(0, 0, 1), 1);

		}
	}
}

void contors() {
	string path = "Resources/shapes.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErr;

	// Preprocessing
	cvtColor(img, imgGray, COLOR_BGR2GRAY); // Gray scale
	GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
	Canny(imgBlur, imgCanny, 50, 150);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3)); // Creates a kernal to use with dialation use odd numbers
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErr, kernel);

	getContors(imgDil, img);

	imshow("Image", img);
	//imshow("Image Gray", imgGray);
	//imshow("Image Blur", imgBlur);
	//imshow("Image Canny", imgCanny);
	//imshow("Image Dilation", imgDil);
	//imshow("Image Erode", imgErr);

	waitKey(0);
}