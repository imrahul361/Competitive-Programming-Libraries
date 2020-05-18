ll power(ll a, ll n)
{
    if (!n)
        return 1;
    ll pt = power(a, n / 2);
    pt *= pt, pt %= MOD;
    if (n & 1)
        pt *= a, pt %= MOD;
    return pt;
}