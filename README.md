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
    std::random_device rd;
    static auto gen = std::mt19937(rd());     

    auto distrib = std::uniform_int_distribution<>(a, b);

    static std::vector<int> random_Number_Vector;

    for (int n = 0; n != loopCount; ++n) {
        random_Number_Vector.push_back(distrib(gen));
    }

    std::cout << "Uniform Int Distribution Method:\n[ ";
    for (auto& items : random_Number_Vector) {
        std::cout << items << " ";
    }
    std::cout << "]";
}
```


