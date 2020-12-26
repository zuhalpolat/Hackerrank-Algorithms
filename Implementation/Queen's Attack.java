    // Complete the queensAttack function below.
    static int queensAttack(int n, int k, int r_q, int c_q, int[][] obstacles) {
        
        int attack = 0, c_o, r_o;
        
        int upside = n - r_q, down = r_q - 1;
        int left = c_q - 1, right = n - c_q;
        int upleft = Math.min(n - r_q, Math.abs(1 - c_q)), upright = n - Math.max(c_q, r_q);
        int downleft = Math.min(r_q, c_q) - 1, downright = Math.min(r_q - 1, n - c_q);
        
        for(int i = 0; i < k; i++){
            
            c_o = obstacles[i][1];
            r_o = obstacles[i][0];
            
            if(c_o == c_q){
                
                if(r_o > r_q)
                    upside = Math.min(upside, r_o -  r_q - 1);
                    
                if(r_o < r_q)
                    down = Math.min(down, r_q - r_o - 1);
            }
            
            if(r_o == r_q){
                
                if(c_o > c_q)
                    right = Math.min(right, c_o - c_q - 1);
                    
                if(c_o < c_q)
                    left = Math.min(left, c_q - c_o - 1);
            }
            
            if(Math.abs(c_q - c_o) == Math.abs(r_q - r_o)){
            
                if  (r_o > r_q){ 
                    
                    if  (c_o < c_q) 
                        upleft = Math.min(upleft, r_o - r_q - 1);
                        
                    if  (c_o > c_q) 
                        upright = Math.min(upright, c_o - c_q - 1);
                }        
                if  (r_o < r_q){ 
                    
                    if  (c_o < c_q) 
                        downleft = Math.min(downleft, c_q - c_o - 1); 
                                      
                    if  (c_o > c_q) 
                        downright = Math.min(downright, c_o - c_q - 1);              
                }
            }
        }
        attack = upside + down + right + left + upleft + upright + downleft + downright;
        
        return attack;
