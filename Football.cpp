#include<bits/stdc++.h>

using namespace std;


struct Node
{

    char player_name[100];
    int jersey_number;
    int goal;
    int got_red_card;
    int got_yellow_card;
    float pass_accuracy;
    char key_pass[100];
    Node* next;

};


Node* match_1;
Node* match_2;
Node* match_3;
Node* match_4;
Node* match_5;


/// Info Add Function.

void player_info_add()
{


    int match;

    cout << "Match Number: ";
    cin >> match;
    cout << endl;

    Node* new_node = new Node();

    cout << "Enter Player Name: ";
    scanf("%*c%[^\n]", &new_node->player_name);
    cout<< endl;

    cout << "Enter Jersey Number: ";
    cin >> new_node->jersey_number;
    cout << endl;

    cout << "Enter Goal Figure: ";
    cin >> new_node->goal;
    cout << endl;

    cout << "Enter Red Card Figure: ";
    cin >> new_node->got_red_card;
    cout << endl;

    cout << "Enter Yellow Card Figure: ";
    cin >> new_node->got_yellow_card;
    cout << endl;

    cout << "Enter The Percentage of Pass Accuracy: ";
    cin >> new_node->pass_accuracy;
    cout << endl;

    cout << "Key Pass, Yes or Not: ";
    scanf("%*c%[^\n]", &new_node->key_pass);
    cout << endl;

    new_node->next = NULL;

// I am using stack for taking input.

    if(match == 1)
    {

        new_node->next = match_1;
        match_1 = new_node;

    }
    else if(match == 2)
    {

        new_node->next = match_2;
        match_2 = new_node;


    }
    else if(match == 3)
    {

        new_node->next = match_3;
        match_3 = new_node;
    }
    else if(match == 4)
    {

        new_node->next = match_4;
        match_4 = new_node;

    }
    else if(match == 5)
    {

        new_node->next = match_5;
        match_5 = new_node;
    }
    else
    {

        cout << "This memory only take 5 match data.";
    }




}




/// All Match Info Display Function.


void show()
{


    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;



//  Match-1 Info Print code.


    if(temp1 == NULL)
    {
        cout << "There is No Info in the Match-1 list." << endl;
        cout << endl;
    }
    else
    {
        cout << "======================== Player Info list for Match-1 ======================== " << endl;
        cout << endl;

        while(temp1 != NULL)
        {

            cout << "Player Name: " <<temp1->player_name << endl;
            cout << "Jersey Number: " << temp1->jersey_number <<endl;
            cout << "Goal Figure: " << temp1->goal << endl;
            cout << "Red Card Figure: " << temp1->got_red_card << endl;
            cout << "Red Card Figure: " << temp1->got_red_card << endl;
            cout << "Yellow Card Figure: " << temp1->got_yellow_card << endl;
            cout << "Pass accuracy: " << temp1->pass_accuracy << endl;
            cout << "Key pass: " << temp1->key_pass << endl;

            temp1 = temp1->next;

            cout << "\n";

        }

        cout << "\n";

    }



//  Match-2 Info Print code.



    if(temp2 == NULL)
    {
        cout << "There is No Info in the Match-2 list." << endl;
        cout << endl;
    }
    else
    {
        cout << "======================== Player info for match-2 list ======================== " << endl;
        cout << endl;

        while(temp2 != NULL)
        {

            cout << "Player Name: " <<temp2->player_name << endl;
            cout << "Jersey Number: " << temp2->jersey_number <<endl;
            cout << "Goal Figure: " << temp2->goal << endl;
            cout << "Red Card Figure: " << temp2->got_red_card << endl;
            cout << "Red Card Figure: " << temp2->got_red_card << endl;
            cout << "Yellow Card Figure: " << temp2->got_yellow_card << endl;
            cout << "Pass accuracy: " << temp2->pass_accuracy << endl;
            cout << "Key pass: " << temp2->key_pass << endl;

            temp2 = temp2->next;

            cout << "\n";

        }

        cout << "\n";

    }


//  Match-3 Info Print code.



    if(temp3 == NULL)
    {
        cout << "There is no info in the Match-3 list." << endl;
        cout << endl;
    }
    else
    {
        cout << "======================== Player info for match-3 list ======================== " << endl;
        cout << endl;

        while(temp3 != NULL)
        {

            cout << "Player Name: " <<temp3->player_name << endl;
            cout << "Jersey Number: " << temp3->jersey_number <<endl;
            cout << "Goal Figure: " << temp3->goal << endl;
            cout << "Red Card Figure: " << temp3->got_red_card << endl;
            cout << "Red Card Figure: " << temp3->got_red_card << endl;
            cout << "Yellow Card Figure: " << temp3->got_yellow_card << endl;
            cout << "Pass accuracy: " << temp3->pass_accuracy << endl;
            cout << "Key pass: " << temp3->key_pass << endl;

            temp3 = temp3->next;

            cout << "\n";

        }

        cout << "\n";

    }



//  Match-4 Info Print code.



    if(temp4 == NULL)
    {
        cout << "There is no info in the Match-4 list." << endl;
        cout << endl;
    }
    else
    {
        cout << "======================== Player info for match-4 list ======================== " << endl;
        cout << endl;

        while(temp4 != NULL)
        {

            cout << "Player Name: " <<temp4->player_name << endl;
            cout << "Jersey Number: " << temp4->jersey_number <<endl;
            cout << "Goal Figure: " << temp4->goal << endl;
            cout << "Red Card Figure: " << temp4->got_red_card << endl;
            cout << "Red Card Figure: " << temp4->got_red_card << endl;
            cout << "Yellow Card Figure: " << temp4->got_yellow_card << endl;
            cout << "Pass accuracy: " << temp4->pass_accuracy << endl;
            cout << "Key pass: " << temp4->key_pass << endl;

            temp4 = temp4->next;

            cout << "\n";

        }

        cout << "\n";

    }



//  Match-5 Info Print code.



    if(temp5 == NULL)
    {
        cout << "There is no info in the Match-5 list." << endl;
        cout << endl;
    }
    else
    {
        cout << "======================== Player info for match-5 list ======================== " << endl;
        cout << endl;

        while(temp5 != NULL)
        {

            cout << "Player Name: " <<temp5->player_name << endl;
            cout << "Jersey Number: " << temp5->jersey_number <<endl;
            cout << "Goal Figure: " << temp5->goal << endl;
            cout << "Red Card Figure: " << temp5->got_red_card << endl;
            cout << "Red Card Figure: " << temp5->got_red_card << endl;
            cout << "Yellow Card Figure: " << temp5->got_yellow_card << endl;
            cout << "Pass accuracy: " << temp5->pass_accuracy << endl;
            cout << "Key pass: " << temp5->key_pass << endl;

            temp5 = temp5->next;

            cout << "\n";

        }

        cout << "\n";

    }


}



/// Display Function For Specific Match.

void display_match()
{


    int match;

    cout << "Which number of match info you need to see: ";
    cin >> match;
    cout << endl;


    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;



    if(match = 1)
    {

        if(temp1 == NULL)
        {
            cout << "There is No Info in the Match-1 list." << endl;
            cout << endl;
        }
        else
        {
            cout << "========================Player Info list for Match-1 ======================== " << endl;
            cout << endl;

            while(temp1 != NULL)
            {

                cout << "Player Name: " <<temp1->player_name << endl;
                cout << "Jersey Number: " << temp1->jersey_number <<endl;
                cout << "Goal Figure: " << temp1->goal << endl;
                cout << "Red Card Figure: " << temp1->got_red_card << endl;
                cout << "Red Card Figure: " << temp1->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp1->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp1->pass_accuracy << endl;
                cout << "Key pass: " << temp1->key_pass << endl;

                temp1 = temp1->next;

                cout << "\n";

            }

            cout << "\n";

        }

    }
    else if(match == 2)
    {


        if(temp2 == NULL)
        {
            cout << "There is No Info in the Match-2 list." << endl;
            cout << endl;
        }
        else
        {
            cout << "======================== Player info for match-2 list ======================== " << endl;
            cout << endl;

            while(temp2 != NULL)
            {

                cout << "Player Name: " <<temp2->player_name << endl;
                cout << "Jersey Number: " << temp2->jersey_number <<endl;
                cout << "Goal Figure: " << temp2->goal << endl;
                cout << "Red Card Figure: " << temp2->got_red_card << endl;
                cout << "Red Card Figure: " << temp2->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp2->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp2->pass_accuracy << endl;
                cout << "Key pass: " << temp2->key_pass << endl;

                temp2 = temp2->next;

                cout << "\n";

            }

            cout << "\n";

        }

    }
    else if(match == 3)
    {


        if(temp3 == NULL)
        {
            cout << "There is no info in the Match-3 list." << endl;
            cout << endl;
        }
        else
        {
            cout << "======================== Player info for match-3 list ======================== " << endl;
            cout << endl;

            while(temp3 != NULL)
            {

                cout << "Player Name: " <<temp3->player_name << endl;
                cout << "Jersey Number: " << temp3->jersey_number <<endl;
                cout << "Goal Figure: " << temp3->goal << endl;
                cout << "Red Card Figure: " << temp3->got_red_card << endl;
                cout << "Red Card Figure: " << temp3->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp3->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp3->pass_accuracy << endl;
                cout << "Key pass: " << temp3->key_pass << endl;

                temp3 = temp3->next;

                cout << "\n";

            }

            cout << "\n";

        }



    }
    else if(match ==4)
    {


        if(temp4 == NULL)
        {
            cout << "There is no info in the Match-4 list." << endl;
            cout << endl;
        }
        else
        {
            cout << "======================== Player info for match-4 list ======================== " << endl;
            cout << endl;

            while(temp4 != NULL)
            {

                cout << "Player Name: " <<temp4->player_name << endl;
                cout << "Jersey Number: " << temp4->jersey_number <<endl;
                cout << "Goal Figure: " << temp4->goal << endl;
                cout << "Red Card Figure: " << temp4->got_red_card << endl;
                cout << "Red Card Figure: " << temp4->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp4->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp4->pass_accuracy << endl;
                cout << "Key pass: " << temp4->key_pass << endl;

                temp4 = temp4->next;

                cout << "\n";

            }

            cout << "\n";

        }

    }
    else if(match == 5)
    {


        if(temp5 == NULL)
        {
            cout << "There is no info in the Match-5 list." << endl;
            cout << endl;
        }
        else
        {
            cout << "======================== Player info for match-5 list ======================== " << endl;
            cout << endl;

            while(temp5 != NULL)
            {

                cout << "Player Name: " <<temp5->player_name << endl;
                cout << "Jersey Number: " << temp5->jersey_number <<endl;
                cout << "Goal Figure: " << temp5->goal << endl;
                cout << "Red Card Figure: " << temp5->got_red_card << endl;
                cout << "Red Card Figure: " << temp5->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp5->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp5->pass_accuracy << endl;
                cout << "Key pass: " << temp5->key_pass << endl;

                temp5 = temp5->next;

                cout << "\n";

            }

            cout << "\n";

        }


    }
    else
    {

        cout << "Sorry There is nothing to print.\n";
    }


}



/// Search Function Using Player Name and Player Jersey Number.


void search_player()
{

    char name[100];
    int number;

    cout << "Enter Name: ";
    scanf("%*c%[^\n]", &name);
    cout << endl;

    cout << "Enter Jersey Number: ";
    cin >> number;
    cout << endl;


    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;


// Match-1 Function.

    if(temp1 == NULL)
    {
        cout << "No Info able-able about Match-1" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp1 != NULL)
        {


            if(strcmp(temp1->player_name, name) == 0 && temp1->jersey_number == number)
            {
                cout << endl;
                cout << ">>>>>>>>>>>>>> Match-1 <<<<<<<<<<<<<<"<< endl;
                cout << endl;
                cout << "Player Name: " <<temp1->player_name << endl;
                cout << "Jersey Number: " << temp1->jersey_number <<endl;
                cout << "Goal Figure: " << temp1->goal << endl;
                cout << "Red Card Figure: " << temp1->got_red_card << endl;
                cout << "Red Card Figure: " << temp1->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp1->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp1->pass_accuracy << endl;
                cout << "Key pass: " << temp1->key_pass <<"%" << endl;

                x = 1;
                cout << endl;

            }


            temp1 = temp1->next;

        }

    }



// Match-2 Function.



    if(temp2 == NULL)
    {
        cout << "No Info able-able about Match-2" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp2 != NULL)
        {


            if(strcmp(temp2->player_name, name) == 0 && temp2->jersey_number == number)
            {
                cout << endl;
                cout << ">>>>>>>>>>>>>>  Match-2 <<<<<<<<<<<<<<"<< endl;
                cout << endl;
                cout << "Player Name: " <<temp2->player_name << endl;
                cout << "Jersey Number: " << temp2->jersey_number <<endl;
                cout << "Goal Figure: " << temp2->goal << endl;
                cout << "Red Card Figure: " << temp2->got_red_card << endl;
                cout << "Red Card Figure: " << temp2->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp2->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp2->pass_accuracy << endl;
                cout << "Key pass: " << temp2->key_pass <<"%" << endl;

                x = 1;
                cout << endl;

            }


            temp2 = temp2->next;

        }

    }



// Match-3 Function.



    if(temp3 == NULL)
    {
        cout << "No Info able-able about Match-5" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp3 != NULL)
        {


            if(strcmp(temp3->player_name, name) == 0 && temp3->jersey_number == number)
            {
                cout << endl;
                cout << ">>>>>>>>>>>>>> Match-3 <<<<<<<<<<<<<<"<< endl;
                cout << endl;
                cout << "Player Name: " <<temp3->player_name << endl;
                cout << "Jersey Number: " << temp3->jersey_number <<endl;
                cout << "Goal Figure: " << temp3->goal << endl;
                cout << "Red Card Figure: " << temp3->got_red_card << endl;
                cout << "Red Card Figure: " << temp3->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp3->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp3->pass_accuracy << endl;
                cout << "Key pass: " << temp3->key_pass <<"%" << endl;

                x = 1;
                cout << endl;

            }


            temp3 = temp3->next;

        }

    }



// Match-4 Function.



    if(temp4 == NULL)
    {
        cout << "No Info able-able about Match-4" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp4 != NULL)
        {


            if(strcmp(temp4->player_name, name) == 0 && temp4->jersey_number == number)
            {
                cout << endl;
                cout << ">>>>>>>>>>>>>> Match-4 <<<<<<<<<<<<<<"<< endl;
                cout << endl;
                cout << "Player Name: " <<temp4->player_name << endl;
                cout << "Jersey Number: " << temp4->jersey_number <<endl;
                cout << "Goal Figure: " << temp4->goal << endl;
                cout << "Red Card Figure: " << temp4->got_red_card << endl;
                cout << "Red Card Figure: " << temp4->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp4->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp4->pass_accuracy << endl;
                cout << "Key pass: " << temp4->key_pass <<"%" << endl;

                x = 1;
                cout << endl;

            }


            temp4 = temp4->next;

        }

    }


// Match-5 Function.



    if(temp5 == NULL)
    {
        cout << "No Info able-able about Match-5" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp5 != NULL)
        {


            if(strcmp(temp5->player_name, name) == 0 && temp5->jersey_number == number)
            {
                cout << endl;
                cout << ">>>>>>>>>>>>>> Match-5 <<<<<<<<<<<<<<"<< endl;
                cout << endl;
                cout << "Player Name: " <<temp5->player_name << endl;
                cout << "Jersey Number: " << temp5->jersey_number <<endl;
                cout << "Goal Figure: " << temp5->goal << endl;
                cout << "Red Card Figure: " << temp5->got_red_card << endl;
                cout << "Red Card Figure: " << temp5->got_red_card << endl;
                cout << "Yellow Card Figure: " << temp5->got_yellow_card << endl;
                cout << "Pass accuracy: " << temp5->pass_accuracy << endl;
                cout << "Key pass: " << temp5->key_pass <<"%" << endl;

                x = 1;
                cout << endl;

            }


            temp5 = temp5->next;

        }

    }


}



/// This is for Updating Player Info.

void edit(){


    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;


    char name[100];
    int number;
    int match;

    cout << "Enter Player Name: ";
    scanf("%*c%[^\n]", &name);
    cout << endl;

    cout << "Enter Jersey Number: ";
    cin >> number;
    cout << endl;

    cout << "Enter Match Number: ";
    cin >> match;
    cout << endl;

    if(match == 1){

        if(temp1 == NULL){

            cout << "There is nothing to Edit."<<endl;

        }
        else{

            while(temp1->next != NULL){

                if(strcmp(temp1->player_name, name) == 0 && temp1->jersey_number == number ){

                    break;

                }

                temp1 = temp1->next;

            }


            cout << "Enter Update Player Name: ";
            scanf("%*c%[^\n]", &temp1->player_name);
            cout<< endl;

            cout << "Enter Update Jersey Number: ";
            cin >> temp1->jersey_number;
            cout << endl;

            cout << "Enter Update Goal Figure: ";
            cin >> temp1->goal;
            cout << endl;

            cout << "Enter Update Red Card Figure: ";
            cin >> temp1->got_red_card;
            cout << endl;

            cout << "Enter Update Yellow Card Figure: ";
            cin >> temp1->got_yellow_card;
            cout << endl;

            cout << "Enter The Update Percentage of Pass Accuracy: ";
            cin >> temp1->pass_accuracy;
            cout << endl;

            cout << "Key Pass: ";
            scanf("%*c%[^\n]", &temp1->key_pass);
            cout << endl;


        }

    }

    else if(match == 2){

        if(temp2 == NULL){

            cout << "There is nothing to Edit."<<endl;

        }
        else{

            while(temp2->next != NULL){

                if(strcmp(temp2->player_name, name) == 0 && temp2->jersey_number == number ){

                    break;

                }

                temp2 = temp2->next;

            }


            cout << "Enter Update Player Name: ";
            scanf("%*c%[^\n]", &temp2->player_name);
            cout<< endl;

            cout << "Enter Update Jersey Number: ";
            cin >> temp2->jersey_number;
            cout << endl;

            cout << "Enter Update Goal Figure: ";
            cin >> temp2->goal;
            cout << endl;

            cout << "Enter Update Red Card Figure: ";
            cin >> temp2->got_red_card;
            cout << endl;

            cout << "Enter Update Yellow Card Figure: ";
            cin >> temp2->got_yellow_card;
            cout << endl;

            cout << "Enter The Update Percentage of Pass Accuracy: ";
            cin >> temp2->pass_accuracy;
            cout << endl;

            cout << "Key Pass: ";
            scanf("%*c%[^\n]", &temp2->key_pass);
            cout << endl;


        }

    }

    else if(match == 3){

        if(temp3 == NULL){

            cout << "There is nothing to Edit."<<endl;

        }
        else{

            while(temp3->next != NULL){

                if(strcmp(temp3->player_name, name) == 0 && temp3->jersey_number == number ){

                    break;

                }

                temp3 = temp3->next;

            }


            cout << "Enter Update Player Name: ";
            scanf("%*c%[^\n]", &temp3->player_name);
            cout<< endl;

            cout << "Enter Update Jersey Number: ";
            cin >> temp3->jersey_number;
            cout << endl;

            cout << "Enter Update Goal Figure: ";
            cin >> temp3->goal;
            cout << endl;

            cout << "Enter Update Red Card Figure: ";
            cin >> temp3->got_red_card;
            cout << endl;

            cout << "Enter Update Yellow Card Figure: ";
            cin >> temp3->got_yellow_card;
            cout << endl;

            cout << "Enter The Update Percentage of Pass Accuracy: ";
            cin >> temp3->pass_accuracy;
            cout << endl;

            cout << "Key Pass: ";
            scanf("%*c%[^\n]", &temp3->key_pass);
            cout << endl;


        }

    }

     else if(match == 4){

        if(temp4 == NULL){

            cout << "There is nothing to Edit."<<endl;

        }
        else{

            while(temp4->next != NULL){

                if(strcmp(temp4->player_name, name) == 0 && temp4->jersey_number == number ){

                    break;

                }

                temp4 = temp4->next;

            }


            cout << "Enter Update Player Name: ";
            scanf("%*c%[^\n]", &temp4->player_name);
            cout<< endl;

            cout << "Enter Update Jersey Number: ";
            cin >> temp4->jersey_number;
            cout << endl;

            cout << "Enter Update Goal Figure: ";
            cin >> temp4->goal;
            cout << endl;

            cout << "Enter Update Red Card Figure: ";
            cin >> temp4->got_red_card;
            cout << endl;

            cout << "Enter Update Yellow Card Figure: ";
            cin >> temp4->got_yellow_card;
            cout << endl;

            cout << "Enter The Update Percentage of Pass Accuracy: ";
            cin >> temp4->pass_accuracy;
            cout << endl;

            cout << "Key Pass: ";
            scanf("%*c%[^\n]", &temp4->key_pass);
            cout << endl;


        }

    }

     else if(match == 5){

        if(temp5 == NULL){

            cout << "There is nothing to Edit."<<endl;

        }
        else{

            while(temp5->next != NULL){

                if(strcmp(temp5->player_name, name) == 0 && temp5->jersey_number == number ){

                    break;

                }

                temp5 = temp5->next;

            }


            cout << "Enter Update Player Name: ";
            scanf("%*c%[^\n]", &temp5->player_name);
            cout<< endl;

            cout << "Enter Update Jersey Number: ";
            cin >> temp5->jersey_number;
            cout << endl;

            cout << "Enter Update Goal Figure: ";
            cin >> temp5->goal;
            cout << endl;

            cout << "Enter Update Red Card Figure: ";
            cin >> temp5->got_red_card;
            cout << endl;

            cout << "Enter Update Yellow Card Figure: ";
            cin >> temp5->got_yellow_card;
            cout << endl;

            cout << "Enter The Update Percentage of Pass Accuracy: ";
            cin >> temp5->pass_accuracy;
            cout << endl;

            cout << "Key Pass: ";
            scanf("%*c%[^\n]", &temp5->key_pass);
            cout << endl;


        }

    }

}


/// Delete Function is for removing a player info.


void delete_player(){

    char Name[100];
    int m_number;
    int j_number;

    cout << "Enter Match Number: ";
    cin >> m_number;
    cout << endl;

    cout << "Enter Player Name: ";
    scanf("%*c%[^\n]",&Name);
    cout << endl;

    cout<< "Enter Jersey Number: ";
    cin >> j_number;
    cout << endl;

    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;


    if(m_number == 1){


            int counter = 0;
            int x = 0;

            while(temp1 != NULL)
            {
                counter += 1;
                if(strcmp(temp1->player_name, Name)== 0 && temp1->jersey_number == j_number )
                {
                    x = 1;
                    break;
                }

                temp1 = temp1->next;

            }

            if(counter == 1)
            {
                Node* temp1 = match_1;

                match_1 = temp1->next;

                free(temp1);

            }
            else
            {

                Node *previous, *current;
                current = match_1;

                for(int i=1; i<counter; i++)
                {

                    previous = current;
                    current = current->next;
                }

                previous->next = current->next;

                free(current);

            }


            if(x == 1)
            {

                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deleted. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;

            }
            else
            {


                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ This Name and Jersey Number is Invalid. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;


            }


    }

    else if(m_number == 2){


            int counter = 0;
            int x = 0;

            while(temp2 != NULL)
            {
                counter += 1;
                if(strcmp(temp2->player_name, Name)== 0 && temp2->jersey_number == j_number )
                {
                    x = 1;
                    break;
                }

                temp2 = temp2->next;

            }

            if(counter == 1)
            {
                Node* temp2 = match_2;

                match_2 = temp2->next;

                free(temp2);

            }
            else
            {

                Node *previous, *current;
                current = match_2;

                for(int i=1; i<counter; i++)
                {

                    previous = current;
                    current = current->next;
                }

                previous->next = current->next;

                free(current);

            }


            if(x == 1)
            {

                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deleted. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;

            }
            else
            {


                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ This Name and Jersey Number is Invalid. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;


            }


    }

    else if(m_number == 3){


            int counter = 0;
            int x = 0;

            while(temp3 != NULL)
            {
                counter += 1;
                if(strcmp(temp3->player_name, Name)== 0 && temp3->jersey_number == j_number )
                {
                    x = 1;
                    break;
                }

                temp3 = temp3->next;

            }

            if(counter == 1)
            {
                Node* temp3 = match_3;

                match_3 = temp3->next;

                free(temp3);

            }
            else
            {

                Node *previous, *current;
                current = match_3;

                for(int i=1; i<counter; i++)
                {

                    previous = current;
                    current = current->next;
                }

                previous->next = current->next;

                free(current);

            }


            if(x == 1)
            {

                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deleted. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;

            }
            else
            {


                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ This Name and Jersey Number is Invalid. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;


            }

    }

    else if(m_number == 4){



            int counter = 0;
            int x = 0;

            while(temp4 != NULL)
            {
                counter += 1;
                if(strcmp(temp4->player_name, Name)== 0 && temp4->jersey_number == j_number )
                {
                    x = 1;
                    break;
                }

                temp4 = temp4->next;

            }

            if(counter == 1)
            {
                Node* temp4 = match_4;

                match_4 = temp4->next;

                free(temp4);

            }
            else
            {

                Node *previous, *current;
                current = match_4;

                for(int i=1; i<counter; i++)
                {

                    previous = current;
                    current = current->next;
                }

                previous->next = current->next;

                free(current);

            }


            if(x == 1)
            {

                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deleted. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;

            }
            else
            {


                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ This Name and Jersey Number is Invalid. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;


            }


    }

    else if(m_number == 5){


            int counter = 0;
            int x = 0;

            while(temp5 != NULL)
            {
                counter += 1;
                if(strcmp(temp5->player_name, Name)== 0 && temp5->jersey_number == j_number )
                {
                    x = 1;
                    break;
                }

                temp5 = temp5->next;

            }

            if(counter == 1)
            {
                Node* temp5 = match_5;

                match_5 = temp5->next;

                free(temp5);

            }
            else
            {

                Node *previous, *current;
                current = match_5;

                for(int i=1; i<counter; i++)
                {

                    previous = current;
                    current = current->next;
                }

                previous->next = current->next;

                free(current);

            }


            if(x == 1)
            {

                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deleted. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;

            }
            else
            {


                cout << endl;
                cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ This Name and Jersey Number is Invalid. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << endl;


            }


    }



}


/// This will give you a total summary of a player.

void performance(){

    char name[100];
    int number;

    cout << "Enter Name: ";
    scanf("%*c%[^\n]", &name);
    cout << endl;

    cout << "Enter Jersey Number: ";
    cin >> number;
    cout << endl;


    Node* temp1 = match_1;
    Node* temp2 = match_2;
    Node* temp3 = match_3;
    Node* temp4 = match_4;
    Node* temp5 = match_5;


// Match-1 Function.

    if(temp1 == NULL)
    {
        cout << "No Info available about Match-1" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp1 != NULL)
        {


            if(strcmp(temp1->player_name, name) == 0 && temp1->jersey_number == number)
            {
               break;

            }


            temp1 = temp1->next;

        }

    }



// Match-2 Function.



    if(temp2 == NULL)
    {
        cout << "No Info available about Match-2" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp2 != NULL)
        {


            if(strcmp(temp2->player_name, name) == 0 && temp2->jersey_number == number)
            {
                break;

            }


            temp2 = temp2->next;

        }

    }



// Match-3 Function.



    if(temp3 == NULL)
    {
        cout << "No Info available about Match-3" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp3 != NULL)
        {


            if(strcmp(temp3->player_name, name) == 0 && temp3->jersey_number == number)
            {
               break;

            }


            temp3 = temp3->next;

        }

    }



// Match-4 Function.



    if(temp4 == NULL)
    {
        cout << "No Info available about Match-4" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp4 != NULL)
        {


            if(strcmp(temp4->player_name, name) == 0 && temp4->jersey_number == number)
            {
                break;
            }


            temp4 = temp4->next;

        }

    }


// Match-5 Function.



    if(temp5 == NULL)
    {
        cout << "No Info available about Match-5" << endl;
    }
    else
    {
        cout << endl;

        int x = 0;
        while(temp5 != NULL)
        {


            if(strcmp(temp5->player_name, name) == 0 && temp5->jersey_number == number)
            {

                break;

            }


            temp5 = temp5->next;

        }

    }



    cout << "-------------------------------------------Result--------------------------------------------------";
    cout<< endl;

    int total_goal;

    cout << endl;
    cout << temp1->player_name<<endl;
    cout << temp1->jersey_number<<endl;
    cout << endl;

    total_goal = temp1->goal + temp2->goal + temp3->goal + temp4->goal + temp5->goal;
    cout << "The total goal of " << temp1->player_name << " is: "<< total_goal << endl;
    cout << endl;

    int total_red_card;

    total_red_card = temp1->got_red_card + temp2->got_red_card + temp3->got_red_card + temp4->got_red_card + temp5->got_red_card;
    cout << "Total red card: " << total_red_card << endl;
    cout << endl;

    int total_yellow_card;

    total_yellow_card = temp1->got_yellow_card + temp2->got_yellow_card + temp3->got_yellow_card + temp4->got_yellow_card + temp5->got_yellow_card;
    cout << "Total yellow card: " << total_yellow_card << endl;
    cout << endl;

    float total_pass_accuracy;

    total_pass_accuracy = temp1->pass_accuracy + temp2->pass_accuracy + temp3->pass_accuracy + temp4->pass_accuracy + temp5->pass_accuracy ;
    cout << "Total Pass Accuracy: " << total_pass_accuracy << " %"<<endl;
    cout << endl;

    cout << "Key Pass: " << endl;
    cout << "Match 1: " << temp1->key_pass << endl;
    cout << "Match 2: " << temp2->key_pass << endl;
    cout << "Match 3: " << temp3->key_pass << endl;
    cout << "Match 4: " << temp4->key_pass << endl;
    cout << "Match 5: " << temp5->key_pass << endl;
    cout << endl;



}



int main()
{

    match_1 = NULL;
    match_2 = NULL;
    match_3 = NULL;
    match_4 = NULL;
    match_5 = NULL;


    cout << " #####################          ############              ############     ################   ##                      ####             ##              ##                  " << endl;
    cout << " #####################        ###############           ###############    ################   ##                    ##   ##            ##              ##                  " << endl;
    cout << " ##                         ##################         ##################         ###         ##                  ##      ##           ##              ##                  " << endl;
    cout << " ##                         ###################        ###################        ###         ##                 ##        ##          ##              ##                  " << endl;
    cout << " ##########                 ###################        ###################        ###         #######          ###############         ##              ##                  " << endl;
    cout << " ##########                 ###################        ###################        ###         #########       ##################       ##              ##                  " << endl;
    cout << " ##                          #################          #################         ###         ##########     ##                ##      ##              ##                  " << endl;
    cout << " ##                           ###############            ###############          ###         ##########   ###                  ###    #############   ###############     " << endl;
    cout << " ##                             ##########                 ##########             ###         #########   ####                   ####  #############   ###############     " << endl;
    cout << "#######################################################################################################################################################################" << endl;

    int choice = 0;
    while(choice != 8)
    {

        cout << endl;
        cout << "========================== Main Menu ==============================" << endl;
        cout << "\nChoose one from the below options: " << endl;
        cout << endl;
        cout << "\n 1.Add Player Info." << endl;
        cout << "\n 2.Display All Match Info." << endl;
        cout << "\n 3.Display Specific Match Info."<<endl;
        cout << "\n 4.Search Specific Player Info."<<endl;
        cout << "\n 5.Performance of Specific Player."<<endl;
        cout << "\n 6.Edit Specific Player Info."<<endl;
        cout << "\n 7.Delete Specific Player Info." << endl;
        cout << "\n 8.Exit" << endl;
        cout << "\n\nEnter your choice: ";
        cin >> choice;
        cout << endl;



        switch(choice)
        {
        case 1:
        {
            player_info_add();
            break;
        }
        case 2:
        {
            show();
            break;

        }
        case 3:
        {
            display_match();
            break;
        }
        case 4:
        {
            search_player();
            break;
        }
        case 5:
        {
            performance();
            break;
        }
         case 6:
        {
            edit();
            break;
        }
         case 7:
        {
            delete_player();
            break;
        }
        case 8:
        {
            printf("               ********************* Exit Completed ******************");
            break;
        }

        default:
        {
            printf("Please Enter valid choice: ");
        }
        };

    }


}
