const char* checkOddPairs(long long A, long long B, long long C) {
    int odd_count = (A % 2 != 0) + (B % 2 != 0) + (C % 2 != 0);
    int even_count = 3 - odd_count;
    
    if (odd_count > 0 && even_count > 0) {
        return "YES";
    } else {
        return "NO";
    }
}
