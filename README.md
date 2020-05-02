# Kattis
## 1. Simple, Ad Hoc
#### Simple Control Structures
    - [Judging Moose](judgingmoose.cpp) [(Kattis)](https://open.kattis.com/problems/judgingmoose) 
#### Simulation
    - [Baby Bites](babybites.cpp) [(Kattis)](https://open.kattis.com/problems/babybites)
        - Simple simulation. Print "something is fishy" if a number appears out of order.
    - [Jolly Jumpers](jollyjumpers.cpp) [(Kattis)](https://open.kattis.com/problems/jollyjumpers)
        - Simple simulation. Maintain bool arrya to track which pairwise differences have been seen.
    - [Shiritori](shiritori.cpp) [(Kattis)](https://open.kattis.com/problems/shiritori)
        - Keep track of previously used words. Can use HashMap (unordered_set)
    - [Speed Limit](speedlimit.cpp) [(Kattis)](https://open.kattis.com/problems/speedlimit)
        - Nested loop to handle multiple cases.
#### Parsing
    - [Saving Daylight](savingdaylight.cpp) [(Kattis)](https://open.kattis.com/problems/savingdaylight)
        - Trivial input parsing.
## 2. Data Structures and Libraries
#### Sorting
    - [Mjehuric](mjehuric.cpp) [(Kattis)](https://open.kattis.com/problems/mjehuric)
        - Simulate a bubble sort.
## 3a. Complete Search
#### Trivial
    - [Nine Knights](nineknights.cpp) [(Kattis)](https://open.kattis.com/problems/nineknights)
        - Simple simulation. Check all knights and ensure there are 9 knights on the board.
## 3b. Divide and Conquer
## 3c. Greedy
## 3d. Dynamic Programming (DP)
#### Bitmask DP
    - [Tri Tiling](tritiling.cpp) [(Kattis)](https://open.kattis.com/problems/tritiling)
        - Consider how each state of a column can be built from previously filled columns using 2x1 tiles.
        - Track all the partially filled states for each column. Answer is dp\[n\]\[7\] where 7 represents all 3 cells in the column are filled.
        - No solution for odd numbered columns. Base case: dp\[0\]\[7\] = 1
## 4. Graph Problems
#### Bipartite Matching
    - [Absurdistan Roads III](absurdistan3.cpp) [(Kattis)](https://open.kattis.com/absurdistan3)
#### Djikstra's Algorithm
    - [Flowery Trails](flowerytrails.cpp) [(Kattis)](https://open.kattis.com/problems/flowerytrails)
        - Note: Must keep track of parents of each vertex that is used in the set of shortest paths.
    - [Get Shorty](getshorty.cpp) [(Kattis)](https://open.kattis.com/problems/getshorty)
        - Note: path "length" is 1 - product of edge weights. We want to maximize in this case.
#### Topological Sort
    - [Pick Up Sticks](pickupsticks.cpp) [(Kattis)](https://open.kattis.com/problems/pickupsticks)
## 5. Math
#### Extended Euclidean Algorithm and Chinese Remainder Theorem
    - [So You Like Your Food Hot?](soyoulikeyourfoodhot.cpp) [(Kattis)](https://open.kattis.com/problems/soyoulikeyourfoodhot)
        - Multiply all inputs by 100 to convert to integers. Then run extended euclidean algorithm and find all solutions with positive (x,y).
        - Watch for rounding error when casting 100*input to integers.
#### Formula from Observations
    - [Digits](digits.cpp) [(Kattis)](https://open.kattis.com/problems/digits)
        - Check the following 4 cases:
            - 1 then i=1
            - 1 digit then i = 2
            - 2-9 digits then i = 3
            - 10 or more then i = 4 (up to 1e10 - 1, but input never exceeds 1e6)
#### Large Numbers
    - [Divide by 100](divideby100.cpp) [(Kattis)](https://open.kattis.com/problems/divideby100)
        - Process as a string. Insert decimal if needed. Watch for case where divisor > dividend.
#### Prime Numbers
    - [Goldbach 2](goldbach2.cpp) [(Kattis)](https://open.kattis.com/problems/goldbach2)
        - Precompute primes and use 2 pointer approach on list of primes to find pairs that sum to the given value.
    - [Pseudoprime](pseudoprime.cpp) [(Kattis)](https://open.kattis.com/problems/pseudoprime)
        - If p is not prime AND a^p mod p == 1, then it's pseudoprime. Use modular exponentiation.

## 6. String Processing
#### KMP
#### Suffix Array & LCP Array
## 7. Computational Geometry
## 8. Misc/Other
