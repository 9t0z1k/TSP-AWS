QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addaudience.cpp \
    addbuttoncampaign.cpp \
    addchanel.cpp \
    addproduct.cpp \
    audienceform.cpp \
    campaignform.cpp \
    channelform.cpp \
    deletedialog.cpp \
    dialogaudience.cpp \
    dialogcampaign.cpp \
    dialogchannel.cpp \
    dialogproduct.cpp \
    main.cpp \
    mainwindow.cpp \
    marketcampaign.cpp \
    productform.cpp

HEADERS += \
    addaudience.h \
    addbuttoncampaign.h \
    addchanel.h \
    addproduct.h \
    audienceform.h \
    campaignform.h \
    channelform.h \
    deletedialog.h \
    dialogaudience.h \
    dialogcampaign.h \
    dialogchannel.h \
    dialogproduct.h \
    mainwindow.h \
    marketcampaign.h \
    productform.h

FORMS += \
    addaudience.ui \
    addbuttoncampaign.ui \
    addchanel.ui \
    addproduct.ui \
    audienceform.ui \
    campaignform.ui \
    channelform.ui \
    dialogaudience.ui \
    dialogcampaign.ui \
    dialogchannel.ui \
    dialogproduct.ui \
    mainwindow.ui \
    productform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
