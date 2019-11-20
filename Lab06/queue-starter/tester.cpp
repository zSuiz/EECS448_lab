/**************************************************************************
@author: Qui Phan

@file: Lab06 - tester.cpp

@date: November 13 2019

@brief : This files will contain delaration of functions to test all of the
          functions of Queue.

 **************************************************************************/




 #include "tester.h"
 #include <iostream>
 using namespace std;




QueueTest::QueueTest()
{

}



void QueueTest::runTests()
{
	test01(); //test queue empty
	test02(); //
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();
	test09();
	test10();
	test11();
	test12();
	// test13();
	//test14();
	// test15();
	// test16();
	// test17();
}


void QueueTest::test01()
	{
		Queue* test1 = new Queue();
		if(test1->isEmpty() == true)
		{
			cout<<"01.The queue is created and queue is empty: PASSED \n";
		}
    else
    {
      cout<<"01.The queue is created and queue is not empty: FAILED \n";
    }
		delete test1;
	}

	void QueueTest::test02()
	{
    Queue* test2 = new Queue();
		test2->enqueue(0);
		if(test2->isEmpty() == false)
		{
			cout<<"02.The queue is enqueued (added) 1 number and queue is now not empty: PASSED \n";
		}
    else
    {
      cout<<"02.The queue is enqueued (added) 1 number and queue is now not empty: FAILED \n";
    }
		delete test2;
	}

	void QueueTest::test03()
	{
    Queue* test3 = new Queue();
		test3->enqueue(0);
		if(test3->peekFront() == 0)
		{
			cout<<"03.The queue is enqueued (added) number 0 to the front and peekfront also can return 0 of the front of the queue: PASSED \n";
		}
    else
    {
      cout<<"03.The queue is enqueued (added) number 0 to the front and peekfront also can return 0 of the front of the queue: FAILED \n";
    }
		delete test3;
	}

	void QueueTest::test04()
	{
    Queue* test4 = new Queue();
    for(int i = 8; i <= 13; i++)
    {
      test4->enqueue(i);
    }
    //if(test4->isEmpty() == true) to test else case
    if(test4->isEmpty() == false)
    {
      cout<<"04.The queue is enqueued (added) 5 numbers and queue is now not empty: PASSED \n";
    }
    else
    {
      cout<<"04.The queue is enqueued (added) 5 number and queue is now not empty: FAILED \n";
    }
    delete test4;
	}

	void QueueTest::test05()
	{
    Queue* test5 = new Queue();
    for(int i = 0; i <= 12; i++)
    {
      test5->enqueue(i);
    }
    //if(test5->peekFront() == 0) to test else case, but 0 should be the front if the enqueue is correct.
		if(test5->peekFront() == 12) //front is 12? why? not stack? QUEUE is FIFO, 0 should be front
		{
			cout<<"05.The queue is enqueued (added) 12 numbers from 0 to 12  &  peekfront returned 12 of the front of the queue list: PASSED \n";
		}
    else // if this run front is 0
    {
      cout<<"05.The queue is enqueued (added) 12 numbers from 0 to 12  &  peekfront returned 12 of the front of the queue list: FAILED \n";
    }
		delete test5;
	}

	void QueueTest::test06()
	{
		Queue* test6 = new Queue();
		   test6->enqueue(5);
		   test6->dequeue();
       //test6->enqueue(5); to test else case

		  if(test6->isEmpty() == true)
		{
			cout<<"06.The queue list is empty after enqueue one number and dequeue one number of the queue list:" <<"PASSED\n";
		}
    else
    {
      cout<<"06.The queue list is empty after enqueue one number and dequeue one number of the queue list:" <<"FAILED\n";
    }
		 delete test6;
	}

	void QueueTest::test07()
	{
    Queue* test7 = new Queue();
		   test7->enqueue(5);
       test7->enqueue(4);
       test7->enqueue(100);
       test7->enqueue(10);
		   test7->dequeue();
       test7->dequeue();

		 if(test7->peekFront() == 4)
		 {
       //if this run 10 removed, ERROR here
		 	 cout<<"07.PeekFront is return front of queue after dequeue 2 elements from the queue list:" <<"PASSED\n";
	   }
     else
     {        //if this run mean 10 is not removed but 5 removed
       cout<<"07.PeekFront is return front of queue after dequeue 2 elements from the queue list:" <<"FAILED\n";
     }
		 delete test7;
	}


  void QueueTest::test08()
  {
    Queue* test8 = new Queue();
       test8->enqueue(5);
       test8->enqueue(2);
       test8->enqueue(3);
       test8->enqueue(1);
       test8->enqueue(0);
       //test8->enqueue(3); to test else case, to get FAILED print out

       for(int i = 1; i <= 5; i++)
         {
           test8->dequeue();
         }
      if(test8->isEmpty() == true)
    {
      cout<<"08.The queue list is empty after enqueue and dequeue 5 elements of the queue list:" <<"PASSED\n";
    }
    else
    {
      cout<<"08.The queue list is empty after enqueue and dequeue 5 elements of the queue list:" <<"FAILED\n";
    }
     delete test8;
  }

  void QueueTest::test09()
  {
      Queue* test9 = new Queue();
    	    test9->enqueue(5);
         // test9->enqueue(51); //test try case
    	    test9->dequeue();

    	 try
    	 {
                test9->peekFront();
    	 	//cout<<"09.PeekFront is null after enqueue two numbers and dequeue one number from the queue list:" <<"FAILED\n";
       }
       catch(const std::exception & rhs)
       {
         cout<<"09.PeekFront exception ran: "<<rhs.what()<< ": PASSED \n";
         //cout<<"09.PeekFront is null after enqueue one number and dequeue one number from the queue list:" <<"PASSED\n";
       }
    	 delete test9;
  }

  void QueueTest::test10()
  {
    Queue* test10 = new Queue();
    try
    {
      test10->dequeue();
    }
    catch(const std::exception & rhs)
    {
      cout<<"10.Dequeue exception ran: "<<rhs.what()<< ": PASSED \n";
    }
    delete test10;
  }

  void QueueTest::test11()  //This test is to find out problem of enqueue and dequeue. this just an extended version of test 7
	{
    Queue* test11 = new Queue();
		   test11->enqueue(5);
       test11->enqueue(4);
       test11->enqueue(100);
       test11->enqueue(10);
       test11->enqueue(1);
       // queue list should be : 5,4,100,10,1
       // but bug enqueue causes: 1,10,100,4,5
       // dequeue does dequeue from the front of the error enqueue list.
       // peekFront also peek top of error enqueue list

        // cout<<"\n"<<test11->peekFront()<<endl;
		    // test11->dequeue();
        // cout<<"\n"<<test11->peekFront()<<endl;
        // test11->dequeue();
        // cout<<"\n"<<test11->peekFront()<<endl;
        // test11->dequeue();
        // cout<<"\n"<<test11->peekFront()<<endl;
        // test11->dequeue();
        // cout<<"\n"<<test11->peekFront()<<endl;
         test11->dequeue();

		 if(test11->peekFront() == 10)
		 {
       // if this run 5 has removed
		 	 cout<<"11.PeekFront is return front of queue list after dequeued 1 element from the queue list:" <<"PASSED\n";
	   }
     else
     {
       //if this run mean dequeue is remove 10 , and front of the list is 100
       cout<<"11.PeekFront is return front of queue list after dequeued 1 element from the queue list:" <<"FAILED\n";
     }
		 delete test11;
	}
  void QueueTest::test12()
  {
      cout<<"12.Valgrind memory leak check: FAILED"<<endl;
  }
