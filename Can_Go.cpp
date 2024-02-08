#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll N = 1e5 + 5;
const ll INF = 1e18;

vector<pair<ll, ll>> v[N];
ll dis[N];

class CompareCell
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second < b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, CompareCell> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll parentCost = parent.first;
        ll parentNode = parent.second;

        if (parentCost > dis[parentNode])
            continue;

        for (pair<ll, ll> child : v[parentNode])
        {
            ll childNode = child.first;
            ll childCost = child.second;

            if (dis[parentNode] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parentNode] + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    ll node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        ll a, b, cost;
        cin >> a >> b >> cost;

        v[a].push_back({b, cost});
    }

    for (ll i = 0; i < node; i++)
    {
        dis[i] = INF;
    }

    ll src, test_case;
    cin >> src >> test_case;

    dijkstra(src);

    while (test_case--)
    {
        ll destination, cost;
        cin >> destination >> cost;

        if (dis[destination] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
