void SieveOfEratosthenes(ll *pno)
{
    for (ll i = 2; i < 1000005; i++)
    {
        pno[i] = 1;
    }
    for (ll i = 2; i * i <= 1000005; i++)
    {
        if (pno[i] == 1)
        {
            for (ll j = i * i; j <= 1000005; j += i)
                pno[j] = 0;
        }
    }
}