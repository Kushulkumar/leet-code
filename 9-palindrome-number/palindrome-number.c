bool isPalindrome(int x) {
  int  n= x;
    if(x<0)
    {
        return false;
    }
    else
    {
        long int r = 0;
        while (x > 0)
        {
            int d = x% 10;
             r= r * 10 + d;
             x=x / 10;
        }
        if(n==r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}