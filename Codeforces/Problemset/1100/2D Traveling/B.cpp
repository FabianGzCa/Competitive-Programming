// Problem: https://codeforces.com/contest/1869/problem/B

#include<iostream>
#include<utility>
#include<limits.h>

void solve(){
    //getting input
    int ammount_cities, major_cities, city_origin, city_destination;
    std::cin>>ammount_cities>>major_cities>>city_origin>>city_destination;
    std::pair<int, int> cities[ammount_cities];
    for(int city=0; city<ammount_cities; city++){
        int x, y;
        std::cin>>x>>y;
        cities[city] = {x, y};
    }

    //are our cities major?
    if (city_origin <= major_cities && city_destination <= major_cities){
        std::cout<<"0\n";
        return;
    }

    //direct path?
    std::pair<int, int> city_origin_cont = cities[city_origin-1];
    std::pair<int, int> city_destination_cont = cities[city_destination-1];
    long long direct_distance = (long long)abs(city_origin_cont.first - city_destination_cont.first) +
                          (long long)abs(city_origin_cont.second - city_destination_cont.second);
    if(major_cities<2){
        std::cout<<direct_distance<<"\n";
        return;
    }

    //calculate data
    long long near_major_origin=LONG_LONG_MAX, near_major_destination=LONG_LONG_MAX;
    for(int major_city=0; major_city<major_cities; major_city++){
        std::pair<int, int> actual_city = cities[major_city];
        near_major_origin = std::min((long long)near_major_origin,
            ((long long)abs(city_origin_cont.first - actual_city.first) +
            (long long)abs(city_origin_cont.second - actual_city.second)));
        near_major_destination = std::min((long long)near_major_destination,
            ((long long)abs(city_destination_cont.first - actual_city.first) +
            (long long)abs(city_destination_cont.second - actual_city.second)));
    }

    //solution
    long long major_cities_distance = near_major_origin + near_major_destination;
    long long near_path = std::min(direct_distance, major_cities_distance);
    std::cout<<near_path<<"\n";

}

int main(){
    std::cin.tie(0)->sync_with_stdio(0);
    int tt; std::cin>>tt;
    while(tt--) solve();
    return 0;
}