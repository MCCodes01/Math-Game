
#include <iostream>

#include <ctime>

#include <random>

using namespace std;

// function to display menu

int menu()

{

    cout << "\nMenu\n";

    cout << "\n1 Enter 1 for Addition";

    cout << "\n2 Enter 2 for Subtraction";

    cout << "\n3 Enter 3 for Multiplication";

    cout << "\n4 Enter 4 for Division";

    cout << "\n5 Enter 5 for modulus";

    cout << "\n6 Enter 6 for Exit\n\n";

    // read choice

    float choice;

    cin >> choice;

    return choice;

}

// function to display summary

void summary(string temp, float correct, float incorrect)

{

    cout << "\nSUMMARY:\n";

    cout << temp << " Problems Played: " << correct + incorrect << endl;

    cout << "Number of times answered correctly: " << correct << endl;

    cout << "Number of times answered incorrectly: " << incorrect << endl;

}

// function for addition

void Addition()

{

    int total = 0, correct = 0, incorrect = 0;

    int user_choice;

    while (true)

    {

        // select 2 numbers

        int a = rand() % 9 + 1;

        int b = rand() % 9 + 1;

        // display question

        cout << "How much is " << a << " plus " << b << "?\n";

        cout << "Enter your answer(-1 to return to the menu):\n";

        // read user answer

        cin >> user_choice;

        if (user_choice == -1)

        {

            summary("Addition", correct, incorrect);

            return;

        }

        // do till correct answer

        while (user_choice != a + b)

        {

            incorrect++;

            cout << "No. Please try again.\n";

            cout << "Enter your answer(-1 to return to the menu):\n";

            // read user answer

            cin >> user_choice;

            if (user_choice == -1)

            {

                summary("Addition", correct, incorrect);

                return;

            }

        }

        correct++;

        cout << "Very Good!\n";

    }

}

// function for subtraction

void Subtraction()

{

    int total = 0, correct = 0, incorrect = 0;

    int user_choice;

    while (true)

    {

        // select 2 numbers

        int a = rand() % 9 + 1;

        int b = rand() % 9 + 1;

        // display question

        cout << "How much is " << a << " minus " << b << "?\n";

        cout << "Enter your answer(-1 to return to the menu):\n";

        // read user answer

        cin >> user_choice;

        if (user_choice == -1)

        {

            summary("Subtraction", correct, incorrect);

            return;

        }

        // do till correct answer

        while (user_choice != a - b)

        {

            incorrect++;

            cout << "No. Please try again.\n";

            cout << "Enter your answer(-1 to return to the menu):\n";

            // read user answer

            cin >> user_choice;

            if (user_choice == -1)

            {

                summary("Subtraction", correct, incorrect);

                return;

            }

        }

        correct++;

        cout << "Very Good!\n";

    }

}

// function for multiplication

void Multiplication()

{

    int total = 0, correct = 0, incorrect = 0;

    int user_choice;

    while (true)

    {

        // select 2 numbers

        int a = rand() % 9 + 1;

        int b = rand() % 9 + 1;

        // display question

        cout << "How much is " << a << " multiplied by " << b << "?\n";

        cout << "Enter your answer(-1 to return to the menu):\n";

        // read user answer

        cin >> user_choice;

        if (user_choice == -1)

        {

            summary("Multiplication", correct, incorrect);

            return;

        }

        // do till correct answer

        while (user_choice != a * b)

        {

            incorrect++;

            cout << "No. Please try again.\n";

            cout << "Enter your answer(-1 to return to the menu):\n";

            // read user answer

            cin >> user_choice;

            if (user_choice == -1)

            {

                summary("Multiplication", correct, incorrect);

                return;

            }

        }

        correct++;

        cout << "Very Good!\n";

    }

}

// function for Division

void Division()

{

    float total = 0, correct = 0, incorrect = 0;

    float user_choice;

    while (true)

    {

        // select 2 numbers

        int a = rand() % 9 + 1;

        int b = rand() % 9 + 1;

        // display question

        cout << "How much is " << a << " devided by " << b << "?\n";

        cout << "Enter your answer(-1 to return to the menu):\n";

        // read user answer

        cin >> user_choice;

        if (user_choice == -1)

        {

            summary("Division", correct, incorrect);

            return;

        }

        // do till correct answer

        while (user_choice != a / b)

        {

            incorrect++;
            cout << correct;
            cout << total;
            cout << "No. Please try again.\n";

            cout << "Enter your answer(-1 to return to the menu):\n";

            // read user answer

            cin >> user_choice;

            if (user_choice == -1)

            {

                summary("Division", correct, incorrect);

                return;

            }

        }

        correct++;

        cout << "Very Good!\n";

    }

}

// function for Modulus

void Modulus()

{

    float total = 0, correct = 0, incorrect = 0;

    float user_choice;

    while (true)

    {

        total++;

        // select 2 numbers

        int a = rand() % 9 + 1;

        int b = rand() % 9 + 1;

        // display question

        cout << "How much is " << a << " modulus " << b << "?\n";

        cout << "Enter your answer(-1 to return to the menu):\n";

        // read user answer

        cin >> user_choice;

        if (user_choice == -1)

        {

            summary("Modulus", correct, incorrect);

            return;

        }

        // do till correct answer

        while (user_choice != a % b)

        {

            incorrect++;
            cout << "No. Please try again.;\n";


            cout << "Enter your answer(-1 to return to the menu):\n";

            // read user answer

            cin >> user_choice;

            if (user_choice == -1)

            {

                summary("Modulus", correct, incorrect);

                return;

            }

        }

        correct++;

        cout << "Very Good!\n";

    }

}

int main()

{

    srand(time(0));

    cout << "*********Welcome to the Arithmetic quiz *******\n";

    while (true)

    {

        int choice = menu();

        if (choice == 6)

            break;

        switch (choice)

        {

        case 1:

            Addition();

            break;

        case 2:

            Subtraction();

            break;

        case 3:

            Multiplication();

            break;

        case 4:

            Division();

            break;

        case 5:

            Modulus();

            break;

        }

    }

}