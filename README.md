# Cpp-Coding-Excersies


_Purpose_
-----------------------------------------------------------------------------------------------------------------
This is a library of all the different C++ coding exercises and small prototype project, namespaces, functions, etc, I have worked on to help with my skills and logic as a developer!

_Study Resources_ 
-----------------------------------------------------------------------------------------------------------------
_LEARNCPP.COM_
[learncpp.com](https://www.learncpp.com/)

_FREECODECAMP CHANNEL_
[https://www.youtube.com/@freecodecamp](https://www.youtube.com/@freecodecamp)

_UDEMY COURSE: BEGINNING C++ PROGRAMMING_
[https://www.udemy.com/course/beginning-c-plus-plus-programming/](https://www.udemy.com/course/beginning-c-plus-plus-programming/)

_LEETCODE WEBSITE_
[https://leetcode.com/](https://leetcode.com/)

-----------------------------------------------------------------------------------------------------------------

_Random Number Generator Excersies_

Approach A:
```
static void RandomNumberGenerator_Approach_A(int a, int b, int loopCount)
{
    std::random_device rd;  // a seed source for the random number engine
 
    static auto gen = std::mt19937(rd());     // mersenne_twister_engine seeded with rd()
    
    //Distributes numbers from within the range of the min number value to max number value (a , b)
    auto distrib = std::uniform_int_distribution<int>(a, b);

    static std::vector<int> random_Number_Vector;

    for (int n = 0; n != loopCount; ++n) {
        random_Number_Vector.push_back(distrib(gen));
    }

    std::cout << "Uniform Int Distribution Method Approach A:\n[ ";
    for (auto& items : random_Number_Vector) {
        std::cout << items << " ";
    }
    std::cout << "]";
}
```

Output:
```
Uniform Int Distribution Method Approach A:
[ 26 100 24 20 78 97 7 28 63 51 42 93 9 6 18 50 97 3 23 34 52 67 81 80 75 ]
```

Approach B:
```
std::vector<int> RandomNumberGenerator_Approach_B(int a, int b, int loopCount) {
    
    std::vector<int> newRandomNumberVector;

    static auto gen = std::mt19937(std::random_device()());

    auto distrib = std::uniform_int_distribution<>(a, b);

    for (int n = 0; n != loopCount; ++n) {
        newRandomNumberVector.push_back(distrib(gen));
    }
    return newRandomNumberVector;
}

/// Main.cpp
    //Approach B
    std::vector<int> num = RandomNumberGenerator_Approach_B(0, 100, 5);

    std::cout << "Uniform Int Distribution Method Approach B (vector):\n[ ";
    for (auto& items : num) {
        std::cout << items << " ";
    }
    std::cout << "]";
    std::cout << std::endl;

    std::cin.get();

```


