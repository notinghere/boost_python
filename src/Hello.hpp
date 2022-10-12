#ifndef BOOST_PYTHON_HELLO_HPP
#define BOOST_PYTHON_HELLO_HPP

#include <iostream>
#include <cmath>
#include <vector>
#include <boost/lexical_cast.hpp>
#include <boost/python/object.hpp>
#include <boost/python/stl_iterator.hpp>
#include <boost/python/list.hpp>

class Hello {

    std::string name_;
public:
    Hello(const std::string& name);
    virtual ~Hello() = default;

public:
    boost::python::list sayHello();
};


#endif //BOOST_PYTHON_HELLO_HPP
