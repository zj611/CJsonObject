#include <string>
#include <iostream>
#include "CJSON/CJsonObject.hpp"

int main(int argc, char* argv[]){

    neb::CJsonObject oJson("");

    std::cout << oJson.ToString() << std::endl;

    oJson.AddEmptySubObject("depend");
    oJson["depend"].Add("nebula", "https");
    oJson["depend"].AddEmptySubArray("bootstrap");
    oJson["depend"]["bootstrap"].Add("BEACON");
    oJson["depend"]["bootstrap"].Add("hhhh");

    std::cout << oJson.ToString() << std::endl;
}

