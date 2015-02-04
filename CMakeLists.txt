project(ExpressGenGen)

cmake_minimum_required(VERSION 2.6)

include_directories($ENV{BOOST_ROOT} $ENV{LUA_ROOT} .)
link_directories($ENV{LUA_ROOT})
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -std=c++11 -O3")

set(sources 
  gengen/codeappender.cpp
  gengen/codejoiner.cpp
  gengen/gengenfactory.cpp
  gengen/gengenparser.cpp
  gengen/postparser.cpp
  languages/bash/bashlinecodegenerator.cpp
  languages/bash/bashstaticcodegetter.cpp
  languages/cpp/cpplinecodegenerator.cpp
  languages/cpp/cppstaticcodegetter.cpp
  languages/lua/lualinecodegenerator.cpp
  languages/lua/luapostparser.cpp
  languages/lua/luastaticcodegetter.cpp
  languages/python/pythonlinecodegenerator.cpp
  languages/python/pythonstaticcodegetter.cpp
  languages/web/weblinecodegenerator.cpp
  languages/web/webstaticcodegetter.cpp
  main.cpp
  winrsrc/winrsrc.rc)
add_executable(xgengen ${sources})
target_link_libraries(xgengen lua)

