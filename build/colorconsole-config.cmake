# CMake package config file for colorconsole library.
#
# The following target is imported:
#
#   ccon:colorconsole
#

# Запускаем инициализацию

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was colorconsole-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# Проверяем указана ли сборка как разделяемой библиотеки
if(BUILD_SHARED_LIBS)
    set(type "shared")
else()
    set(type "static")
endif()

# Указываем включить файл конфигурации созданный в основном файле CMakeLists.txt
# В зависимости от выбранной конфигурации это может быть static или shared
include("${CMAKE_CURRENT_LIST_DIR}/colorconsole-${type}-targets.cmake")

# Проверяем что все требуемые компоненты найдены
check_required_components(colorconsole) 

# Выводим строку при конфигурировании проекта использующего наше библиотеку

message(" === Found ${type} colorconsole (version ${${CMAKE_FIND_PACKAGE_NAME}_VERSION})")
