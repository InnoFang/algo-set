#include <iostream> 
#include <cstdio> 
#include <algorithm>

using namespace std;
 
struct mooncake {
    double store;
    double sell;
    double price;
} cake[1010];

bool cmp(mooncake a, mooncake b) {
    return a.price > b.price;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n;
    double d;
    scanf("%d%lf", &n, &d);
    for (int i = 0; i < n; ++ i) {
        scanf("%lf", &cake[i].store);
    }

    for (int i = 0; i < n; ++ i) {
        scanf("%lf", &cake[i].sell);
        cake[i].price = cake[i].sell / cake[i].store;
    }

    sort(cake, cake + n, cmp);

    // for (auto c: cake) {
    //     cout << c.store << " " << c.sell << " " << c.price << endl;
    // }

    double ans = 0;
    for (int i = 0; i < n; ++ n) {
        if (cake[i].store <= d) {
            ans += cake[i].sell;
            d -= cake[i].store;
        } else {
            ans += d * cake[i].price;
            break;
        }
    }

    printf("%.2lf\n", ans);


    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}