#include <boost/python.hpp>
#include "Hello.hpp"

// Module名称需要和动态库名称保持一致
BOOST_PYTHON_MODULE(libWrapper) {
    // Initialize GIL to support non-python threads.
    PyEval_InitThreads();

    boost::python::class_<Hello, boost::noncopyable>("Hello", boost::python::init<const std::string&>())
            .def("sayHello", &Hello::sayHello);
}