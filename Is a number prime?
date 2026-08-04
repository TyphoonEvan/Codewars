bool isPrime(int num) {
    int count = 0;
    
    if (num <= 1)
        return false;
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                count++;
        }
        if (count > 0)
            return false;
        else
            return true;
    }
}
