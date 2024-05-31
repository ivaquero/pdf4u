project (simpleviewer)

# Qt5 library
set (CMAKE_AUTOMOC ON)
find_package (Qt5Widgets)

# libpdf4u library
include_directories (${CMAKE_SOURCE_DIR}/include)
link_directories (${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})

add_executable (${PROJECT_NAME} WIN32 main.cpp mainwindow.cpp)
target_link_libraries (${PROJECT_NAME} pdf4u)
qt5_use_modules (${PROJECT_NAME} Widgets)
