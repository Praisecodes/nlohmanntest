#include <iostream>
#include <nlohmann/json.hpp>
#include <map>
#include <iterator>
#include <vector>
#include <string>

using json = nlohmann::json;

int main()
{
    std::string username, password;
    std::cout << "Enter Your Username: ";
    std::getline(std::cin, username);
    std::cout << "Enter Your Password: ";
    std::getline(std::cin, password);

    std::map<std::string, std::string> details{
        {"username", username},
        {"password", password}
    };

    json detailsToSend(details);

    std::cout << detailsToSend << std::endl;

    return 0;
}

