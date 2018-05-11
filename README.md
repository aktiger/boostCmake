# boostCmake

使用Cmake的find_package命令来添加boost库，需要使用REQUIRED COMPONENTS来指定需要添加到Boost_LIBRARIES中的库，如果不配置REQUIRED COMPONENTS来指定具体的lib，那么变量Boost_LIBRARIES变量的值将为空。 <br/>

## usage
in the root dir: <br/>
mkdir build && cd build<br/>
cmake ../ <br/>
make

