

void preprocessing(vector<int> &b,int len,vector<int> a,int n)
{
for (int i=0; i<n; ++i)
    b[i / len] += a[i];

}
void square_root_function(){
// input taking
int n;
cin>>n;

// declaration and value insert
vector<int> a (n);
for(int i=0;i<n;i++)
cin>>a[i];



// preprocessing
int len = (int) sqrt (n + .0) + 1; // size of the block and the number of blocks
vector<int> b (len);


preprocessing(b,len,a,n)


cin>>q;
while(q--){

// answering the q queries 

    int l, r; 
    cin>>l>>r;
  // read input data for the next query
    int sum = 0;

    for (int i=l; i<=r; )
        if (i % len == 0 && i + len - 1 <= r) {
            // if the whole block starting at i belongs to [l, r]
            sum += b[i / len];
            i += len;
        }
        else {
            sum += a[i];
            ++i;
        }
}

} 