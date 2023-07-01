#include "linkedlist.h"

/*******************************************************************************
 * Linked List (Template Version)
 * _____________________________________________________________________________
 * The program is a linked list of nodes (IntNode), which store a
 *    integer. It contains functions such as display(), push_front(),
 *    push_back(), pop_front(), select_sort(), insert_sorted(), and
 *    remove_duplicates() in order to manipulate the list. This version
 *    of the program is templated.
 *    Big 3: Copy constructor, assing operator and destructor
 *    Recursion: length() const, sum() const, reverseDisplay() const;
 * _____________________________________________________________________________
 * INPUT:
 *    - none
 *
 * OUTPUT:
 *    - L1 : LinkedList object, testing template functionality.
 *    - L2 : LinkedList object, testing template functionality.
 *    - L3 : LinkedList object, testing template functionality.
 ******************************************************************************/

int main()
{
    int testNum;

    cout << "Enter test number: " << endl;
    cout << "1 - int\n2 - char\n";
    cin >> testNum;

    //Test for Ints
    if(testNum == 1)
    {
        LinkedList<int> L1;
        LinkedList<int> L3;
        Iterator<int> it;

        for (unsigned i = 0; i < 10; i++)
        {
            L1.push_front(i);
        }

        cout << "TEST 1 FOR INT\n";
        cout<< "L1: ";
        for (it = L1.begin(); it != L1.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl << endl;

        cout << "TEST 2 FOR INT\n";
        cout << "TESTING: L1 front and back functions" << endl;
        cout << L1.front() << "\t" << L1.back() << endl << endl;

        cout << "TEST 3 FOR INT\n";
        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L1.length() << endl;
        cout << "Sum   : " << L1.sum() << endl;
        cout << endl << endl;

        //for testing copy constructor (testNum == 4)
        LinkedList<int> L2(L1);
        //cout << "test pass" << endl;
        for (unsigned i = 0; i < 5; i++){
            L1.push_front(i);
        }

        cout << "TEST 4 FOR INT\n";
        cout << "TESTING: Copy constructor (L2): " << endl;
        cout << "L1: ";
        for (it = L1.begin(); it != L1.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl << endl;
        cout << "L2: ";
        for (it = L2.begin(); it != L2.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl << endl;

        cout << "TESTING: L2 front and back functions" << endl;
        cout << L2.front() << "\t" << L2.back() << endl << endl;

        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L2.length() << endl;
        cout << "Sum   : " << L2.sum() << endl;
        cout << endl << endl;

        //for testing assignment operator (testNum == 5)
        L3 = L2;
        for (unsigned i = 0; i < 5; i++){
            L2.push_front(i);
        }

        cout << "TEST 5 FOR INT\n";
        cout << "TESTING: Assign operator (L3 = L2 ; empty L3): " << endl;
        cout << "L2: ";
        for (it = L2.begin(); it != L2.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl << endl;
        cout << "L3: ";
        for (it = L3.begin(); it != L3.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl << endl;

        cout << "TESTING: L3 front and back functions" << endl;
        cout << L3.front() << "\t" << L3.back() << endl << endl;

        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L3.length() << endl;
        cout << "Sum   : " << L3.sum() << endl;
        cout << endl << endl;

        for (unsigned i = 0; i < 10; i++){
                L1.push_front(i);
        }
        L2 = L1;
        return 0;
    }

    //Test for Chars
    if(testNum == 2)
    {
        LinkedList<char> L1;
        LinkedList<char> L3;
        Iterator<char> it;

        L1.push_front('i');
        L1.push_front('s');
        L1.push_front('t');
        L1.push_front('h');
        L1.push_front('i');
        L1.push_front('s');
        L1.push_front('r');
        L1.push_front('e');
        L1.push_front('a');
        L1.push_front('l');


        cout << "TEST 1 FOR CHAR\n";
        cout<< "L1: ";
        for (it = L1.begin(); it != L1.end(); ++it)
        {
            cout << char(*it) << " ";
        }
        cout << endl << endl;

        cout << "TEST 2 FOR CHAR\n";
        cout << "TESTING: L1 front and back functions" << endl;
        cout << L1.front() << "\t" << L1.back() << endl << endl;

        cout << "TEST 3 FOR CHAR\n";
        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L1.length() << endl;
        cout << "Sum   : " << L1.sum() << endl;
        cout << endl << endl;

        //for testing copy constructor (testNum == 4)
        LinkedList<char> L2(L1);
        //cout << "test pass" << endl;

        L1.push_front('w');
        L1.push_front('h');
        L1.push_front('e');
        L1.push_front('r');
        L1.push_front('e');

        cout << "TEST 4 FOR CHAR\n";
        cout << "TESTING: Copy constructor (L2): " << endl;
        cout << "L1: ";
        for (it = L1.begin(); it != L1.end(); ++it)
        {
            cout << char(*it) << " ";
        }
        cout << endl << endl;
        cout << "L2: ";
        for (it = L2.begin(); it != L2.end(); ++it)
        {
            cout << char(*it) << " ";
        }
        cout << endl << endl;

        cout << "TESTING: L2 front and back functions" << endl;
        cout << L2.front() << "\t" << L2.back() << endl << endl;

        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L2.length() << endl;
        cout << "Sum   : " << L2.sum() << endl;
        cout << endl << endl;

        //for testing assignment operator (testNum == 5)
        L3 = L2;

        L2.push_front('h');
        L2.push_front('e');
        L2.push_front('l');
        L2.push_front('l');
        L2.push_front('0');

        cout << "TEST 5 FOR CHAR\n";
        cout << "TESTING: Assign operator (L3 = L2 ; empty L3): " << endl;
        cout << "L2: ";
        for (it = L2.begin(); it != L2.end(); ++it)
        {
            cout << char(*it) << " ";
        }
        cout << endl << endl;
        cout << "L3: ";
        for (it = L3.begin(); it != L3.end(); ++it)
        {
            cout << char(*it) << " ";
        }
        cout << endl << endl;

        cout << "TESTING: L3 front and back functions" << endl;
        cout << L3.front() << "\t" << L3.back() << endl << endl;

        cout << "TESTING: length and sum functions" << endl;
        cout << "Length: " << L3.length() << endl;
        cout << "Sum   : " << L3.sum() << endl;
        cout << endl << endl;

        for (unsigned i = 0; i < 10; i++) L1.push_front(i);

        L2 = L1;
        return 0;
    }
}
