project(LogiLCD)

if(NOT DEFINED LCDSDK_PATH)
  set(LCDSDK_PATH "D:/LCDSDK_8.57.148/Lib/x64")
endif()


if(DISABLE_LOGILCD)
	message(STATUS "LogiLCD plugin disabled")
	return()
endif()

if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/Program Files/obs-studio")
endif()

set(LOGILCD_HEADERS
	ending.h
	LogiLCD.h
	mono_background.h
	Include/LogitechLcd.h
	)

set(LOGILCD_SOURCES
	LogiLCD.cpp
	)

add_library(LogiLCD MODULE
	${LOGILCD_SOURCES}
	${LOGILCD_HEADERS})
	
target_link_libraries(LogiLCD
	libobs
	"${LCDSDK_PATH}/LogitechLCDLib.lib"
	)

install_obs_plugin_with_data(LogiLCD data)
