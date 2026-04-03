    int* p = &a;
    int* q = p;

    *q = 20;

    cout << a << " " << *p;