//
// Created by evan on 10/12/22.
//

#include "Hello.hpp"

Hello::Hello(const std::string &name):name_(name)
{
}

boost::python::list Hello::sayHello()
{
    std::cout << "say Hello" << std::endl;
    boost::python::list result;
    result.append("data1");
    result.append(name_);
    return result;
}