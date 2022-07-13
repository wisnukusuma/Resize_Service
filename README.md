# Resize_Service
Create a server to resize image with encoded base64 image using drogon, opencv, cpp_base64 
make sure you already have opencv installed, since opencv quite big so you can installed on your own.
the API's as follows:
HTTP://127.0.0.1:8080/resize_image [POST]
the input payload should be like :
![image](https://user-images.githubusercontent.com/33643189/178470364-4145154b-7af9-46cf-9506-d4efea7e73b7.png)
and the response will get the code of 200 if it's ok and 400 if it's not.
