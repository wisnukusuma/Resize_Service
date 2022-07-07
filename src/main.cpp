#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <drogon/drogon.h>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <base64.h>
 #include <iostream>
 #include <fstream>
 
using namespace drogon;
using namespace cv;
/*
int main(int argc, char** argv )
{
    std::string encoded_png;
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    std::cout<<image<<"<------------------------------------->"<<std::endl;
    std::vector<uchar> buf;
    imencode(".png", image, buf);
    auto base64_png = reinterpret_cast<const unsigned char*>(buf.data()); 
    encoded_png = base64_encode(base64_png, buf.size());
    std::string decoded_png =base64_decode(encoded_png);
    std::vector<uchar> dec_data(decoded_png.begin(),decoded_png.end());
    Mat dec_image=imdecode(Mat(dec_data),1);
    std::ofstream myfile("/home/wisnu/resizer_service/file_encoded/encoded.txt", std::ios::binary);
    myfile<<encoded_png;
    myfile.close();
    //std::cout<<dec_image;
    namedWindow("Encoded Image", WINDOW_AUTOSIZE );
    imshow("Encoded Image", image);
   // namedWindow("Decoded Image", WINDOW_AUTOSIZE );
   //imshow("Decoded Image", dec_image);
    waitKey(0);
    return 0;
}
*/


int main()
{
    app().registerHandler(
        "/hello_user",
        [](const HttpRequestPtr &req,
           std::function<void(const HttpResponsePtr &)> &&callback) {
            auto resp = HttpResponse::newHttpResponse();
            auto j = req->getJsonObject();
            Json::Value s = *j;
	    std::cout<<s["input_jpeg"]<<std::endl;
	    std::string encoded_image = s["input_jpeg"].asString();
	    std::vector<uchar> buf;
	    std::string decoded_jpg =base64_decode(encoded_image);
    	    std::vector<uchar> dec_data(decoded_jpg.begin(),decoded_jpg.end());
    	    Mat dec_image=imdecode(Mat(dec_data),1);
	    std::cout<< dec_image;
	    
	    if (s["input_jpeg"] == "")
                resp->setBody("Please tell me your name");
            else
                resp->setBody("Hello!");
            callback(resp);
        },
        {Post});
        
    LOG_INFO << "Server running on 127.0.0.1:8080";
    app().addListener("127.0.0.1", 8080).run();
}

