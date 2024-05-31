project (test_document)

# Qt5 library
find_package (Qt5Gui)

# libpdf4u library
include_directories (${CMAKE_SOURCE_DIR}/include)
link_directories (${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})

add_executable (${PROJECT_NAME} main.cpp)
target_link_libraries (${PROJECT_NAME} pdf4u)
qt5_use_modules (${PROJECT_NAME} Gui)
