bool is_prime(int n) {
    if (n < 2) return false;

    int i = 2;

    while (i * i <= n) {
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}

vector<int> solve(int n) {
    vector<int> result;
    for(int i = 1; i<=n; i++){
        if(is_prime(i))
        result.push_back(i);
    }
    return result;
}
