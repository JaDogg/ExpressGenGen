project(ExpressGenGen)

cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include $ENV{BOOST_ROOT} .)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/mybuild/gtest)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -std=c++0x -O3")

set(sources 
  gengen/codeappender.cpp                     
  gengen/codejoiner.cpp                       
  gengen/gengenfactory.cpp                    
  gengen/gengenparser.cpp
  gengen/postparser.cpp  
  languages/cpp/cpplinecodegenerator.cpp      
  languages/cpp/cppstaticcodegetter.cpp       
  languages/python/pythonlinecodegenerator.cpp
  languages/python/pythonstaticcodegetter.cpp 
  languages/web/weblinecodegenerator.cpp      
  languages/web/webstaticcodegetter.cpp       
  main.cpp
  winrsrc/winrsrc.rc)
add_executable(xgengen ${sources})
target_link_libraries(xgengen pthread)
target_link_libraries(xgengen gmock)
target_link_libraries(xgengen gtest)

