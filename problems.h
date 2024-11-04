int floorFunction(double a) {
    return int(a);
}

int ceilingFunction(double a) {
    if (a == int(a)) return int(a);
    return int(a) + 1;
}


void swap_values(double &a, double &b) {
    const double t = a;
    a = b;
    b = t;
    // std::cout << "a=" << a << "\nb=" << b;
}



int multiply(int a, int b) {
    if (b == 1) {
        return a;
    }
    --b;
    return a + multiply(a, b);
}


int digitSum(int n) {
    int s = 0;
    if (n == 0) {
        return s;
    }
    s += n % 10;
    n /= 10;
    return s + digitSum(n);
}


int decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 2 + 10 * decimalToBinary(n / 2);
}


template<typename T>
T midValue(T a, T b, T c) {
    if (a > b && b > c) {
        return b;
    }
    if (c > b && b > a) {
        return b;
    }
    if (a > c && c > b) {
        return c;
    }
    if (b > c && c > a) {
        return c;
    }
    if (c > a && a > b) {
        return a;
    }
    if (b > a && a > c) {
        return a;
    }
    return a;
}