#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Problem{
    public:
        string getDeclaration(){
            return declaration;
        }
        double getSolution(unsigned int i){
            return solutions.at(i);
        }
        void setDeclaration(string d){
            declaration = d;
        }
    protected:
        string declaration;
        vector<double> solutions;
};

class SingleVariable : public Problem{
    public:
        void setSolution(double i){
            solutions.at(0) = i;
        }
    protected:
        //Empty
};

/*Generate a series of problems and fill a vector with them
 *@v:       vector to be filled with algebra problems
 *@num:     number of algebra probs to be generated
 */
 //TBD

/*Generate the problem string for a problem
 *@p:   The problem whose string needs to be generated
 */
 //TBD

int main(){
    srand(time(NULL));
    
    //Just some test code
    string s = "ax + b = c";
    Problem p;
    p.setDeclaration(s);
    cout << p.getDeclaration() << endl;
    
    return 0;
}
