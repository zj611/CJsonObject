#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "CJsonObject.hpp"

int main(int argc, char* argv[]){
    int iValue;
    double fTimeout;
    std::string strValue;
//    neb::CJsonObject oJson("{\"refresh_interval\":60,"
//                        "\"test_float\":[18.0, 10.0, 5.0],"
//                        "\"test_int\":[135355, -1844674407370955161, -935375],"
//                        "\"timeout\":12.5,"
//                        "\"dynamic_loading\":["
//                            "{"
//                                "\"so_path\":\"plugins/User.so\", \"load\":false, \"version\":1,"
//                             "},"
//                        "]"
//                    "}");
    neb::CJsonObject oJson("");
     std::cout << oJson.ToString() << std::endl;
     oJson.AddEmptySubObject("depend");
     oJson["depend"].Add("nebula", "https");
     oJson["depend"].AddEmptySubArray("bootstrap");
     oJson["depend"]["bootstrap"].Add("BEACON");
    oJson["depend"]["bootstrap"].Add("hhhh");
     std::cout << oJson.ToString() << std::endl;
}

