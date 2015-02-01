TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    gengen/gengenparser.cpp \
    gengen/codeappender.cpp \
    gengen/codejoiner.cpp \
    gengen/gengenfactory.cpp \
    languages/cpp/cppstaticcodegetter.cpp \
    languages/cpp/cpplinecodegenerator.cpp \
    languages/python/pythonstaticcodegetter.cpp \
    languages/python/pythonlinecodegenerator.cpp

include(deployment.pri)
include(boost.pri)
qtcAddDeployment()

HEADERS += \
    gengen/codeappender.h \
    gengen/staticcodegetter.h \
    gengen/linecodegenerator.h \
    gengen/gengenparser.h \
    gengen/codejoiner.h \
    gengen/gengenfactory.h \
    languages/cpp/cppstaticcodegetter.h \
    languages/cpp/cpplinecodegenerator.h \
    languages/python/pythonstaticcodegetter.h \
    languages/python/pythonlinecodegenerator.h

RC_FILE = winrsrc/winrsrc.rc
