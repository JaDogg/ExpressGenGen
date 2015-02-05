project(ExpressGenGen)

cmake_minimum_required(VERSION 2.6)

include_directories($ENV{BOOST_ROOT} $ENV{LUA_ROOT} .)
link_directories($ENV{LUA_ROOT} $ENV{BOOST_ROOT}/stage/lib)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -Wextra -Wpedantic -std=c++11 -O3")

set(sources 
  TemplateProcessingEngine/codeappender.cpp
  TemplateProcessingEngine/codejoiner.cpp
  TemplateProcessingEngine/gengenfactory.cpp
  TemplateProcessingEngine/gengenparser.cpp
  TemplateProcessingEngine/postparser.cpp
  Lang/bash/bashlinecodegenerator.cpp
  Lang/bash/bashstaticcodegetter.cpp
  Lang/cpp/cpplinecodegenerator.cpp
  Lang/cpp/cppstaticcodegetter.cpp
  Lang/lua/lualinecodegenerator.cpp
  Lang/lua/luapostparser.cpp
  Lang/lua/luastaticcodegetter.cpp
  Lang/python/pythonlinecodegenerator.cpp
  Lang/python/pythonstaticcodegetter.cpp
  Lang/web/weblinecodegenerator.cpp
  Lang/web/webstaticcodegetter.cpp
  main.cpp
  WindowsRsrc/winrsrc.rc)
add_executable(xgengen ${sources})
target_link_libraries(xgengen lua)
target_link_libraries(xgengen boost_program_options)
