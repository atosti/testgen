/*Generate basic tests for teachers which have accompanying answer keys.
Reference Kalzemus for marketing to teachers and crossword generation
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*  Bugs/Implementations for the future:
 *  1.  Generate x in a different location within a problem (e.g. "a + bx = c",
        or "a + b = cx")
 *  2.  Generate negative coefficients and values for a, b, c, and x
 *  3.  Find a way to determine if two problems are the same, even if they are
        ordered differently.
 */

//Of the form "ax + b = c"
struct problem{
    string problem;
    double a,b,c,x; //a, b, c are consts, and x is the solution
};

/*Generate a series of problems and fill a vector with them
 *@v:       vector to be filled with algebra problems
 *@num:     number of algebra probs to be generated
 */
/*void genProbs(vector<string> &v, int num){
    return;
}
 */

/*Generate the problem string for a problem
 *@p:   The problem whose string needs to be generated
 */
void generate_problem_string_var1(problem &p){
    string s = "";
    s = (p.a) + to_string(p.x) + " = " + to_string(p.c);
    cout << "S: " << s << endl;
    p.problem = s;
    //int x = (rand() % (lim2 - lim1)) + lim1; //Gen a value for x
    //int a, b, c = 0;
    //a = rand() % 9;
    //b = rand() % 9;
    //c = a*x + b;
}

int main(){
    srand(time(NULL));
    problem p;
    p.a = 1;
    p.x = 3;
    p.b = 5;
    p.c = 8;
    generate_problem_string_var1(p);
    cout << "Prob1: " << p.problem << endl;
    
    return 0;
}
