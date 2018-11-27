#include <iostream>
#include <vector>

using namespace std;

//prototypes:
bool isPositive(int);
void fillWith(vector <int> &, int);
void printVector(vector <int>);

/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
bool isPositive(int positive)
{

  if(positive > 0)
  {
    return true;
  }
  else
  {
    return false;
  }

}

void fillWith(vector <int> &proj, int grade)
{

 for(int i = 0; i < proj.size(); i++)
 {
    proj[i] = grade;
 }      
}

void printVector(vector <int> print)
{

for(int i = 0; i < print.size(); i++)
{
  cout<<print[i]<<" ";
}

}

//
//
//vector <vector <char> > initializeMatrix(int rows, int columns, char value)
/*
{

vector < vector <char> > MatrixOne;

MatrixOne.resize(rows);

for(int row = 0; row < MatrixOne.size(); row++)
{
  MatrixOne[row].resize(rows);
  for(int column = 0; column < MatrixOne[row].size(); column++)
  {
    MatrixOne[row].resize(columns);
  }
}

for(int row = 0; row < MatrixOne.size(); row++)
{
  for(int column = 0; column < MatrixOne[0].size(); column++)
  {
    MatrixOne[row][column] = value;
  }
}

return MatrixOne;

}

/**
 * Given a matrix (vector of vectors of characters), print out each element,
 * with each row printed on a new line and each value separated by spaces
 * (including a space at the end of each line)
 *
 * @param matrix - a vector of vectors of characters to be printed out
**/
void printMatrix(vector <vector <char> > matrix)
{

for(int row = 0; row < matrix.size(); row++)
{
  for(int column = 0; column < matrix[0].size(); column++)
  {
    cout<<matrix[row][column]<<" ";
  }
  cout<<endl;
}

}

/*vector <vector <char> > initializeMatrix(int,int,char);
void printMatrix( vector <vector <char> > );*/
