sum of the numbers from 1to n in 4 different ways... (in java)

 //adding numbers from 1 to n
    public static int sum(int n,int i){
        if(i==n)
            return n;
        i=i+sum(n,i+1);
        return i;
    }

    //adding numbers from n to 1
    public static int sum_rev(int n) {
        if(n==1)
            return n;
        return n+sum_rev(n-1);
    }

    //adding numbers from 1 to n backtrack and  without incremental recursions
    public static int sum_backtrack(int n) {
        if(n==1)
            return n;
        return n+sum_backtrack(n-1);
    }

    //adding numbers from n to 1 backtrack and without decremental recursions
    public static int sum_rev_backtrack(int n,int i) {
        if(i==n)
            return n;
        return i+sum_rev_backtrack(n, i+1);
    }