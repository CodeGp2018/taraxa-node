add_executable(taraxad main.cpp)
target_link_libraries(taraxad PRIVATE app_base)

set(TARAXAD_INSTALL_DIR "/usr/local/bin" CACHE PATH "Aplication install directory")
set(TARAXAD_CONF_INSTALL_DIR "/etc/taraxad" CACHE PATH "Aplication configuration install directory")

install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/taraxad DESTINATION ${TARAXAD_INSTALL_DIR} COMPONENT taraxad)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/configs/taraxad.conf DESTINATION ${TARAXAD_CONF_INSTALL_DIR} COMPONENT taraxad)