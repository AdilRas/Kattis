# Kattis
## 1. Simple, Ad Hoc
- Simple Control Structures
    - [Judging Moose](judgingmoose.cpp) [(Kattis)](https://open.kattis.com/problems/judgingmoose) 
- Simulation
    - [Baby Bites](babybites.cpp) [(Kattis)](https://open.kattis.com/problems/babybites)
        - Simple simulation. Print "something is fishy" if a number appears out of order.
    - [Jolly Jumpers](jollyjumpers.cpp) [(Kattis)](https://open.kattis.com/problems/jollyjumpers)
        - Simple simulation. Maintain bool arrya to track which pairwise differences have been seen.
- Parsing
    - [Saving Daylight](savingdaylight.cpp) [(Kattis)](https://open.kattis.com/problems/savingdaylight)
        - Trivial input parsing.
## 2. Data Structures and Libraries
- Sorting
    - [Mjehuric](mjehuric.cpp) [(Kattis)](https://open.kattis.com/problems/mjehuric)
        - Simulate a bubble sort.
## 3a. Complete Search
- Trivial
    - [Nine Knights](nineknights.cpp) [(Kattis)](https://open.kattis.com/problems/nineknights)
        - Simple simulation. Check all knights and ensure there are 9 knights on the board.
## 3b. Divide and Conquer
## 3c. Greedy
## 3d. Dynamic Programming (DP)
## 4. Graph Problems
- Bipartite Matching
    - [Absurdistan Roads III](absurdistan3.cpp) [(Kattis)](https://open.kattis.com/absurdistan3)
- Djikstra's Algorithm
    - [Flowery Trails](flowerytrails.cpp) [(Kattis)](https://open.kattis.com/problems/flowerytrails)
        - Note: Must keep track of parents of each vertex that is used in the set of shortest paths.
## 5. Math
- Formula from Observations
    - [Digits](digits.cpp) [(Kattis)](https://open.kattis.com/problems/digits)
        - Check the following 4 cases:
            - 1 then i=1
            - 1 digit then i = 2
            - 2-9 digits then i = 3
            - 10 or more then i = 4 (up to 10e10 - 1, but input never exceeds 1e6)
- Large Numbers
    - [Divide by 100](divideby100.cpp) [(Kattis)](https://open.kattis.com/problems/divideby100)
        - Process as a string. Insert decimal if needed. Watch for case where divisor > dividend.
## 6. String Processing
## 7. Computational Geometry
## 8. Misc/Other
