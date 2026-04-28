;

    int rem = 0;

    int rev = 0;

    while(n != 0){
        rem = n%10;
        rev = rev*place + rem;
        place = place*10;
        n = n/10;