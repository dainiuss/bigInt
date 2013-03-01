/******************************************************************************\
| Program:  IntegerPlotFunction.cpp
| Problem:  Write a program BigInt(n) that displays an arbitrary positive integer 
|           n using big characters of size 7x7, as in the following example for 
|           BigInt(170)
| 
| Method :
| Author :  Dainius
| Date   :  02/28/2013
\******************************************************************************/

#include<iostream>

#define DIMENSIONS 7

using namespace std;

/**
 * Returns a matrix DIMENSIONSxDIMENSIONS for a one digit entered
 * @parameter int n - integer digit
 * @parameter char matrix[7][7]
 * Digits are rendered like the ones below:
--------------------------------------------------------------------------------
  @@    @@@@@   @@@@@      @@  @@@@@@@  @@@@@  @@@@@@@  @@@@@   @@@@@   @@@@@
 @@@   @@   @@ @@   @@    @@@  @@      @@   @@      @@ @@   @@ @@   @@ @@   @@
  @@        @@      @@   @ @@  @@@@@@  @@          @@  @@   @@ @@   @@ @@   @@
  @@       @@     @@@   @  @@  @@   @@ @@@@@@     @@    @@@@@   @@@@@@ @@   @@
  @@     @@         @@ @@@@@@@      @@ @@   @@   @@    @@   @@      @@ @@   @@
  @@   @@   @@ @@   @@     @@  @@   @@ @@   @@  @@     @@   @@ @@   @@ @@   @@
@@@@@@ @@@@@@@  @@@@@     @@@@  @@@@@   @@@@@  @@       @@@@@   @@@@@   @@@@@
--------------------------------------------------------------------------------
*/
void getDigitMatrix(int n, char matrix[7][7])
{

    char matrix1[DIMENSIONS][DIMENSIONS]= {' ',' ',' ','@','@',' ',' ',
                                           ' ',' ','@','@','@',' ',' ',
                                           ' ',' ',' ','@','@',' ',' ',
                                           ' ',' ',' ','@','@',' ',' ',
                                           ' ',' ',' ','@','@',' ',' ',
                                           ' ',' ',' ','@','@',' ',' ',
                                           ' ','@','@','@','@','@','@'};

    char matrix2[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ',' ',' ',' ',' ','@','@',
                                           ' ',' ',' ',' ','@',' ',' ',
                                           ' ',' ','@','@',' ',' ',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@','@','@','@','@','@'};
                                           
	char matrix3[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ',' ',' ',' ',' ','@','@',
                                           ' ',' ',' ','@','@','@',' ',
                                           ' ',' ',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrix4[DIMENSIONS][DIMENSIONS]= {' ',' ',' ',' ','@','@',' ',
                                           ' ',' ',' ','@','@','@',' ',
                                           ' ',' ','@',' ','@','@',' ',
                                           ' ','@',' ',' ','@','@',' ',
                                           '@','@','@','@','@','@','@',
                                           ' ',' ',' ',' ','@','@',' ',
                                           ' ',' ',' ','@','@','@','@'};
                                           
    char matrix5[DIMENSIONS][DIMENSIONS]= {'@','@','@','@','@','@','@',
                                           '@','@',' ',' ',' ',' ',' ',
                                           '@','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ',' ',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrix6[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ',' ',' ',
                                           '@','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrix7[DIMENSIONS][DIMENSIONS]= {'@','@','@','@','@','@','@',
                                           ' ',' ',' ',' ',' ','@','@',
                                           ' ',' ',' ',' ','@','@',' ',
                                           ' ',' ',' ','@','@',' ',' ',
                                           ' ',' ','@','@',' ',' ',' ',
                                           ' ','@','@',' ',' ',' ',' ',
                                           '@','@',' ',' ',' ',' ',' '};
                                           
    char matrix8[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrix9[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@','@',
                                           ' ',' ',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrix0[DIMENSIONS][DIMENSIONS]= {' ','@','@','@','@','@',' ',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           '@','@',' ',' ',' ','@','@',
                                           ' ','@','@','@','@','@',' '};
                                           
    char matrixX[DIMENSIONS][DIMENSIONS]= {'@','@',' ',' ',' ','@','@',
                                           ' ','@','@',' ','@','@',' ',
                                           ' ',' ','@','@','@',' ',' ',
                                           ' ',' ','@','@','@',' ',' ',
                                           ' ',' ','@','@','@',' ',' ',
                                           ' ','@','@',' ','@','@',' ',
                                           '@','@',' ',' ',' ','@','@'};
    
	/**
	 * Copy digit matrix to the one entered into the function
	 */                                       	
	switch (n)
	{
		case 1:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix1[i][j];
        		}
    		}
    		break;
    		
    	case 2:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix2[i][j];
        		}
    		}
    		break;
    		
    	case 3:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix3[i][j];
        		}
    		}
    		break;
    		
    	case 4:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix4[i][j];
        		}
    		}
    		break;
    		
    	case 5:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix5[i][j];
        		}
    		}
    		break;
    		
    	case 6:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix6[i][j];
        		}
    		}
    		break;
    		
    	case 7:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix7[i][j];
        		}
    		}
    		break;
    		
    	case 8:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix8[i][j];
        		}
    		}
    		break;
    		
    	case 9:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix9[i][j];
        		}
    		}
    		break;
    		
    	case 0:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrix0[i][j];
        		}
    		}
    		break;
    		
    	default:	
			for(int i=0; i<DIMENSIONS; i++) 
			{
        		for (int j=0; j<DIMENSIONS; j++) 
				{
            		matrix[i][j] = matrixX[i][j];
        		}
    		}
    		break;
	}
}

/**
 * Displays big integer of size 7x7
 * @parameter int n - integer
 */
void BigInt(int n)
{
	int n1 = n;
	int size = 0;
	
	/* Get how many digits the integer has */
	while(n1)
	{
    	size++;
    	n1 /= 10;
	}
	
	/* Initializing digits array to digit storing */
	int digits[size];	
	/* Will make 1 column blank between digits. We need new matrix of size
	 * DIMENTIONS x size*8
	 */
	char matrixNew[DIMENSIONS][size*(DIMENSIONS+1)]; 
	
	/* adding digits into the array */
	for(int i=size-1; i>=0; i--)
	{
		digits[i] = n%10;
		n /= 10;	
	}

	/* Will store single digit */
    char matrixPartial[DIMENSIONS][DIMENSIONS];
    /* Step is used to step through previous matrix */
    int step = 0;
    for(int k=0; k<size; k++)
    {
		/* Getting the single digit matrix */
		getDigitMatrix(digits[k],matrixPartial);
		
		/* Adding single digit matrix to the main matrix */
		for(int r=0; r<DIMENSIONS; r++) 
		{
			int lastColumn = step;
    		for (int c=step, cPartial=0; c<DIMENSIONS+step; c++, cPartial++) 
			{
				matrixNew[r][c]=matrixPartial[r][cPartial]; 
				lastColumn++;
        	}
        	/* Will add space between digits */
        	matrixNew[r][lastColumn] = ' ';
    	}
    	/* Increase the step by the size of the matrix plus empty space */
    	step += (DIMENSIONS+1);
			
	}
    
    /**
     * Print big integer
     */
    for(int i=0; i<DIMENSIONS; i++) 
	{
        for (int j=0; j<size*(DIMENSIONS+1); j++) 
		{
            printf("%c", matrixNew[i][j]);
        }
        printf("\n");
    }
	printf("\n");
}

/**
 * Main program
 */
int main()
{
    int c;
    cout << "Enter an integer: ";
    cin >> c;
    	
    do{
    	cout << "\n";
    	BigInt(c);   
    	cout << "Enter an integer ('e' to exit): ";
    	cin >> c;

    }while(cin);

    cout << "\n\n";
    system("pause");   
    return 0;    
}
