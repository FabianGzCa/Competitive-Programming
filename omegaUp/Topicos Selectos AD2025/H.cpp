#include<iostream>
#include<vector>

#define REP(i,a,n) for(int i=a; i<n; i++)

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int r, c; std::cin>>r>>c;
    int max=0, min=900;
    std::vector<std::string> display(r);
    REP(i,0,r) std::cin>>display[i];
    REP(i,0,r){
        REP(j,0,c){
            if(display[i][j] == 'X'){
                int der=0, aba=0, res=0;
                REP(k,i,r){
                     if(display[k][j] == 'X') aba++;
                     else break;
                }
                REP(k,j,c){
                    if(display[i][k] == 'X') der++;
                    else break;
                }
                REP(k,i,i+aba){
                    REP(l,j,j+der){
                        display[k][l] = '0';
                    }
                }
                res = aba*der;
                max = std::max(max, res);
                min = std::min(min, res);
            }
        }
    }
    min = (min==900)?0:min;
    std::cout<<max<<"\n"<<min<<"\n";
    return 0;
}