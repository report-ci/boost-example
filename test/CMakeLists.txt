enable_testing()

add_executable(test_one_bin test_one.cpp)
#target_link_libraries(test_one_bin Boost::unit_test_framework Boost::prg_exec_monitor)
add_test(NAME test_one COMMAND $<TARGET_FILE:test_one_bin> --log_sink=test_one.xml --log_format=XML --log_level=all --report_sink=report_one.xml --report_format=XML --report_level=detailed)

add_executable(test_two_bin test_two.cpp)
#target_link_libraries(test_two_bin Boost::unit_test_framework Boost::prg_exec_monitor)
add_test(NAME test_two COMMAND $<TARGET_FILE:test_two_bin> --log_sink=test_two.xml --log_format=XML --log_level=all --report_sink=report_two.xml --report_format=XML --report_level=detailed)

add_executable(test_sys_bin test_sys.cpp)
#target_link_libraries(test_sys_bin Boost::unit_test_framework Boost::prg_exec_monitor)
add_test(NAME test_sys COMMAND $<TARGET_FILE:test_sys_bin> --log_sink=test_sys.xml --log_format=XML --log_level=all --report_sink=report_sys.xml --report_format=XML --report_level=detailed)

enable_testing()


