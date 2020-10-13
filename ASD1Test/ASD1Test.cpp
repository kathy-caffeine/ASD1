#include "pch.h"
#include "CppUnitTest.h"
#include"../ASD1/linkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AiSD1test
{
	TEST_CLASS(AiSD1test)
	{
	public:
		LinkedList* test1;
		LinkedList* test2;
		TEST_METHOD_INITIALIZE(setUp)
		{
			test1 = new LinkedList();
			test2 = new LinkedList();
		}
		TEST_METHOD_CLEANUP(cleanUp)
		{
			delete test1;
		}

		TEST_METHOD(back_first)
		{
			test1->push_front(0);
			test1->push_back(1);
			Assert::AreEqual(test1->at(1), 1);
		}
		TEST_METHOD(back_zero)
		{
			test1->push_back(1);
			Assert::AreEqual(test1->at(0), 1);
		}
		TEST_METHOD(front_first)
		{
			test1->push_back(1);
			test1->push_front(0);
			Assert::AreEqual(test1->at(0), 0);
		}
		TEST_METHOD(front_zero)
		{
			test1->push_front(1);
			test1->push_back(100);
			Assert::AreEqual(test1->at(0), 1);
		}
		TEST_METHOD(pop_back_first)
		{
			test1->push_back(1);
			test1->push_front(0);
			test1->push_back(2);
			test1->pop_back();
			Assert::AreEqual((int)test1->get_size() - 1, 2);
		}
		TEST_METHOD(pop_back_zero)
		{
			test1->push_back(1);
			test1->pop_back();
			Assert::AreEqual((int)test1->get_size() - 1, 0);
		}
		TEST_METHOD(pop_front_first)
		{
			test1->push_back(1);
			test1->push_front(0);
			test1->push_back(2);
			test1->pop_front();
			Assert::AreEqual((int)test1->get_size() - 1, 2);
		}
		TEST_METHOD(pop_front_zero)
		{
			test1->push_back(1);
			test1->pop_front();
			Assert::AreEqual((int)test1->get_size() - 1, 0);
		}
		TEST_METHOD(insertelem_first)
		{
			test1->push_back(1);
			test1->push_front(0);
			test1->push_back(2);
			test1->insert(10, 1); // 0 10 1 2
			Assert::AreEqual(test1->at(1), 10);
		}
		TEST_METHOD(insertelem_zero)
		{
			test1->push_back(1);
			test1->push_front(0);
			test1->push_back(2);
			test1->insert(10, 0); // 10 0 1 2
			Assert::AreEqual(test1->at(0), 10);
		}
		TEST_METHOD(insertelem_last)
		{
			test1->push_back(1);
			test1->push_front(0);
			test1->push_back(2);
			test1->insert(0, (int)test1->get_size() - 1);
			Assert::AreEqual(test1->at((int)test1->get_size() - 1), 10);
		}
		TEST_METHOD(at_correct_index_second)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->push_back(3);
			Assert::AreEqual(test1->at(2), 2);
		}
		TEST_METHOD(at_correct_index_third)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->push_back(3);
			Assert::AreEqual(test1->at(3), 3);
		}
		TEST_METHOD(at_correct_index_first)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->push_back(3);
			Assert::AreEqual(test1->at(1), 1);
		}
		TEST_METHOD(remove_zero)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->remove(0);
			Assert::AreEqual((int)test1->get_size() - 1, 2);
		}
		TEST_METHOD(remove_last)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->remove((int)test1->get_size());
			Assert::AreEqual((int)test1->get_size() - 1, 2);
		}
		TEST_METHOD(remove_mid)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->remove(1);
			Assert::AreEqual((int)test1->get_size() - 1, 2);
		}
		TEST_METHOD(size_zero)
		{
			test1->push_front(0);
			test1->remove(0);
			Assert::AreEqual((int)test1->get_size() - 1, 0);
		}
		TEST_METHOD(size_mid)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->insert(10, 1);
			Assert::AreEqual((int)test1->get_size() - 1, 4);
		}
		TEST_METHOD(clear)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->insert(10, 1);
			test1->clear();
			Assert::AreEqual((int)test1->get_size() - 1, 0);
		}
		TEST_METHOD(set_mid)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->set(10, 1);
			Assert::AreEqual(test1->at(1), 10);
		}
		TEST_METHOD(set_front)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->set(10, 0);
			Assert::AreEqual(test1->at(0), 10);
		}
		TEST_METHOD(set_back)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->set((int)test1->get_size() - 1, 0);
			Assert::AreEqual(test1->at((int)test1->get_size() - 1), 10);
		}
		TEST_METHOD(isEmptyFalse)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			Assert::AreEqual(test1->isEmpty(), false);
		}
		TEST_METHOD(isEmptyTrue)
		{
			test1->push_front(0);
			test1->push_back(1);
			test1->push_back(2);
			test1->clear();
			Assert::AreEqual(test1->isEmpty(), true);
		}
		TEST_METHOD(InsertFrontList)
		{
			test1->push_front(10);
			test1->push_back(11);
			test1->push_back(12);
			test2->push_front(0);
			test2->push_back(1);
			test2->push_back(2);
			test1->insert(*test2, 0);
			Assert::AreEqual((int)test1->get_size() - 1, 6);
		}
		TEST_METHOD(InsertMidList)
		{
			test1->push_front(10);
			test1->push_back(11);
			test1->push_back(12);
			test2->push_front(0);
			test2->push_back(1);
			test2->push_back(2);
			test1->insert(*test2, 0);
			Assert::AreEqual((int)test1->get_size() - 1, 6);
		}
		TEST_METHOD(InsertBackList)
		{
			test1->push_front(10);
			test1->push_back(11);
			test1->push_back(12);
			test2->push_front(0);
			test2->push_back(1);
			test2->push_back(2);
			test1->insert(*test2, 0);
			Assert::AreEqual((int)test1->get_size() - 1, 6);
		}
		TEST_METHOD(at_incorrect_index)
		{
			try {
				test1->at(-1);
			}
			catch (std::out_of_range e) {
				Assert::AreEqual("Index is greater than list size", e.what());
			}

		}
		TEST_METHOD(test_PopBackFromEmpty)
		{
			try {
				test1->pop_back();
			}
			catch (std::out_of_range e) {
				Assert::AreEqual("Segmentation fault", e.what());
			}
		}
		TEST_METHOD(test_PopFrontFromEmpty)
		{
			try {
				test1->pop_front();
			}
			catch (std::out_of_range e) {
				Assert::AreEqual("Segmentation fault", e.what());
			}
		}
		TEST_METHOD(test_Remove_incorrect_index)
		{
			try {
				test1->remove(-1);
			}
			catch (std::out_of_range e) {
				Assert::AreEqual("Index is greater than list size", e.what());
			}
		}
		TEST_METHOD(test_Insert_incorrect_index)
		{
			test1->push_back(1);
			test1->push_back(2);
			test1->push_back(3);
			try {
				test1->insert(4, 3);
			}
			catch (std::out_of_range e) {
				Assert::AreEqual("Index is greater than list size", e.what());
			}
		}
		
	};
}