

#ifndef FFE_hpp
#define FFE_hpp

#include <stdio.h>
#include <OpenNI.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <opencv2/video/background_segm.hpp>
#include <opencv2/videoio.hpp>
using namespace cv;
using namespace std;
using namespace openni;
typedef unsigned short UINT16;

void ForegroundFrameExtract(string src, string aim);
void oni_to_AVI(string oni, string aim);
double diff_count(Mat &frontimg);

#endif /* FFE_hpp */
