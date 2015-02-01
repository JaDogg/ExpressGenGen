TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    gengen/gengenparser.cpp \
    gengen/codeappender.cpp \
    gengen/codejoiner.cpp \
    languages/cpp/cppstaticcodegetter.cpp \
    languages/cpp/cpplinecodegenerator.cpp \
    gengen/gengenfactory.cpp

include(deployment.pri)
include(boost.pri)
qtcAddDeployment()

HEADERS += \
    gengen/codeappender.h \
    gengen/staticcodegetter.h \
    gengen/linecodegenerator.h \
    gengen/gengenparser.h \
    gengen/codejoiner.h \
    languages/cpp/cppstaticcodegetter.h \
    languages/cpp/cpplinecodegenerator.h \
    gengen/gengenfactory.h

