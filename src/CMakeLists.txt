set(orario_SRCS
   orario.cpp
   main.cpp
   orarioview.cpp
 )

kde4_add_ui_files(orario_SRCS orarioview_base.ui prefs_base.ui)

kde4_add_kcfg_files(orario_SRCS settings.kcfgc )

kde4_add_executable(orario ${orario_SRCS})

target_link_libraries(orario ${KDE4_KDEUI_LIBS} )

install(TARGETS orario DESTINATION ${BIN_INSTALL_DIR} )


########### install files ###############

install( FILES orario.desktop  DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES orario.kcfg  DESTINATION  ${KCFG_INSTALL_DIR} )
install( FILES orarioui.rc  DESTINATION  ${DATA_INSTALL_DIR}/orario )
