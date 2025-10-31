class A{
    int a;
    mutable int b;  // declare b as mutable 
                    // will allow non-static functions to write b

    void foo() const {
        b++;
        a++;
    }
};

