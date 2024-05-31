# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = pdf4u

QT = core gui widgets

HEADERS = \
   $$PWD/examples/pdf4u/simpleviewer/mainwindow.h \
   $$PWD/include/mupdf-document.h \
   $$PWD/include/mupdf-link.h \
   $$PWD/include/mupdf-outline.h \
   $$PWD/include/mupdf-page.h \
   $$PWD/include/mupdf-textbox.h \
   $$PWD/include/pdf4u.h \
   $$PWD/src/private/mupdf-document_p.h \
   $$PWD/src/private/mupdf-link_p.h \
   $$PWD/src/private/mupdf-outline_p.h \
   $$PWD/src/private/mupdf-page_p.h \
   $$PWD/src/private/mupdf-textbox_p.h

SOURCES = \
   $$PWD/examples/mupdf/countpages/main.c \
   $$PWD/examples/mupdf/exportpage/main.c \
   $$PWD/examples/mupdf/outline/main.c \
   $$PWD/examples/mupdf/qimage/main.cpp \
   $$PWD/examples/mupdf/showinfo/main.c \
   $$PWD/examples/mupdf/showtext/main.c \
   $$PWD/examples/pdf4u/simpleviewer/main.cpp \
   $$PWD/examples/pdf4u/simpleviewer/mainwindow.cpp \
   $$PWD/examples/pdf4u/test_document/main.cpp \
   $$PWD/examples/pdf4u/test_outline/main.cpp \
   $$PWD/examples/pdf4u/test_page/main.cpp \
   $$PWD/examples/pdf4u/test_text/main.cpp \
   $$PWD/src/mupdf-document.cpp \
   $$PWD/src/mupdf-link.cpp \
   $$PWD/src/mupdf-outline.cpp \
   $$PWD/src/mupdf-page.cpp \
   $$PWD/src/mupdf-textbox.cpp

INCLUDEPATH = \
    $$PWD/examples/pdf4u/simpleviewer \
    $$PWD/include \
    $$PWD/src/private

#DEFINES =

