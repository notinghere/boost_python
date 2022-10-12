#include <boost/python.hpp>
#include "Hello.hpp"

std::string (*func1)(void) = &func;
std::string (*func2)(int) = &func;

// Module名称需要和动态库名称保持一致
BOOST_PYTHON_MODULE(libWrapper) {
    // Initialize GIL to support non-python threads.
    PyEval_InitThreads();

    boost::python::class_<Hello, boost::noncopyable>
            ("Hello", boost::python::init<const std::string&>()).def("sayHello", &Hello::sayHello);

    boost::python::def("get_username", &get_username);
    boost::python::def("func1", func1);
    boost::python::def("func2", func2);
    boost::python::def("add", &add,boost::python::args("a"),boost::python::args("b"));
}