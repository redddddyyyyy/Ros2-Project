cmake_minimum_required(VERSION 3.8)
project(py_action_interfaces)

##############################################################################
# Dependencies
##############################################################################
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)   # for code generation
find_package(action_msgs REQUIRED)                 # action base msgs

##############################################################################
# Interface generation
##############################################################################
# Generate language-specific code (C++, Python, etc.) from the .action file
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Fibonacci.action"          # ← exact filename / case
  DEPENDENCIES action_msgs
)

##############################################################################
# Testing (optional)
##############################################################################
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cpplint_FOUND TRUE)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

##############################################################################
# Export & Install
##############################################################################
ament_export_dependencies(rosidl_default_runtime)
ament_package()

