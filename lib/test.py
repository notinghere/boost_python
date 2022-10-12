#!/usr/bin/python3

import libWrapper as wrapper

if __name__ == '__main__':
    hello = wrapper.Hello("input name")
    result = hello.sayHello()
    print(result)
    name = wrapper.get_username()
    print(name)
    print(wrapper.func1())
    print(wrapper.func2(2))
    print(wrapper.add(1,2))