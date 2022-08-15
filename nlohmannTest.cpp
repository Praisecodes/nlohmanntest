#include <iostream>
#include <nlohmann/json.hpp>
#include <map>
#include <iterator>
#include <vector>
#include <string>

using json = nlohmann::json;

int main()
{
    std::map<std::string, std::string> details{};
    std::string username, password;
    std::cout << "Enter Your Username Please: ";
    std::getline(std::cin, username);
    std::cout << "Enter Your Password " << username << ": ";
    std::getline(std::cin, password);

    details["username"] = username; details["password"] = password;
    std::cout << details["password"] << std::endl;
    return 0;
}

