
vector<string> printArrowPattern(int n) {

    // Create an array of string for storing the pattern

    vector<string> answer;

 

    // Create 2 strings 'str1' for ' ' and 'str2' for '*'

    string str1, str2;

 

    // Run a loop from 1 to 2'N' - 1

    for (int i = 1; i <= (2 * n - 1); i++) {

        // Check condition for increse length or decrese length

        if (i <= n) {

            // Append ' ' to 'str1'

            str1.push_back(' ');

 

            // Append '*' to 'str2'

            str2.push_back('*');

 

            // Append 'str1' + 'str2' to 'answer'

            answer.push_back(str1 + str2);

        } else {

            // Remove last characters from both strings

            str1.pop_back();

            str2.pop_back();

 

            // Append concatation of both strings to 'answer' array

            answer.push_back(str1 + str2);

        }

    }

 

    //Return 'answer' array that contains pattern

    return answer;

}
