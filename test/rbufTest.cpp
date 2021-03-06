/**
 * @Author: S. Sharma <silentcat>
 * @Date:   2019-03-07T21:58:26-06:00
 * @Email:  silentcat@protonmail.com
 * @Last modified by:   silentcat
 * @Last modified time: 2019-03-09T15:13:05-06:00
 */

 #include "CppUTest/TestHarness_c.h"
 #include "CppUTest/CommandLineTestRunner.h"

 TEST_GROUP_C_WRAPPER(RbufTest)
 {
     TEST_GROUP_C_SETUP_WRAPPER(RbufTest);
     TEST_GROUP_C_TEARDOWN_WRAPPER(RbufTest);
 };

 TEST_C_WRAPPER(RbufTest, RbufEnqueue);
 TEST_C_WRAPPER(RbufTest, RbufDequeue);
 TEST_C_WRAPPER(RbufTest, RbufEnqueuePastCapacity);

 int main(int argc, char **argv) {
     return RUN_ALL_TESTS(argc, argv);
 }
