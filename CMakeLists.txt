project(orario)

find_package(KDE4)
include(KDE4Defaults)

set(orario_SRC
    main.cpp
    orariowidget.cpp
)

kde4_add_ui_files( orario_SRC orariowidget.ui )

include_directories(${KDE4_INCLUDES})

kde4_add_executable(orario ${orario_SRC})
target_link_libraries(orario ${KDE4_KDEUI_LIBS})

install(TARGETS orario DESTINATION ${BIN_INSTALL_DIR})
# install(FILES orario.desktop DESTINATION ${XDG_APPS_INSTALL_DIR})
install(FILES orarioui.rc  DESTINATION  ${DATA_INSTALL_DIR}/orario)
