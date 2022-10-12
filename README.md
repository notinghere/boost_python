# boost_python

项目为 boost 和 python 交叉编程的一个demo。

## 编译

正常编译 boost，增加 python 模块即可。

```
swOptions="-O3 -fPIC"
./bootstrap.sh --with-python="${PYTHON_EXEC_BIN}"
./b2 install --prefix=${install_dir} --with-python --with-system --with-thread --with-program_options \
    --with-filesystem --with-log --with-serialization --with-timer \
    cflags="${swOptions}" cxxflags="${swOptions}" linkflags="-Wl,-rpath=.:/usr/lib64" include="${PYTHON_INC_PATH}" \
    address-model=64 threading=multi threadapi=pthread variant=release
```
编译后可以编译出 libboost_python36.so.1.78.0 即可使用了。

## 使用

见 wrapper.cpp, 将需要导出供python 调用的类导出即可。

