long taumBday(int b, int w, int bc, int wc, int z) {
        
    long price = 0;
    long bl = (long) b;
    long wl = (long) w;
    long bcl = (long) bc;
    long wcl = (long) wc;
    long zl = (long) z;    
            
    if(bcl + zl > wcl)
        price = (wl * wcl);
    else
        price = (wl * (bcl + zl));
            
    if(wcl + zl > bcl)
        price += (bl * bcl);
    else
        price += (bl * (wcl + zl));
        
    return price;
}