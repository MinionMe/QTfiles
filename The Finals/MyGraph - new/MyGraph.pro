#-------------------------------------------------
#
# Project created by QtCreator 2015-08-01T13:46:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyGraph
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    node.cpp \
    papernode.cpp \
    conferencenode.cpp \
    authornode.cpp \
    topicnode.cpp \
    edge.cpp \
    paperconferenceauthorgraph.cpp \
    topicgraph.cpp \
    Document.cpp

HEADERS  += mainwindow.h \
    graph.h \
    node.h \
    stdafx.h \
    papernode.h \
    conferencenode.h \
    authornode.h \
    topicnode.h \
    edge.h \
    paperconferenceauthorgraph.h \
    topicgraph.h \
    Document.h

FORMS    += mainwindow.ui
