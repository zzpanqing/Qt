#include <map>
#include <string>


int main(){
    std::map<std::string, std::string> myMap;
    myMap["test"] = "value";
    myMap.at("test2") = "value2";
}
