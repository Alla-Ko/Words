cmake_minimum_required(VERSION 3.5)

project(WORDS_GAME VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6  REQUIRED COMPONENTS MultimediaWidgets Network)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mytablemodel.cpp
        mainwindow.h
        mytablemodel.h
        mainwindow.ui
        Res.qrc


)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(WORDS_GAME
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET WORDS_GAME APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(WORDS_GAME SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(WORDS_GAME
            ${PROJECT_SOURCES}
        )
    endif()
endif()
target_link_libraries(WORDS_GAME PRIVATE Qt${QT_VERSION_MAJOR}::Widgets PUBLIC
    Qt::MultimediaWidgets
    Qt::Network)


set_target_properties(WORDS_GAME PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS WORDS_GAME
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(WORDS_GAME)
endif()
