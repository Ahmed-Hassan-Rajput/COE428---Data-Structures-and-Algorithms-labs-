void mySort(int d[], unsigned int n)
{
int i, j;
for(j=0;j<n-1;j++){
    for(i=0;i<n-1;i++){
        if(d[i]>d[i+1]){
        int t = d[i];
        d[i] = d[i+1];
        d[i+1] = t;
        }

    }
}

}
