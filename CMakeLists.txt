project(ExpressGenGen)

cmake_minimum_required(VERSION 2.6)
include_directories($ENV{BOOST_ROOT} $ENV{LUA_ROOT} $ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include .)
link_directories($ENV{LUA_ROOT} $ENV{BOOST_ROOT}/stage/lib $ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/build/gtest) 
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -Wpedantic -std=gnu++11")

set(sources 
  Src/ErrorCollectorImpl.cpp
  Src/IndentGeneratorImpl.cpp
  Src/KeywordGetterImpl.cpp
  Src/ReadingPreprocessor.cpp
  Src/StdErrErrorPrinter.cpp
  Src/StdInLineReader.cpp
  Src/StreamLineReader.cpp
  Tests/TestErrorCollector.cpp
  Tests/TestErrorPrinter.cpp
  Tests/TestIndentGenerator.cpp
  Tests/TestKeywordGetter.cpp
  Tests/TestLineReader.cpp
  Tests/TestMain.cpp
  Tests/TestPreprocessor.cpp
  Tests/TestStaticCodeGetter.cpp
  Src/ArgsForEchoJoiner.h
  Src/ErrorCollector.h
  Src/ErrorCollectorImpl.h
  Src/IndentGenerator.h
  Src/IndentGeneratorImpl.h
  Src/KeywordGetter.h
  Src/KeywordGetterImpl.h
  Src/LineReader.h
  Src/Preprocessor.h
  Src/Printer.h
  Src/ReadingPreprocessor.h
  Src/StaticCodeGetter.h
  Src/StdErrErrorPrinter.h
  Src/StdInLineReader.h
  Src/StreamLineReader.h
  Src/StringTokenGenerator.h
  Tests/TestHelper.h
  WindowsRsrc/WindowsRes.rc)
add_executable(xgengen ${sources})
target_link_libraries(xgengen lua)
target_link_libraries(xgengen boost_program_options)
target_link_libraries(xgengen pthread)
target_link_libraries(xgengen gmock)
target_link_libraries(xgengen gtest)
