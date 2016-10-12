#-------------------------------------------------
#
# Project created by QtCreator 2015-01-10T20:08:36
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2weima
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    bitstream.c \
    mask.c \
    mmask.c \
    mqrspec.c \
    qrencode.c \
    qrinput.c \
    qrspec.c \
    rscode.c \
    split.c \
    erweima.cpp

HEADERS  += widget.h \
    bitstream.h \
    config.h \
    CreatQr.h \
    mask.h \
    mmask.h \
    mqrspec.h \
    qrencode.h \
    qrinput.h \
    qrspec.h \
    rscode.h \
    split.h \
    erweima.h

FORMS    += widget.ui
