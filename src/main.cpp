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
#include <nlohmann/json.hpp>
#include "json/json.h"
using namespace drogon;
using namespace cv;
/*
int main(int argc, char** argv )
{
    std::string encoded_png;
    nlohmann::json j;
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
    //std::cout<<image<<"<------------------------------------->"<<std::endl;
    std::vector<uchar> buf;
    imencode(".png", image, buf);
    auto base64_png = reinterpret_cast<const unsigned char*>(buf.data()); 
    encoded_png = base64_encode(base64_png, buf.size());
    j["input_jpeg"]=encoded_png;
    j["desired_width"]=600;
    j["desired_height"]=400;
    std::cout<< j;
    std::string decoded_png =base64_decode(encoded_png);
    std::vector<uchar> dec_data(decoded_png.begin(),decoded_png.end());
    Mat dec_image=imdecode(Mat(dec_data),1);
    std::ofstream myfile("/home/wisnu/resizer_service/file_encoded/encoded_image.json", std::ios::binary);
    myfile<<std::setw(4)<<"["<<j<<"]"<<std::endl;
    myfile.close();
    //std::cout<<dec_image;
    namedWindow("Encoded Image", WINDOW_AUTOSIZE );
    imshow("Encoded Image", image);
   // namedWindow("Decoded Image", WINDOW_AUTOSIZE );
   //imshow("Decoded Image", dec_image);
    waitKey(0);
    return 0;
}
//std::cout<<"HTTP 200 \nContent-Type: application-json\n"<<output;
//std::cout<<s["desired_width"]<<std::endl;
	    //std::cout<<message_json;
	    
	    //std::string encoded_image = s["input_jpeg"].asString();
	    //std::string decoded_jpg =base64_decode(encoded_image);
	    //std::vector<uchar> dec_data(decoded_jpg.begin(),decoded_jpg.end());
    	    //Mat dec_image=imdecode(Mat(dec_data),1);
	    //namedWindow("Decoded Image", WINDOW_AUTOSIZE );
	    //imshow("Decoded Image", dec_image);
	    //waitKey(0);
*/

int main()
{
   
    app().registerHandler(
        "/resize_image",
        [](const HttpRequestPtr &req,
           std::function<void(const HttpResponsePtr &)> &&callback) {
            nlohmann::json res_json;
            Json::Value resp_json;
            std::string encoded_png;
  	    Mat resized;
    	    int data_stats =0;
            auto resp = HttpResponse::newHttpResponse();
            auto j = req->getJsonObject();
            Json::Value s = *j;
            std::string message_buff;
            Json::FastWriter fastWriter;
            if (s["input_jpeg"]==""){
            	data_stats=1;
            	message_buff+="input_jpeg :empty,";
            	}
            if (!s["desired_width"]){
            	data_stats=1;
            	message_buff+="desired_width :empty,";
            	}
            if (!s["desired_height"]){
            	data_stats=1;
            	message_buff+="desired_height :empty,";
            	}
            int width = s["desired_width"].asInt();
            int height = s["desired_height"].asInt();
            std::string encoded_image = s["input_jpeg"].asString();
	    std::string decoded_jpg =base64_decode(encoded_image);
	    std::vector<uchar> dec_data(decoded_jpg.begin(),decoded_jpg.end());
    	    Mat dec_image=imdecode(Mat(dec_data),1);		
            resize(dec_image, resized, Size(width, height), INTER_LINEAR);
            std::vector<uchar> buf;
   	    imencode(".png", resized, buf);
    	    auto base64_png = reinterpret_cast<const unsigned char*>(buf.data()); 
            encoded_png = base64_encode(base64_png, buf.size());
    
            if(data_stats){
            	resp_json["code"] = 400;
            	resp_json["message"] = message_buff;
		std::string output = fastWriter.write(resp_json);
            	resp->setBody("HTTP 400 \nContent-Type: application-json\n"+output);
            	std::cout<<"HTTP 400 \nContent-Type: application-json\n"<<output;
            }
            else{
                resp_json["code"] = 200;
                resp_json["message"]="success";
                resp_json["output_jpeg"]=encoded_png;
                std::string output = fastWriter.write(resp_json);
                resp->setBody("HTTP 200 \nContent-Type: application-json\n"+output);
	    } 
            callback(resp);
        },
        {Post});
        
    LOG_INFO << "Server running on 127.0.0.1:8080";
    app().addListener("127.0.0.1", 8080).run();
    return 0;
}
