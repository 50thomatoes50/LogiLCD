project(LogiLCD)

if(DISABLE_LOGILCD)
	message(STATUS "LogiLCD plugin disabled")
	return()
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
	)

install_obs_plugin_with_data(LogiLCD data)
