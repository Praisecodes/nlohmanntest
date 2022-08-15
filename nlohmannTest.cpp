#include <iostream>
#include <nlohmann/json.hpp>
#include <map>
#include <iterator>
#include <vector>
#include <string>

using json = nlohmann::json;

int main()
{
    /*std::string username, password;
    std::cout << "Enter Your Username: ";
    std::getline(std::cin, username);
    std::cout << "Enter Your Password: ";
    std::getline(std::cin, password);

    std::map<std::string, std::string> details{
        {"username", username},
        {"password", password}
    };

    json detailsToSend(details);

    std::cout << detailsToSend << std::endl;*/

    // Code to parse a string to JSON format and convert to C++ Associative array (Object)
    std::string jsonString = "{\"username\": \"Vivian\", \"password\": \"mumubuttonidiot\"}";
    json j = json::parse(jsonString);
    std::map<std::string, std::string> details{};

    details = j;

    std::cout << details["username"] << std::endl;

    return 0;
}

