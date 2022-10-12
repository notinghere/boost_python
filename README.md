# boost_python

项目为 boost 和 python 交叉编程的一个demo。

## 编译

1. 需要安装 python-dev.

```
apt install python-dev
```

2. 编译 boost，增加 python 模块即可。

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

见 wrapper.cpp, 将需要导出供python 调用的类和函数导出即可。

## 说明

- 定义模块，模块内容为需要导出的内容, 导出名称要和生成的so文件名一致。

BOOST_PYTHON_MODULE(libWrapper) {
}

- 导出普通函数,类的函数
boost::python::def()


