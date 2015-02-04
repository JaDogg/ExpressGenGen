TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    gengen/gengenparser.cpp \
    gengen/codeappender.cpp \
    gengen/codejoiner.cpp \
    gengen/gengenfactory.cpp \
    gengen/postparser.cpp \
    languages/cpp/cppstaticcodegetter.cpp \
    languages/cpp/cpplinecodegenerator.cpp \
    languages/python/pythonstaticcodegetter.cpp \
    languages/python/pythonlinecodegenerator.cpp \
    languages/web/webstaticcodegetter.cpp \
    languages/web/weblinecodegenerator.cpp \
    languages/lua/luastaticcodegetter.cpp \
    languages/lua/lualinecodegenerator.cpp \
    languages/lua/luapostparser.cpp \
    languages/bash/bashstaticcodegetter.cpp \
    languages/bash/bashlinecodegenerator.cpp

include(deployment.pri)
include(boost.pri)
include(lua.pri)
qtcAddDeployment()

HEADERS += \
    gengen/codeappender.h \
    gengen/staticcodegetter.h \
    gengen/linecodegenerator.h \
    gengen/gengenparser.h \
    gengen/codejoiner.h \
    gengen/gengenfactory.h \
    gengen/postparser.h \
    languages/cpp/cppstaticcodegetter.h \
    languages/cpp/cpplinecodegenerator.h \
    languages/python/pythonstaticcodegetter.h \
    languages/python/pythonlinecodegenerator.h \
    languages/web/webstaticcodegetter.h \
    languages/web/weblinecodegenerator.h \
    languages/lua/luastaticcodegetter.h \
    languages/lua/lualinecodegenerator.h \
    languages/lua/luapostparser.h \
    languages/bash/bashstaticcodegetter.h \
    languages/bash/bashlinecodegenerator.h


RC_FILE = winrsrc/winrsrc.rc
