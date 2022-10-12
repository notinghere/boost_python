//
// Created by evan on 10/12/22.
//

#include "Hello.hpp"
#include <pwd.h>

std::string get_username() {
    std::string user_name = std::getenv("USER");

    if (user_name.empty()) {
        user_name = std::getenv("USERNAME");
    }

    if (user_name.empty()) {
        struct passwd *pwd;
        pwd = getpwuid(getuid());
        return std::string(pwd->pw_name);
    }

    return user_name;
}

std::string func() {
    return "func with no param";
}

std::string func(int a) {
    return "func with int param:" + std::to_string(a);
}

int add(int a,int b)
{
    return a+b;
}

Hello::Hello(const std::string &name) : name_(name) {
}

boost::python::list Hello::sayHello() {
    std::cout << "say Hello" << std::endl;
    boost::python::list result;
    result.append("data1");
    result.append(name_);
    return result;
}