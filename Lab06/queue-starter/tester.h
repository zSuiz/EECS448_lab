/**************************************************************************
@author: Qui Phan

@file: Lab06 - tester.h

@date: November 13 2019

@brief : This files will contain implementation of functions to test all of the
          functions of Queue.

 **************************************************************************/





 #ifndef QUEUE_TEST_H
 #define QUEUE_TEST_H
 #include "Queue.h"


 class QueueTest
 {
     public:

     QueueTest(); // empty //if have declared here need to implement (function definition), because will cause errors

     //This will call all your test methods
     void runTests();

     private:

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief Creates an empty queue
     **/
     void test01();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief enqueue a value and make queue not empty
     **/
     void test02();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing peekFront after enqueue 1 element
     **/
     void test03();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing isEmpty of queue after enqueue 5 elements
     **/
     void test04();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing peekFront after enqueue 12 elements
     **/
     void test05();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing isEmpty after enqueue 1 and dequeue 1
     **/
     void test06();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing peekFront after enqueue 4 elements and dequeue 2, if peekFront returns right number PASSED else FAILED
     **/
     void test07();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing isEmpty after enqueue 5 elements and dequeue all 5
     **/
      void test08();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing peekFront exception
     **/
     void test09();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief testing dequeue exception
     **/
      void test10();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     * @brief enqueue 5 elements and dequeue 1, use peekfront to verify the front element, if equal Passed else Failed
     **/
      void test11();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief print out manually valgrind memory leak check
     **/
       void test12();

     /**
     *  @pre none
     *  @post none
     *  @param none
     *  @return none
     *  @brief Creates an empty list and verifies getEntry() front
     **/
      // void test13();
     //
     // /**
     // *  @pre none
     // *  @post none
     // *  @param none
     // *  @return none
     // *  @brief Creates an empty list add 1 and verifies clear()
     // **/
     //  void test14();
     //
     // /**
     // *  @pre none
     // *  @post none
     // *  @param none
     // *  @return none
     // *  @brief Creates an empty list and verifies Replace() front
     // **/
     //  void test15();
     //
     // /**
     // *  @pre none
     // *  @post none
     // *  @param none
     // *  @return none
     // *  @brief Creates an empty list and verifies Replace() back
     // **/
     //  void test16();
     //
     // /**
     // *  @pre none
     // *  @post none
     // *  @param none
     // *  @return none
     // *  @brief Creates an empty list and verifies Replace() middle
     // **/
     //  void test17();

 };

 #endif
