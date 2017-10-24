/* date:        24-10-2017
 * author:      Jannis Konopka
 * description:
 */



#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
    // Parse command line arguments
    CommandLineParser parser(argc, argv,
        "{help   |             | print this message}"
        "{@image | ../lena.dib | image path}"
    );

    if (parser.has("help")) {
        parser.printMessage();
        return 0;
    }

    // Load image
    string filename = parser.get<string>("@image");
    Mat img = imread(filename); // ,IMREAD_GRAYSCALE (Load Picture as grayscale)

    if (img.empty()) {
        cout << "Input image not found at '" << filename << "'\n";
        return 1;
    }

    //------------------------------Checked preconditions-----------------------
    //------------------------------Main Program starts-------------------------
    cout << "Hello" << endl;

    imshow("Original", img);
    waitKey();
    return 0;
}
