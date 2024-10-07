# Recursion 
# Experiment 15 

## Aim
To run and execute codes using recursion like reversing a string, factorial, reversing an integer, sum of all numbers 

## Theory
A function in C++ is an important concept that includes the function definition, function declaration, function body, etc.
A recursive function is a particular function that calls itself repeatedly until a certain condition is met.

### Characteristics of Recursion:

1. **Base Case (Termination Condition)**: A recursion must have a base case to avoid infinite recursion. The base case defines the point at which the function should stop calling itself.
   
2. **Recursive Case**: The recursive case is the part of the function where it calls itself with a simpler or smaller input to work towards the base case.
   
3. **Function Call Stack**: Every recursive call pushes the function onto the call stack. The function completes when all recursive calls return and pop off the stack.
   
4. **Divides Problem into Smaller Subproblems**: Recursion solves a problem by breaking it down into smaller, simpler subproblems of the same type.
   
5. **Direct and Indirect Recursion**: In direct recursion, the function calls itself. In indirect recursion, one function calls another, which eventually leads to the original function being called again.
   
6. **Memoization (Optional)**: Sometimes, to avoid redundant recursive calls, memoization is used to store previously computed results, which can optimize the recursive solution.

---

### Advantages of Recursion:

1. **Simplicity and Elegance**: Recursive solutions are often more concise and easier to understand conceptually, especially for problems like tree traversal, factorials, and Fibonacci sequences.
   
2. **Reduction of Complex Problems**: Recursion can simplify the solution for problems that are inherently recursive in nature (e.g., fractals, divide-and-conquer algorithms like quicksort, mergesort, etc.).

3. **Naturally Handles Nested Structures**: Recursive algorithms are excellent for problems involving nested structures like trees and graphs (e.g., traversing binary trees, solving the Tower of Hanoi, etc.).

4. **Less Code**: Recursive solutions often result in fewer lines of code compared to their iterative counterparts, as they eliminate the need for complex looping constructs.

---

### Disadvantages of Recursion:

1. **High Memory Usage (Stack Overflow)**: Every recursive call uses stack space. Deep or excessive recursion can lead to a stack overflow if the call stack limit is exceeded, especially for large inputs or problems without tail recursion.
   
2. **Performance Overhead**: Recursive function calls can be more expensive in terms of time and space compared to iterative solutions because of the repeated function calls and the associated overhead (context switching).
   
3. **Difficult Debugging**: Debugging recursive functions can be more difficult compared to iterative approaches, as it can be challenging to trace the flow of recursive calls, especially when multiple levels of recursion are involved.
   
4. **Redundant Calculations**: Without optimization (e.g., memoization), recursion can involve redundant calculations, as it may recompute the same values multiple times (e.g., naive Fibonacci implementation).
   
5. **Not Always Intuitive**: For some problems, recursion may be less intuitive or harder to write for programmers who are not familiar with recursive thinking, compared to iterative approaches.

---

### When to Use Recursion:

- **Divide and Conquer Problems**: Quicksort, mergesort, binary search.
- **Tree or Graph Traversal**: Depth-first search (DFS), preorder/inorder/postorder traversals.
- **Backtracking Problems**: Solving mazes, N-queens problem, and generating permutations.
- **Mathematical Problems**: Factorial, Fibonacci sequence, and combinations.

In summary, recursion is a powerful technique but must be used judiciously, especially when dealing with large input sizes or when stack depth and performance are critical concerns.

## Code 
## Factorial
~~~
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<0)
    {
        return -1;
    }
    else if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}

int main()
{
    int n,x;
    cout<<"Enter the number to find the factorial of: "<<endl;
    cin>>n;
    x = factorial(n);
    cout<<"The factorial of: "<<n<<" = "<<x;
}
~~~

## Code input
![]()

## Sum of all numbers from 1 to n

~~~
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<0)
    {
        return -1;
    }
    else if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}

int main()
{
    int n,x;
    cout<<"Enter the number to find the factorial of: "<<endl;
    cin>>n;
    x = factorial(n);
    cout<<"The factorial of: "<<n<<" = "<<x;
}
~~~

## Code Output 

![]()

## Reversing an integer 

~~~
#include<iostream>
using namespace std;

void reverse(int n) 
{
    if (n > 0)
    {
        int mod = n % 10;
        cout << mod;
        n = n / 10;
        reverse(n); 
    }
}

int main()
{
    int n;
    cout << "Enter the number to be reversed: " << endl;
    cin >> n;
    reverse(n);
    cout << endl;
    return 0;
}

~~~

## Code intput 
![]()

## Reversing a string 

~~~
#include<iostream>
using namespace std;

void reverse(char *str)
{
    if(*str)
    {
        reverse(str +1);
        cout<<("%c", *str);
    }
}

int main()
{
    char a[50];
    cout<<"Enter a string: "<<endl;
    cin>>a;
    reverse(a);
    return 0;
}
~~~

## Code output 
![]()

## Conclusion
Learnt how to use recursive techniques in c++
