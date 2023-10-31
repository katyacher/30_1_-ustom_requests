#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main(int, char**){
    std::cout << "Hello, from 30_1_custom_requests!\n";

    std::string request = "";
    
    while(request != "exit"){
        std::cout << "Enter your request get/post/put/delete/patch or exit:";
        std::cin >> request;
        
        cpr::Response r;
        if(request == "get"){
            r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        } else if(request == "post"){
            r = cpr::Post(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text << std::endl;
        } else if(request == "put"){
            r = cpr::Put(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text << std::endl;
        } else if(request == "delete"){
            r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text << std::endl;
        } else if(request == "patch"){
            r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text << std::endl;
        } else {
            std::cout << "Unknown request. Try again: ";
        }
    }
}
