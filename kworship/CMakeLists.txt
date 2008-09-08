project(kworship)

find_package(KDE4 REQUIRED)
include (KDE4Defaults)
include_directories(${KDE4_INCLUDES}
                    ${QT_INCLUDES}
                    ../include
                    media
                    display
                    css
                    playlist
)
add_subdirectory (media)
add_subdirectory (display)
add_subdirectory (css)
add_subdirectory (playlist)

set(kworship_SRCS
    kworship.cpp
    main.cpp
    kworshipview.cpp
)

kde4_add_ui_files(kworship_SRCS kworshipview_base.ui prefs_base.ui)

kde4_add_kcfg_files(kworship_SRCS settings.kcfgc )

kde4_add_executable(kworship ${kworship_SRCS})

target_link_libraries(kworship
                      ${KDE4_KDEUI_LIBS}
                      ${QT_LIBRARIES}
                      ${PHONON_LIBS}
                      kworshipplaylist
                      kworshipcss
                      kworshipdisplay
                      kworshipmedia
)

install(TARGETS kworship DESTINATION ${BIN_INSTALL_DIR} )


########### install files ###############

install( FILES kworship.desktop  DESTINATION  ${XDG_APPS_INSTALL_DIR} )
install( FILES kworship.kcfg  DESTINATION  ${KCFG_INSTALL_DIR} )
install( FILES kworshipui.rc  DESTINATION  ${DATA_INSTALL_DIR}/kworship )
