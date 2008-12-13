TEMPLATE = app
QT = gui \
 core \
 network \
 webkit \
 phonon \
 xml
CONFIG += qt warn_on release
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/salat.ui \
 ui/qibla.ui \
 ui/hijri.ui \
 ui/worldtime.ui \
 ui/location.ui \
 ui/audio.ui \
 ui/calculation.ui \
 ui/monthly.ui \
 ui/yearly.ui
HEADERS = src/qsalat.h \
 src/qpray.h \
 src/qhijri.h \
 src/qqibla.h \
 src/qlocation.h \
 src/qaudio.h \
 src/qmonthly.h \
 src/qyearly.h \
 src/qabout.h \
 src/qworldTime.h \
 src/qcalculation.h \
 src/qhijridate.h \
 src/domparser.h
SOURCES = src/qsalat.cpp \
 src/main.cpp \
 src/qpray.cpp \
 src/qhijri.cpp \
 src/qqibla.cpp \
 src/qlocation.cpp \
 src/qaudio.cpp \
 src/qmonthly.cpp \
 src/qyearly.cpp \
 src/qabout.cpp \
 src/qcalculation.cpp \
 src/qworldTime.cpp \
 src/qhijridate.cpp \
 src/domparser.cpp
RESOURCES += salat.qrc qibla.qrc worldtime.qrc
TRANSLATIONS = qsalat_en.ts qsalat_fr.ts
CODECFORTR = UTF-8
