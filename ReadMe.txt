lib文件夹:	是静态库及说明，静态库是在vs2015sp3及vs2010sp1环境下编译的
UnitTestClient：client端单元测试及说明
UnitTestServer：server端单元测试及说明
BarClientDemo：网吧客户端广告播放演示程序

以下地址是静态库及测试程序的源码仓库：
https://github.com/gaolj/AdManager
https://github.com/gaolj/AdClientTest
https://github.com/gaolj/AdServerTest
https://github.com/gaolj/BarClientDemo

注:
BarClientDemo项目的readme.txt中有代码使用的帮助，并且在其git的提交log中，
有此项目从开始创建到最后完成播放一步步的说明，其中包含
1、项目的环境配置
2、代码怎样增加的过程

第三方库依赖说明：
1、boost
windows下的编译好的二进制版本下载地址：
https://sourceforge.net/projects/boost/files/boost-binaries/
当前项目AdManager用的是boost1.59的vs2015编译的32位版本：boost_1_59_0-msvc-14.0-32.exe
以及boost1.59的vs2010编译的32位版本：boost_1_59_0-msvc-10.0-32.exe

2、cpp-netlib-0.9.4
从下面URL下载的源码及编译出来的静态库。
https://github.com/cpp-netlib/cpp-netlib/tree/cpp-netlib-0.9.4

3、protobuf-3.2.0
从下面URL下载的源码及编译出来的静态库。
https://github.com/google/protobuf/releases