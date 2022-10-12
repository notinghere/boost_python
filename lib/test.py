#!/usr/bin/python3

import libWrapper as wrapper

if __name__ == '__main__':
    hello = wrapper.Hello("input name")
    result = hello.sayHello()
    print(result)
